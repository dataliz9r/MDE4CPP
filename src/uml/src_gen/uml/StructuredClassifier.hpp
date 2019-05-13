//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STRUCTUREDCLASSIFIER_HPP
#define UML_STRUCTUREDCLASSIFIER_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;
template<class T, class ... U> class Subset;
template<class T, class ... U> class SubsetUnion;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class CollaborationUse;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class Connector;
}

namespace uml 
{
	class Constraint;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class ElementImport;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Substitution;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "uml/Classifier.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 StructuredClassifiers may contain an internal structure of connected elements each of which plays a role in the overall Behavior modeled by the StructuredClassifier.
	<p>From package UML::StructuredClassifiers.</p> */
	class StructuredClassifier:virtual public Classifier
	{
		public:
 			StructuredClassifier(const StructuredClassifier &) {}
			StructuredClassifier& operator=(StructuredClassifier const&) = delete;

		protected:
			StructuredClassifier(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~StructuredClassifier() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 All features of type ConnectableElement, equivalent to all direct and inherited roles.
			result = (allFeatures()->select(oclIsKindOf(ConnectableElement))->collect(oclAsType(ConnectableElement))->asSet())
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::ConnectableElement> > allRoles() = 0;
			
			/*!
			 Creates a property with the specified name, type, lower bound, and upper bound as an owned attribute of this structured classifier. */ 
			virtual std::shared_ptr<uml::Property> createOwnedAttribute(std::string name,std::shared_ptr<uml::Type>  type,int lower,int upper) = 0;
			
			/*!
			 Derivation for StructuredClassifier::/part
			result = (ownedAttribute->select(isComposite)->asSet())
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Property> > getParts() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Properties owned by the StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Property,uml::NamedElement,uml::ConnectableElement>> getOwnedAttribute() const = 0;
			
			/*!
			 The connectors owned by the StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Connector, uml::Feature,uml::NamedElement>> getOwnedConnector() const = 0;
			
			/*!
			 The Properties specifying instances that the StructuredClassifier owns by composition. This collection is derived, selecting those owned Properties where isComposite is true.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Bag<uml::Property>> getPart() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Properties owned by the StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<SubsetUnion<uml::Property, uml::Property,uml::NamedElement,uml::ConnectableElement>> m_ownedAttribute;
			/*!
			 The connectors owned by the StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Connector, uml::Feature,uml::NamedElement>> m_ownedConnector;
			/*!
			 The Properties specifying instances that the StructuredClassifier owns by composition. This collection is derived, selecting those owned Properties where isComposite is true.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Bag<uml::Property>> m_part;
			/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> m_role;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const = 0;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> getRole() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_STRUCTUREDCLASSIFIER_HPP */
