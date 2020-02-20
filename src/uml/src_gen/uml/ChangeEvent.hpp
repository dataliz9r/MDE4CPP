//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CHANGEEVENT_HPP
#define UML_CHANGEEVENT_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;



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
	class Comment;
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
	class Event;
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
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "uml/Event.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ChangeEvent models a change in the system configuration that makes a condition true.
	<p>From package UML::CommonBehavior.</p> */
	class ChangeEvent:virtual public Event
	{
		public:
 			ChangeEvent(const ChangeEvent &) {}
			ChangeEvent& operator=(ChangeEvent const&) = delete;

		protected:
			ChangeEvent(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ChangeEvent() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A Boolean-valued ValueSpecification that will result in a ChangeEvent whenever its value changes from false to true.
			<p>From package UML::CommonBehavior.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getChangeExpression() const = 0;
			
			/*!
			 A Boolean-valued ValueSpecification that will result in a ChangeEvent whenever its value changes from false to true.
			<p>From package UML::CommonBehavior.</p> */
			virtual void setChangeExpression(std::shared_ptr<uml::ValueSpecification> _changeExpression_changeExpression) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A Boolean-valued ValueSpecification that will result in a ChangeEvent whenever its value changes from false to true.
			<p>From package UML::CommonBehavior.</p> */
			std::shared_ptr<uml::ValueSpecification > m_changeExpression;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_CHANGEEVENT_HPP */
