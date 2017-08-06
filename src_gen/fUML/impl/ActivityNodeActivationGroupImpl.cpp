#include "ActivityNodeActivationGroupImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"
#include "ActivityNode.hpp"
#include "ActivityNodeActivation.hpp"
#include "ActivityNodeActivationGroup.hpp"
#include "ActivityParameterNodeActivation.hpp"
#include "ControlNodeActivation.hpp"

#include "ActivityEdgeInstance.hpp"
#include "InputPin.hpp"
#include "Class.hpp"
#include "ActivityEdge.hpp"
#include "ActivityParameterNodeActivation.hpp"
#include "FUMLFactory.hpp"

//Forward declaration includes
#include "ActivityEdge.hpp"

#include "ActivityEdgeInstance.hpp"

#include "ActivityExecution.hpp"

#include "ActivityNode.hpp"

#include "ActivityNodeActivation.hpp"

#include "ActivityParameterNodeActivation.hpp"

#include "StructuredActivityNodeActivation.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ActivityNodeActivationGroupImpl::ActivityNodeActivationGroupImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	

		m_edgeInstances.reset(new Bag<fUML::ActivityEdgeInstance>());
	
	

		m_nodeActivations.reset(new Bag<fUML::ActivityNodeActivation>());
	
	

		m_suspendedActivations.reset(new Bag<fUML::ActivityNodeActivation>());
	
	

	//Init references
	

	

	
	

	
	

	
	
}

