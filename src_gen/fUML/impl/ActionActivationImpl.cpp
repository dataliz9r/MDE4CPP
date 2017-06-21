#include "ActionActivationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"
#include "Action.hpp"
#include "ActivityNode.hpp"
#include "OutputPin.hpp"
#include "iterator"
#include "InputPin.hpp"
#include "PinActivation.hpp"
#include "FeatureValue.hpp"
#include "Link.hpp"
#include "LiteralBoolean.hpp"
#include "UmlFactory.hpp"

#include "FUMLFactory.hpp"
#include "Behavior.hpp"



using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ActionActivationImpl::ActionActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	m_pinActivation.reset(new std::vector<std::shared_ptr<fUML::PinActivation>>());
}

ActionActivationImpl::~ActionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ActionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ActionActivationImpl::ActionActivationImpl(const ActionActivationImpl & obj)
{
	//create copy of all Attributes
	m_firing = obj.isFiring();
	m_running = obj.isRunning();

	//copy references with now containment
	
	m_group  = obj.getGroup();

	std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> _incomingEdges = obj.getIncomingEdges();
	this->getIncomingEdges()->insert(this->getIncomingEdges()->end(), _incomingEdges->begin(), _incomingEdges->end());

	m_node  = obj.getNode();

	std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> _outgoingEdges = obj.getOutgoingEdges();
	this->getOutgoingEdges()->insert(this->getOutgoingEdges()->end(), _outgoingEdges->begin(), _outgoingEdges->end());

	std::shared_ptr<std::vector<std::shared_ptr<fUML::PinActivation>>> _pinActivation = obj.getPinActivation();
	this->getPinActivation()->insert(this->getPinActivation()->end(), _pinActivation->begin(), _pinActivation->end());


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> _heldTokensList = obj.getHeldTokens();
	for(std::shared_ptr<fUML::Token> _heldTokens : *_heldTokensList)
	{
		this->getHeldTokens()->push_back(std::shared_ptr<fUML::Token>(dynamic_cast<fUML::Token*>(_heldTokens->copy())));
	}
}

ecore::EObject *  ActionActivationImpl::copy() const
{
	return new ActionActivationImpl(*this);
}

std::shared_ptr<ecore::EClass> ActionActivationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getActionActivation();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ActionActivationImpl::setFiring (bool _firing)
{
	m_firing = _firing;
} 

bool ActionActivationImpl::isFiring() const 
{
	return m_firing;
}

//*********************************
// Operations
//*********************************
void ActionActivationImpl::addOutgoingEdge(std::shared_ptr<fUML::ActivityEdgeInstance>  edge) 
{
	//generated from body annotation
	std::shared_ptr<ActivityNodeActivation> forkNodeActivation;

    if (this->getOutgoingEdges()->empty()) 
    {
        forkNodeActivation.reset(fUML::FUMLFactory::eInstance()->createForkNodeActivation());
        std::shared_ptr<ActivityEdgeInstance> newEdge(fUML::FUMLFactory::eInstance()->createActivityEdgeInstance());
        ActivityNodeActivationImpl::addOutgoingEdge(newEdge);
        forkNodeActivation->addIncomingEdge(newEdge);
        edge->setSource(forkNodeActivation);
    } 
    else 
    {
        forkNodeActivation = this->getOutgoingEdges()->front()->getTarget();
    }
    
    forkNodeActivation->addOutgoingEdge(edge);
}

void ActionActivationImpl::addPinActivation(std::shared_ptr<fUML::PinActivation>  pinActivation) 
{
	//generated from body annotation
	this->getPinActivation()->push_back(pinActivation);
    struct null_deleter{void operator()(void const *) const { } };
    pinActivation->setActionActivation(std::shared_ptr<ActionActivation>(this, null_deleter()));
}

std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> ActionActivationImpl::completeAction() 
{
	//generated from body annotation
	DEBUG_MESSAGE(std::cout<<"[fire] Checking if " << this->getNode()->getName() << " should fire again..."<<std::endl;)

    _beginIsolation();
	std::shared_ptr<std::vector<std::shared_ptr<Token>>> incomingTokens(new std::vector<std::shared_ptr<Token>>());

    this->setFiring(false);
    if (this->isReady()) {
        incomingTokens = this->takeOfferedTokens();
        this->setFiring(this->isFirng() && !incomingTokens->empty());
    }
    _endIsolation();

    return incomingTokens;
}

