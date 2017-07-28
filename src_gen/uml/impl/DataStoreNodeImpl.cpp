#include "DataStoreNodeImpl.hpp"
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

#include "Behavior.hpp";

#include "CentralBufferNode.hpp";

#include "Classifier.hpp";

#include "Comment.hpp";

#include "Dependency.hpp";

#include "EAnnotation.hpp";

#include "Element.hpp";

#include "InterruptibleActivityRegion.hpp";

#include "Namespace.hpp";

#include "RedefinableElement.hpp";

#include "State.hpp";

#include "StringExpression.hpp";

#include "StructuredActivityNode.hpp";

#include "Type.hpp";

#include "ValueSpecification.hpp";


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
DataStoreNodeImpl::DataStoreNodeImpl()
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

DataStoreNodeImpl::~DataStoreNodeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DataStoreNode "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

DataStoreNodeImpl::DataStoreNodeImpl(const DataStoreNodeImpl & obj):DataStoreNodeImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DataStoreNode "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isControlType = obj.getIsControlType();
	m_isLeaf = obj.getIsLeaf();
	m_name = obj.getName();
	m_ordering = obj.getOrdering();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));

			std::shared_ptr<Union<uml::ActivityGroup> > _inGroup = obj.getInGroup();
	m_inGroup.reset(new 		Union<uml::ActivityGroup> (*(obj.getInGroup().get())));

		std::shared_ptr< Bag<uml::State> >
	 _inState = obj.getInState();
	m_inState.reset(new 	 Bag<uml::State> 
	(*(obj.getInState().get())));

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

	m_selection  = obj.getSelection();

	m_type  = obj.getType();


    
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
	if(obj.getUpperBound()!=nullptr)
	{
		m_upperBound.reset(dynamic_cast<uml::ValueSpecification*>(obj.getUpperBound()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_upperBound" << std::endl;
	#endif


}

ecore::EObject *  DataStoreNodeImpl::copy() const
{
	return new DataStoreNodeImpl(*this);
}

std::shared_ptr<ecore::EClass> DataStoreNodeImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getDataStoreNode();
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
		std::shared_ptr<Union<uml::RedefinableElement> > DataStoreNodeImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}
		std::shared_ptr<Union<uml::ActivityGroup> > DataStoreNodeImpl::getInGroup() const
{
	return m_inGroup;
}
		std::shared_ptr<Union<uml::Element> > DataStoreNodeImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::shared_ptr<uml::Element > DataStoreNodeImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any DataStoreNodeImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //18613
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1864
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1860
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //18614
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //18615
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //18620
		case UmlPackage::OBJECTNODE_INSTATE:
			return getInState(); //18622
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //18616
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //18617
		case UmlPackage::OBJECTNODE_ISCONTROLTYPE:
			return getIsControlType(); //18623
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //18610
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1865
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1866
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1867
		case UmlPackage::OBJECTNODE_ORDERING:
			return getOrdering(); //18624
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //18618
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1861
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1862
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1863
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1868
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //18611
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //18619
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //18612
		case UmlPackage::OBJECTNODE_SELECTION:
			return getSelection(); //18625
		case UmlPackage::TYPEDELEMENT_TYPE:
			return getType(); //18610
		case UmlPackage::OBJECTNODE_UPPERBOUND:
			return getUpperBound(); //18626
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1869
	}
	return boost::any();
}
