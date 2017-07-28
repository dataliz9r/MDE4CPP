#include "DestroyLinkActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

//Forward declaration includes
#include "Activity.hpp";

#include "ActivityEdge.hpp";

#include "ActivityGroup.hpp";

#include "ActivityNode.hpp";

#include "ActivityPartition.hpp";

#include "Classifier.hpp";

#include "Comment.hpp";

#include "Constraint.hpp";

#include "Dependency.hpp";

#include "EAnnotation.hpp";

#include "Element.hpp";

#include "ExceptionHandler.hpp";

#include "InputPin.hpp";

#include "InterruptibleActivityRegion.hpp";

#include "LinkEndData.hpp";

#include "Namespace.hpp";

#include "OutputPin.hpp";

#include "RedefinableElement.hpp";

#include "StringExpression.hpp";

#include "StructuredActivityNode.hpp";

#include "WriteLinkAction.hpp";


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
DestroyLinkActionImpl::DestroyLinkActionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References

	//Init references
}

DestroyLinkActionImpl::~DestroyLinkActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DestroyLinkAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

DestroyLinkActionImpl::DestroyLinkActionImpl(const DestroyLinkActionImpl & obj):DestroyLinkActionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DestroyLinkAction "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));

	m_context  = obj.getContext();

			std::shared_ptr<Union<uml::ActivityGroup> > _inGroup = obj.getInGroup();
	m_inGroup.reset(new 		Union<uml::ActivityGroup> (*(obj.getInGroup().get())));

		std::shared_ptr< Bag<uml::ActivityEdge> >
	 _incoming = obj.getIncoming();
	m_incoming.reset(new 	 Bag<uml::ActivityEdge> 
	(*(obj.getIncoming().get())));

		std::shared_ptr< Bag<uml::ActivityEdge> >
	 _outgoing = obj.getOutgoing();
	m_outgoing.reset(new 	 Bag<uml::ActivityEdge> 
	(*(obj.getOutgoing().get())));

			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));

	m_owner  = obj.getOwner();

			std::shared_ptr<Union<uml::RedefinableElement> > _redefinedElement = obj.getRedefinedElement();
	m_redefinedElement.reset(new 		Union<uml::RedefinableElement> (*(obj.getRedefinedElement().get())));

			std::shared_ptr<Union<uml::Classifier> > _redefinitionContext = obj.getRedefinitionContext();
	m_redefinitionContext.reset(new 		Union<uml::Classifier> (*(obj.getRedefinitionContext().get())));


    
	//Clone references with containment (deep copy)

	if(obj.getActivity()!=nullptr)
	{
		m_activity.reset(dynamic_cast<uml::Activity*>(obj.getActivity()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_activity" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::LinkEndData>> _endDataList = obj.getEndData();
	for(std::shared_ptr<uml::LinkEndData> _endData : *_endDataList)
	{
		this->getEndData()->add(std::shared_ptr<uml::LinkEndData>(dynamic_cast<uml::LinkEndData*>(_endData->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_endData" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ExceptionHandler>> _handlerList = obj.getHandler();
	for(std::shared_ptr<uml::ExceptionHandler> _handler : *_handlerList)
	{
		this->getHandler()->add(std::shared_ptr<uml::ExceptionHandler>(dynamic_cast<uml::ExceptionHandler*>(_handler->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_handler" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::InterruptibleActivityRegion>> _inInterruptibleRegionList = obj.getInInterruptibleRegion();
	for(std::shared_ptr<uml::InterruptibleActivityRegion> _inInterruptibleRegion : *_inInterruptibleRegionList)
	{
		this->getInInterruptibleRegion()->add(std::shared_ptr<uml::InterruptibleActivityRegion>(dynamic_cast<uml::InterruptibleActivityRegion*>(_inInterruptibleRegion->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inInterruptibleRegion" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ActivityPartition>> _inPartitionList = obj.getInPartition();
	for(std::shared_ptr<uml::ActivityPartition> _inPartition : *_inPartitionList)
	{
		this->getInPartition()->add(std::shared_ptr<uml::ActivityPartition>(dynamic_cast<uml::ActivityPartition*>(_inPartition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inPartition" << std::endl;
	#endif
	if(obj.getInStructuredNode()!=nullptr)
	{
		m_inStructuredNode.reset(dynamic_cast<uml::StructuredActivityNode*>(obj.getInStructuredNode()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inStructuredNode" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::InputPin>> _inputValueList = obj.getInputValue();
	for(std::shared_ptr<uml::InputPin> _inputValue : *_inputValueList)
	{
		this->getInputValue()->add(std::shared_ptr<uml::InputPin>(dynamic_cast<uml::InputPin*>(_inputValue->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inputValue" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Constraint>> _localPostconditionList = obj.getLocalPostcondition();
	for(std::shared_ptr<uml::Constraint> _localPostcondition : *_localPostconditionList)
	{
		this->getLocalPostcondition()->add(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPostcondition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_localPostcondition" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Constraint>> _localPreconditionList = obj.getLocalPrecondition();
	for(std::shared_ptr<uml::Constraint> _localPrecondition : *_localPreconditionList)
	{
		this->getLocalPrecondition()->add(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPrecondition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_localPrecondition" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ActivityNode>> _redefinedNodeList = obj.getRedefinedNode();
	for(std::shared_ptr<uml::ActivityNode> _redefinedNode : *_redefinedNodeList)
	{
		this->getRedefinedNode()->add(std::shared_ptr<uml::ActivityNode>(dynamic_cast<uml::ActivityNode*>(_redefinedNode->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_redefinedNode" << std::endl;
	#endif


}

ecore::EObject *  DestroyLinkActionImpl::copy() const
{
	return new DestroyLinkActionImpl(*this);
}

std::shared_ptr<ecore::EClass> DestroyLinkActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getDestroyLinkAction();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************
		std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > >
 DestroyLinkActionImpl::getInput() const
{
	return m_input;
}
		std::shared_ptr<Union<uml::RedefinableElement> > DestroyLinkActionImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}
		std::shared_ptr<Union<uml::Element> > DestroyLinkActionImpl::getOwnedElement() const
{
	return m_ownedElement;
}
		std::shared_ptr<Union<uml::ActivityGroup> > DestroyLinkActionImpl::getInGroup() const
{
	return m_inGroup;
}
std::shared_ptr<uml::Element > DestroyLinkActionImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any DestroyLinkActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //15113
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1514
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //15122
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1510
		case UmlPackage::LINKACTION_ENDDATA:
			return getEndData(); //15128
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //15121
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //15114
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //15115
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //15120
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //15116
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //15117
		case UmlPackage::ACTION_INPUT:
			return getInput(); //15123
		case UmlPackage::LINKACTION_INPUTVALUE:
			return getInputValue(); //15129
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //15110
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //15124
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //15125
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //15126
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1515
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1516
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1517
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //15118
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //15127
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1511
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1512
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1513
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1518
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //15111
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //15119
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //15112
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1519
	}
	return boost::any();
}