void ActionActivationImpl::createNodeActivations() 
{
	//generated from body annotation
	std::shared_ptr<uml::Action> action = std::dynamic_pointer_cast<uml::Action> (this->getNode());

    //createinputpin activation
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> inputPinNodes(new std::vector<std::shared_ptr<uml::ActivityNode>>());
    if(action)
    {
    	DEBUG_MESSAGE(std::cout<<"Found"<<action->getInput()->size()<<"input pin(s)."<<std::endl;)
		std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> inputPins = action->getInput();
    	for(std::shared_ptr<uml::InputPin> pin : *inputPins)
    	{
    		if(pin!=nullptr)
    		{
    			inputPinNodes->push_back(pin);
    		}
    		else
    		{
    			DEBUG_MESSAGE(std::cout<<"Warning! Found null Input pin"<<std::endl;)
    		}
    	}
    }
    this->getGroup()->createNodeActivations(inputPinNodes);

    for(std::shared_ptr<uml::ActivityNode> node : *inputPinNodes)
    {
        this->addPinActivation(std::dynamic_pointer_cast<PinActivation> (this->getGroup()->getNodeActivation(node)));
    }

    //create outputpin activation
    std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> outputPinNodes(new std::vector<std::shared_ptr<uml::ActivityNode>>());
    if(action)
    {
    	DEBUG_MESSAGE(std::cout<<"Found"<<action->getOutput()->size()<<"output pin(s)."<<std::endl;)
		std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> outputPins = action->getOutput();
    	for(std::shared_ptr<uml::OutputPin> pin : *outputPins)
    	{
    		if(pin!=nullptr)
            {
    			outputPinNodes->push_back(pin);
            }
    		else
    		{
    			DEBUG_MESSAGE(std::cout<<"Warning! Found null Output pin"<<std::endl;)
    		}
    	}
    }

    this->getGroup()->createNodeActivations(outputPinNodes);

    for(std::shared_ptr<uml::ActivityNode> node : *outputPinNodes)
    {
        this->addPinActivation(std::dynamic_pointer_cast<PinActivation> (this->getGroup()->getNodeActivation(node)));
    }
}

void ActionActivationImpl::doAction() 
{
	//generated from body annotation
	
}

void ActionActivationImpl::fire(std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>>  incomingTokens) 
{
	//generated from body annotation
	    do {

        DEBUG_MESSAGE(std::cout<<"[fire] Action "  << this->getNode()->getName()  << "..."<<std::endl;)
        DEBUG_MESSAGE(std::cout<<"[event] Fire activity=" << this->getActivityExecution()->getBehavior()->getName() << " action="  << this->getNode()->getName()<<std::endl;)

        this->doAction();
        this->sendOffers();
        incomingTokens = this->completeAction();

    } while (incomingTokens->size() > 0);
}

std::shared_ptr<std::vector<std::shared_ptr<fUML::Value>>> ActionActivationImpl::getTokens(std::shared_ptr<uml::InputPin>  pin) 
{
	//generated from body annotation
	DEBUG_MESSAGE(std::cout<<"[getTokens] node = "  << this->getNode()->getName()  << ", pin = "  << pin->getName()<<std::endl;)

	std::shared_ptr<PinActivation> pinActivation(this->retrievePinActivation(pin));
	std::shared_ptr<std::vector<std::shared_ptr<Value>>> values(new std::vector<std::shared_ptr<Value>>());

	std::shared_ptr<std::vector<std::shared_ptr<Token>>> tokenList = pinActivation->getUnofferedTokens();
    for(std::shared_ptr<Token> token : *tokenList)
    {
    	std::shared_ptr<ObjectToken> objToken = std::dynamic_pointer_cast<ObjectToken>(token);
        if(objToken!=nullptr)
        {
        	std::shared_ptr<Value> value = objToken->getValue();
            if(value != nullptr)
            {
                values->push_back(value);
            }
        }
    }

    return values;
}

bool ActionActivationImpl::isFirng() 
{
	//generated from body annotation
	    return this->isFiring();
}