ActivityNodeActivationGroupImpl::~ActivityNodeActivationGroupImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ActivityNodeActivationGroup "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ActivityNodeActivationGroupImpl::ActivityNodeActivationGroupImpl(const ActivityNodeActivationGroupImpl & obj):ActivityNodeActivationGroupImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ActivityNodeActivationGroup "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_activityExecution  = obj.getActivityExecution();

	m_containingNodeActivation  = obj.getContainingNodeActivation();

		std::shared_ptr< Bag<fUML::ActivityNodeActivation> >
	 _suspendedActivations = obj.getSuspendedActivations();
	m_suspendedActivations.reset(new 	 Bag<fUML::ActivityNodeActivation> 
	(*(obj.getSuspendedActivations().get())));


    
	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<fUML::ActivityEdgeInstance>> _edgeInstancesList = obj.getEdgeInstances();
	for(std::shared_ptr<fUML::ActivityEdgeInstance> _edgeInstances : *_edgeInstancesList)
	{
		this->getEdgeInstances()->add(std::shared_ptr<fUML::ActivityEdgeInstance>(dynamic_cast<fUML::ActivityEdgeInstance*>(_edgeInstances->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_edgeInstances" << std::endl;
	#endif
	std::shared_ptr<Bag<fUML::ActivityNodeActivation>> _nodeActivationsList = obj.getNodeActivations();
	for(std::shared_ptr<fUML::ActivityNodeActivation> _nodeActivations : *_nodeActivationsList)
	{
		this->getNodeActivations()->add(std::shared_ptr<fUML::ActivityNodeActivation>(dynamic_cast<fUML::ActivityNodeActivation*>(_nodeActivations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nodeActivations" << std::endl;
	#endif

	
	

	
	

}

ecore::EObject *  ActivityNodeActivationGroupImpl::copy() const
{
	return new ActivityNodeActivationGroupImpl(*this);
}

std::shared_ptr<ecore::EClass> ActivityNodeActivationGroupImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getActivityNodeActivationGroup();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
void
 ActivityNodeActivationGroupImpl::activate(std::shared_ptr<Bag<uml::ActivityNode> >  nodes,std::shared_ptr<Bag<uml::ActivityEdge> >  edges) 
{
	//generated from body annotation
	this->createNodeActivations(nodes);
    this->createEdgeInstance(edges);    
    std::shared_ptr<Bag<fUML::ActivityNodeActivation> > nodeActiviations = this->getNodeActivations();
    this->run(nodeActiviations);
}

void
 ActivityNodeActivationGroupImpl::addEdgeInstance(std::shared_ptr<fUML::ActivityEdgeInstance>  instance) 
{
	//generated from body annotation
	struct null_deleter{void operator()(void const *) const { } };
	instance->setGroup(std::shared_ptr<ActivityNodeActivationGroup>(this, null_deleter()));
    this->getEdgeInstances()->push_back(instance);
}

void
 ActivityNodeActivationGroupImpl::addNodeActivation(std::shared_ptr<fUML::ActivityNodeActivation>  activation) 
{
	//generated from body annotation
	struct null_deleter{void operator()(void const *) const { } };
	activation->setGroup(std::shared_ptr<ActivityNodeActivationGroup>(this, null_deleter()));
    this->getNodeActivations()->push_back(activation);
}

bool
 ActivityNodeActivationGroupImpl::checkIncomingEdges(std::shared_ptr<Bag<fUML::ActivityEdgeInstance> >  incomingEdges,std::shared_ptr<Bag<fUML::ActivityNodeActivation> >  activations) 
{
	//generated from body annotation
	    unsigned int j = 0;
    bool notFound = true;

    while (j < incomingEdges->size() && notFound) {
        unsigned int k = 0;
        while (k < activations->size() && notFound) {
            if (activations->at(k)->isSourceFor(
                        incomingEdges->at(j))) {
                notFound = false;
            }
            k = k + 1;
        }
        j = j + 1;
    }

    return notFound;
}

void
 ActivityNodeActivationGroupImpl::createEdgeInstance(std::shared_ptr<Bag<uml::ActivityEdge> >  edges) 
{
	//generated from body annotation
	for (unsigned int i = 0; i < edges->size(); i++) 
	{
        std::shared_ptr<uml::ActivityEdge> edge = edges->at(i);
        //DEBUG_MESSAGE(std::cout<<"EDGE:" << edge << edge->getName()<<std::endl;)
        DEBUG_MESSAGE(std::cout<<"[createEdgeInstances] Creating an edge instance from "
                   << edge->getSource()->getName()
                   << " to "
                   << edge->getTarget()->getName()
                   << "."<<std::endl;)

        std::shared_ptr<ActivityEdgeInstance> edgeInstance(fUML::FUMLFactory::eInstance()->createActivityEdgeInstance());
        edgeInstance->setEdge(edge);

        this->addEdgeInstance(edgeInstance);
        //DEBUG_MESSAGE(std::cout<<"SOURCE:"<<edge->getSource()<<std::endl;)
        //DEBUG_MESSAGE(std::cout<<"TARGET:"<<edge->getTarget()<<std::endl;)
        this->getNodeActivation(edge->getSource())->addOutgoingEdge(edgeInstance);
        this->getNodeActivation(edge->getTarget())->addIncomingEdge(edgeInstance);
    }

	std::shared_ptr<Bag<ActivityNodeActivation> > nodeActivations = this->getNodeActivations();
    for (unsigned int i = 0; i < nodeActivations->size(); i++) {
    	std::shared_ptr<ActivityNodeActivation> nodeActivation = nodeActivations->at(i);
        nodeActivation->createEdgeInstances();
    }
}

std::shared_ptr<fUML::ActivityNodeActivation> 
 ActivityNodeActivationGroupImpl::createNodeActivation(std::shared_ptr<uml::ActivityNode>  node) 
{
	//generated from body annotation
	std::shared_ptr<ActivityNodeActivation>  activation = std::dynamic_pointer_cast<ActivityNodeActivation> (this->retrieveActivityExecution()
                                                                                  ->getLocus()->getFactory()->instantiateVisitor(node));
    if(activation!=nullptr)
    {
    	activation->setNode(node);
    	activation->setRunning(false);
    	this->addNodeActivation(activation);
    	activation->createNodeActivations();
    }
    else
    {
        DEBUG_MESSAGE(std::cout<<"Null activation"<<std::endl;)
    }
    return activation;
}

void
 ActivityNodeActivationGroupImpl::createNodeActivations(std::shared_ptr<Bag<uml::ActivityNode> >  nodes) 
{
	//generated from body annotation
	for (unsigned int i = 0; i < nodes->size(); i++) 
	{
		std::shared_ptr<uml::ActivityNode> node = nodes->at(i);
        if(node != nullptr)
        {
        	DEBUG_MESSAGE(std::cout<<"[createNodeActivations] Creating a node activation for "
                   << node->getName() << "..."<<std::endl;)
        	this->createNodeActivation(node);
        }
        else
        {
            DEBUG_MESSAGE(std::cout<<"Warning! A node was null!"<<std::endl;)
        }
    }
}

std::shared_ptr<fUML::ActivityNodeActivation> 
 ActivityNodeActivationGroupImpl::getNodeActivation(std::shared_ptr<uml::ActivityNode>  node) 
{
	//generated from body annotation
		std::shared_ptr<ActivityNodeActivation> activation = nullptr;

	std::shared_ptr<uml::Pin> pin = std::dynamic_pointer_cast<uml::Pin> (node);
    if ((this->getContainingNodeActivation() != nullptr) && (pin != nullptr))
    {
        activation = this->getContainingNodeActivation()->retrievePinActivation(pin);
    }

    if (activation == nullptr) 
    {
        unsigned int i = 0;
        while ((activation == nullptr) && (i < this->getNodeActivations()->size())) 
        {
            activation = this->getNodeActivations()->at(i)->getNodeActivation(node);
            i = i + 1;
        }
    }

    return activation;
}

std::shared_ptr<Bag<fUML::ActivityParameterNodeActivation> >
 ActivityNodeActivationGroupImpl::getOutputParameterNodeActivations() 
{
	//generated from body annotation
	std::shared_ptr<Bag<ActivityParameterNodeActivation> > parameterNodeActivations(new Bag<ActivityParameterNodeActivation>());
	std::shared_ptr<Bag<ActivityNodeActivation> > nodeActivations = this->getNodeActivations();
    for (unsigned int i = 0; i < nodeActivations->size(); i++)
    {
    	std::shared_ptr<ActivityNodeActivation> activation = nodeActivations->at(i);
    	std::shared_ptr<ActivityParameterNodeActivation> paraActivation = std::dynamic_pointer_cast<ActivityParameterNodeActivation>(activation);
        if (paraActivation != nullptr)
        {
            if (activation->getIncomingEdges()->size() > 0)
            {
                parameterNodeActivations->push_back(paraActivation);
            }
        }
    }

    return parameterNodeActivations;
}

bool
 ActivityNodeActivationGroupImpl::hasSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance) 
{
	//generated from body annotation
		bool hasSource = false;
	std::shared_ptr<Bag<ActivityNodeActivation> > activations = this->getNodeActivations();
    unsigned int i = 0;
    while (!hasSource && i < activations->size()) 
    {
        hasSource = activations->at(i)->isSourceFor(edgeInstance);
        i = i + 1;
    }
    return hasSource;
}

bool
 ActivityNodeActivationGroupImpl::isSuspended() 
{
	//generated from body annotation
	    return this->getSuspendedActivations()->size() > 0;
}

void
 ActivityNodeActivationGroupImpl::resume(std::shared_ptr<fUML::ActivityNodeActivation>  activation) 
{
	//generated from body annotation
		DEBUG_MESSAGE(std::cout<<"[resume] node=" << (activation->getNode() == nullptr ? "null" : activation->getNode()->getName())<<std::endl;)

    bool found = false;
    unsigned int i = 0;
    while (!found && i < this->getSuspendedActivations()->size()) {
        if (this->getSuspendedActivations()->at(i) == activation) {
            this->getSuspendedActivations()->erase(this->getSuspendedActivations()->begin() + i);
            found = true;
        }
        i = i + 1;
    }
    if (!this->isSuspended()) 
    {
    	std::shared_ptr<StructuredActivityNodeActivation> containingNodeActivation = this->getContainingNodeActivation();
        if (containingNodeActivation != nullptr) 
        {
            containingNodeActivation->resume();
        }
    }
}

std::shared_ptr<fUML::ActivityExecution> 
 ActivityNodeActivationGroupImpl::retrieveActivityExecution() 
{
	//generated from body annotation
	std::shared_ptr<ActivityExecution> activityExecution = this->getActivityExecution();
    if (activityExecution == nullptr) 
    {
        activityExecution = this->getContainingNodeActivation()->getGroup()->retrieveActivityExecution();
    }
    return activityExecution;
}

void
 ActivityNodeActivationGroupImpl::run(std::shared_ptr<Bag<fUML::ActivityNodeActivation> >  activations) 
{
	//generated from body annotation
	for (unsigned int i = 0; i < activations->size(); i++)
	{
		std::shared_ptr<ActivityNodeActivation> activation = activations->at(i);
        activation->run();
    }

    DEBUG_MESSAGE(std::cout<<"[run] Checking for enabled nodes..."<<std::endl;)

    std::shared_ptr<Bag<ActivityNodeActivation> > enabledActivations(new Bag<ActivityNodeActivation>());

    for (unsigned int i = 0; i < activations->size(); i++)
    {
    	std::shared_ptr<ActivityNodeActivation> activation = activations->at(i);

        DEBUG_MESSAGE(std::cout<<"[run] Checking node " << activation->getNode()->getName()<< "..."<<std::endl;)

        std::shared_ptr<ActionActivation> actionActivation = std::dynamic_pointer_cast<ActionActivation>(activation);
        if (actionActivation != nullptr
                || std::dynamic_pointer_cast<ControlNodeActivation>(activation) != nullptr
                || std::dynamic_pointer_cast<ActivityParameterNodeActivation>(activation) != nullptr)
        {
        	std::shared_ptr<Bag<fUML::ActivityEdgeInstance> > edges = activation->getIncomingEdges();
            bool isEnabled = this->checkIncomingEdges(edges, activations);

            // For an action activation, also consider incoming edges to
            // input pins
            if (isEnabled && actionActivation != nullptr) 
            {
            	std::shared_ptr<uml::Action> action = std::dynamic_pointer_cast<uml::Action>(activation->getNode());
                if(action != nullptr)
                {
                	std::shared_ptr<Bag<uml::InputPin> > inputPins = action->getInput();
                    unsigned int j = 1;
                    while ((j <= inputPins->size()) && isEnabled) 
                    {
                    	std::shared_ptr<uml::InputPin> inputPin = inputPins->at(j - 1);
                    	std::shared_ptr<Bag<ActivityEdgeInstance> > inputEdges = actionActivation->retrievePinActivation(inputPin)->getIncomingEdges();
                        isEnabled = this->checkIncomingEdges(inputEdges, activations);
                        j = j + 1;
                    }
                }
            }

            if (isEnabled) 
            {
                DEBUG_MESSAGE(std::cout<<"[run] Node " << activation->getNode()->getName()<< " is enabled."<<std::endl;)
                enabledActivations->push_back(activation);
            }
        }
    }

    DEBUG_MESSAGE(std::cout<<"[run] " << enabledActivations->size() << " node(s) is/are enabled."<<std::endl;)

    // *** Send offers to all enabled nodes concurrently. ***
    std::vector<std::shared_ptr<ActivityNodeActivation>>::iterator i;
    for (i = enabledActivations->begin(); i != enabledActivations->end(); ++i) 
    {
    	std::shared_ptr<ActivityNodeActivation> activation = std::dynamic_pointer_cast<ActivityNodeActivation> (*i);
        DEBUG_MESSAGE(std::cout<<"[run] Sending offer to node " << activation->getNode()->getName()<<std::endl;)
        activation->recieveOffer();
    }
}

void
 ActivityNodeActivationGroupImpl::runNodes(std::shared_ptr<Bag<uml::ActivityNode> >  nodes) 
{
	//generated from body annotation
	std::shared_ptr<Bag<ActivityNodeActivation> > nodeActivations(new Bag<ActivityNodeActivation>());

    for (unsigned int i = 0; i < nodes->size(); i++) 
    {
    	std::shared_ptr<uml::ActivityNode> node = nodes->at(i);
    	std::shared_ptr<ActivityNodeActivation> nodeActivation = this->getNodeActivation(node);
        if (nodeActivation != nullptr) 
        {
            nodeActivations->push_back(nodeActivation);
        }
    }

    this->run(nodeActivations);
}

void
 ActivityNodeActivationGroupImpl::suspend(std::shared_ptr<fUML::ActivityNodeActivation>  activation) 
{
	//generated from body annotation
	DEBUG_MESSAGE(std::cout<<"[suspend] node=" << (activation->getNode() == nullptr ? "null" : activation->getNode()->getName())<<std::endl;)

    if (!this->isSuspended()) 
    {
    	std::shared_ptr<StructuredActivityNodeActivation> containingNodeActivation = this->getContainingNodeActivation();
        if (containingNodeActivation != nullptr)
        {
            containingNodeActivation->suspend();
        }
    }
    this->getSuspendedActivations()->push_back(activation);
}

void
 ActivityNodeActivationGroupImpl::terminateAll() 
{
	//generated from body annotation
	//DEBUG_MESSAGE(//TODO fix std::cout<<"[terminateAll] Terminating activation group for "<< (this->getActivityExecution() != nullptr ? "activity " + this->getActivityExecution()->getTypes()->at(0)->getName() : this->getContainingNodeActivation() != nullptr ? "node " << this->getContainingNodeActivation()->getNode()->getName() : "expansion region") << ".");)

	std::shared_ptr<Bag<ActivityNodeActivation> > nodeActivations = this->getNodeActivations();
    for (unsigned int i = 0; i < nodeActivations->size(); i++) 
    {
    	std::shared_ptr<ActivityNodeActivation> nodeActivation = nodeActivations->at(i);
        nodeActivation->terminate();
    }

    this->getSuspendedActivations()->clear();
}

//*********************************
// References
//*********************************
std::shared_ptr<fUML::ActivityExecution > ActivityNodeActivationGroupImpl::getActivityExecution() const
{

    return m_activityExecution;
}
void ActivityNodeActivationGroupImpl::setActivityExecution(std::shared_ptr<fUML::ActivityExecution> _activityExecution)
{
    m_activityExecution = _activityExecution;
}

std::shared_ptr<fUML::StructuredActivityNodeActivation > ActivityNodeActivationGroupImpl::getContainingNodeActivation() const
{

    return m_containingNodeActivation;
}
void ActivityNodeActivationGroupImpl::setContainingNodeActivation(std::shared_ptr<fUML::StructuredActivityNodeActivation> _containingNodeActivation)
{
    m_containingNodeActivation = _containingNodeActivation;
}

	std::shared_ptr< Bag<fUML::ActivityEdgeInstance> >
 ActivityNodeActivationGroupImpl::getEdgeInstances() const
{

    return m_edgeInstances;
}


	std::shared_ptr< Bag<fUML::ActivityNodeActivation> >
 ActivityNodeActivationGroupImpl::getNodeActivations() const
{

    return m_nodeActivations;
}


	std::shared_ptr< Bag<fUML::ActivityNodeActivation> >
 ActivityNodeActivationGroupImpl::getSuspendedActivations() const
{

    return m_suspendedActivations;
}


//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ActivityNodeActivationGroupImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_ACTIVITYEXECUTION:
			return getActivityExecution(); //502
		case FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_CONTAININGNODEACTIVATION:
			return getContainingNodeActivation(); //503
		case FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_EDGEINSTANCES:
			return getEdgeInstances(); //500
		case FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_NODEACTIVATIONS:
			return getNodeActivations(); //501
		case FUMLPackage::ACTIVITYNODEACTIVATIONGROUP_SUSPENDEDACTIVATIONS:
			return getSuspendedActivations(); //504
	}
	return boost::any();
}
