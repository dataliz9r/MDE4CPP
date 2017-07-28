#include "LiteralIntegerImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

//Forward declaration includes
#include "Comment.hpp";

#include "Dependency.hpp";

#include "EAnnotation.hpp";

#include "Element.hpp";

#include "LiteralSpecification.hpp";

#include "Namespace.hpp";

#include "StringExpression.hpp";

#include "TemplateParameter.hpp";

#include "Type.hpp";


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
LiteralIntegerImpl::LiteralIntegerImpl()
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

LiteralIntegerImpl::~LiteralIntegerImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LiteralInteger "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

LiteralIntegerImpl::LiteralIntegerImpl(const LiteralIntegerImpl & obj):LiteralIntegerImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LiteralInteger "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_value = obj.getValue();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));

			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));

	m_owner  = obj.getOwner();

	m_templateParameter  = obj.getTemplateParameter();

	m_type  = obj.getType();


    
	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
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
	if(obj.getOwningTemplateParameter()!=nullptr)
	{
		m_owningTemplateParameter.reset(dynamic_cast<uml::TemplateParameter*>(obj.getOwningTemplateParameter()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_owningTemplateParameter" << std::endl;
	#endif


}

ecore::EObject *  LiteralIntegerImpl::copy() const
{
	return new LiteralIntegerImpl(*this);
}

std::shared_ptr<ecore::EClass> LiteralIntegerImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getLiteralInteger();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void LiteralIntegerImpl::setValue (int _value)
{
	m_value = _value;
} 

int LiteralIntegerImpl::getValue() const 
{
	return m_value;
}

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************
		std::shared_ptr<Union<uml::Element> > LiteralIntegerImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::shared_ptr<uml::Element > LiteralIntegerImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any LiteralIntegerImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2504
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2500
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2505
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2506
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2507
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2501
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2502
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2503
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //2504
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2508
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //2505
		case UmlPackage::TYPEDELEMENT_TYPE:
			return getType(); //25010
		case UmlPackage::LITERALINTEGER_VALUE:
			return getValue(); //25013
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2509
	}
	return boost::any();
}