bool ActionActivationImpl::isReady() 
{
	//generated from body annotation
	std::shared_ptr<uml::Action> actionNode = std::dynamic_pointer_cast<uml::Action>(this->getNode());
    bool ready = false;
    if(actionNode != nullptr)
    {
        ready = ActivityNodeActivationImpl::isReady()
                 && ((actionNode->getIsLocallyReentrant()) || !this->isFiring());

         //Has any Edge Offers?
         if(ready)
         {
        	 std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> edgeList = this->getIncomingEdges();
             ready = std::all_of(edgeList->begin(),edgeList->end(),[](std::shared_ptr<ActivityEdgeInstance> edge ){return edge->hasOffer();});
         }

         //Have all Inputpin an Activation?
         if(ready)
         {
        	 std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> list = actionNode->getInput();
             //list->removeAll(nullptr); TODO
             ready = std::all_of(list->begin(),list->end(),[this](std::shared_ptr<uml::InputPin> pin){return this->retrievePinActivation(pin)->isReady();});
         }
    }
    else
    {
    	std::shared_ptr<uml::DataStoreNode> dActivation = std::dynamic_pointer_cast<uml::DataStoreNode>(this->getNode());
        if(dActivation != nullptr)
        {
            ready = true; //TODO
            //Has any Edge Offers?
            if(ready)
            {
            	std::shared_ptr<std::vector<std::shared_ptr<fUML::ActivityEdgeInstance>>> edgeList = this->getIncomingEdges();
                ready = std::all_of(edgeList->begin(),edgeList->end(),[](std::shared_ptr<ActivityEdgeInstance> edge ){return edge->hasOffer();});
            }

            if(!ready)
            {

            }
        }
    }

    return ready;
}

bool ActionActivationImpl::isSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance) 
{
	//generated from body annotation
	    bool isSource = false;
    if (this->getOutgoingEdges()->size() > 0) {
        isSource = this->getOutgoingEdges()->at(0)->getTarget()->isSourceFor(edgeInstance);
    }

    return isSource;
}

std::shared_ptr<fUML::BooleanValue>  ActionActivationImpl::makeBooleanValue(bool value) 
{
	//generated from body annotation
	std::shared_ptr<uml::LiteralBoolean> booleanValue(uml::UmlFactory::eInstance()->createLiteralBoolean());
    booleanValue->setValue(value);
    return std::dynamic_pointer_cast<fUML::BooleanValue>(this->getExecutionLocus()->getExecutor()->evaluate(booleanValue));
}

void ActionActivationImpl::putToken(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<fUML::Value>  value) 
{
	//generated from body annotation
	DEBUG_MESSAGE(std::cout<<("[putToken] node = " + this->getNode()->getName())<<std::endl;)

	std::shared_ptr<ObjectToken> token(fUML::FUMLFactory::eInstance()->createObjectToken());
    token->setValue(value);

    std::shared_ptr<PinActivation> pinActivation = this->retrievePinActivation(pin);
    pinActivation->addToken(token);
}

void ActionActivationImpl::putTokens(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<std::vector<std::shared_ptr<fUML::Value>>>  values) 
{
	//generated from body annotation
	for (std::shared_ptr<Value> value : *values)
    {
        this->putToken(pin,value);
    }
}

std::shared_ptr<fUML::PinActivation>  ActionActivationImpl::retrievePinActivation(std::shared_ptr<uml::Pin>  pin) 
{
	//generated from body annotation
	std::shared_ptr<PinActivation> pinActivation = nullptr;

	std::shared_ptr<std::vector<std::shared_ptr<PinActivation>>> pinActivationList = this->getPinActivation();
    for(std::shared_ptr<PinActivation> thisPinActivation: *pinActivationList)
    {
        if (thisPinActivation->getNode() == pin) {
            pinActivation = thisPinActivation;
            break;
        }
    }

    return pinActivation;
}

void ActionActivationImpl::run() 
{
	//generated from body annotation
	    ActivityNodeActivationImpl::run();

    if (!this->getOutgoingEdges()->empty()) {
        this->getOutgoingEdges()->front()->getTarget()->run();
    }

    this->setFiring( false);
}

void ActionActivationImpl::sendOffers() 
{
	//generated from body annotation
	std::shared_ptr<uml::Action> action = std::dynamic_pointer_cast <uml::Action>(this->getNode());

    // *** Send offers from all output pins concurrently. ***
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> outputPinList = action->getOutput();
    for(std::shared_ptr<uml::OutputPin> outputPin: *outputPinList)
    {
    	std::shared_ptr<PinActivation> pinActivation = this->retrievePinActivation(outputPin);
        pinActivation->sendUnofferedTokens();
    }

    // Send offers on all outgoing control flows.
    if (!this->getOutgoingEdges()->empty()) {
    	std::shared_ptr<std::vector<std::shared_ptr<Token>>> tokens(new std::vector<std::shared_ptr<Token>>());
        tokens->push_back(std::shared_ptr<Token>(fUML::FUMLFactory::eInstance()->createControlToken()));
        this->addTokens(tokens);
        this->getOutgoingEdges()->front()->sendOffer(tokens);
    }
}

std::shared_ptr<std::vector<std::shared_ptr<fUML::Token>>> ActionActivationImpl::takeOfferedTokens() 
{
	//generated from body annotation
	std::shared_ptr<uml::Action> action = std::dynamic_pointer_cast<uml::Action> (this->getNode());

    if(action != nullptr)
    {
        this->setFiring(!action->getIsLocallyReentrant());
    }

    std::shared_ptr<std::vector<std::shared_ptr<Token>>> offeredTokens(new std::vector<std::shared_ptr<Token>>());
    std::shared_ptr<std::vector<std::shared_ptr<ActivityEdgeInstance>>> incomingEdgeList = this->getIncomingEdges();
    for(std::shared_ptr<ActivityEdgeInstance> incomingEdge : *incomingEdgeList)
    {
    	std::shared_ptr<std::vector<std::shared_ptr<Token>>> tokenList = incomingEdge->takeOfferedTokens();
        for(std::shared_ptr<Token> token: *tokenList)
        {
            token->withdraw();
            offeredTokens->push_back(token);
        }
    }

    // *** Fire all input pins concurrently. ***
    if(action != nullptr)
    {
    	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> inputList = action->getInput();
        for (std::shared_ptr<uml::InputPin> pin : *inputList)
        {
            if(pin!=nullptr)
			{
            	std::shared_ptr<PinActivation> pinActivation = this->retrievePinActivation(pin);
            	std::shared_ptr<std::vector<std::shared_ptr<Token>>> tokens = pinActivation->takeOfferedTokens();
            	pinActivation->fire(tokens);
            	offeredTokens->insert(offeredTokens->end(), tokens->begin(), tokens->end());
            }
            else
            {
                DEBUG_MESSAGE(std::cout<<"Warning! Firing: A Pin was null!"<<std::endl;)
            }
        }
    }

    return offeredTokens;
}

std::shared_ptr<std::vector<std::shared_ptr<fUML::Value>>> ActionActivationImpl::takeTokens(std::shared_ptr<uml::InputPin>  pin) 
{
	//generated from body annotation
	DEBUG_MESSAGE(std::cout<<"[takeTokens] node = "  << this->getNode()->getName()  << ", pin = "  << pin->getName()<<std::endl;)

	std::shared_ptr<PinActivation> pinActivation = this->retrievePinActivation(pin);
	std::shared_ptr<std::vector<std::shared_ptr<Value>>> values(new std::vector<std::shared_ptr<Value>>());

	std::shared_ptr<std::vector<std::shared_ptr<Token>>> tokenList = pinActivation->takeUnofferedTokens();
	for(std::shared_ptr<Token> token : *tokenList)
    {
    	std::shared_ptr<Value> value = token->getValue();
        if(value != nullptr)
        {
        	DEBUG_MESSAGE(std::cout<<"ActionActivation - takeTokens value"<<value->toString()<<std::endl;)
            values->push_back(value);
        }
    }
    return values;
}

void ActionActivationImpl::terminate() 
{
	//generated from body annotation
	    ActivityNodeActivationImpl::terminate();

    if (!this->getOutgoingEdges()->empty()) {
        this->getOutgoingEdges()->front()->getTarget()->terminate();
    }
}

bool ActionActivationImpl::valueParticipatesInLink(std::shared_ptr<fUML::Value>  value,std::shared_ptr<fUML::Link>  link) 
{
	//generated from body annotation
	bool participates = false;

	std::shared_ptr<std::vector<std::shared_ptr<FeatureValue>>> featureValueList = link->getFeatureValues();
    for (std::shared_ptr<FeatureValue> featureValue : *featureValueList)
    {
        if(featureValue->getValues()->front()->equals(value))
        {
            participates = true;
            break;
        }
    }

    return participates;
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<fUML::PinActivation>>> ActionActivationImpl::getPinActivation() const
{

    return m_pinActivation;
}


//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ActionActivationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ACTIONACTIVATION_FIRING:
			return isFiring(); //787
		case FUMLPackage::ACTIVITYNODEACTIVATION_GROUP:
			return getGroup(); //783
		case FUMLPackage::ACTIVITYNODEACTIVATION_HELDTOKENS:
			return getHeldTokens(); //782
		case FUMLPackage::ACTIVITYNODEACTIVATION_INCOMINGEDGES:
			return getIncomingEdges(); //781
		case FUMLPackage::ACTIVITYNODEACTIVATION_NODE:
			return getNode(); //784
		case FUMLPackage::ACTIVITYNODEACTIVATION_OUTGOINGEDGES:
			return getOutgoingEdges(); //780
		case FUMLPackage::ACTIONACTIVATION_PINACTIVATION:
			return getPinActivation(); //786
		case FUMLPackage::ACTIVITYNODEACTIVATION_RUNNING:
			return isRunning(); //785
	}
	return boost::any();
}