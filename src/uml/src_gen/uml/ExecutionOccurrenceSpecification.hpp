//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXECUTIONOCCURRENCESPECIFICATION_HPP
#define UML_EXECUTIONOCCURRENCESPECIFICATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



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
	class ExecutionSpecification;
}

namespace uml 
{
	class GeneralOrdering;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionOperand;
}

namespace uml 
{
	class Lifeline;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OccurrenceSpecification;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "uml/OccurrenceSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An ExecutionOccurrenceSpecification represents moments in time at which Actions or Behaviors start or finish.
	<p>From package UML::Interactions.</p> */
	class ExecutionOccurrenceSpecification:virtual public OccurrenceSpecification
	{
		public:
 			ExecutionOccurrenceSpecification(const ExecutionOccurrenceSpecification &) {}
			ExecutionOccurrenceSpecification& operator=(ExecutionOccurrenceSpecification const&) = delete;

		protected:
			ExecutionOccurrenceSpecification(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExecutionOccurrenceSpecification() {}

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
			 References the execution specification describing the execution that is started or finished at this execution event.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::ExecutionSpecification > getExecution() const = 0;
			
			/*!
			 References the execution specification describing the execution that is started or finished at this execution event.
			<p>From package UML::Interactions.</p> */
			virtual void setExecution(std::shared_ptr<uml::ExecutionSpecification> _execution_execution) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 References the execution specification describing the execution that is started or finished at this execution event.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<uml::ExecutionSpecification > m_execution;
			

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
#endif /* end of include guard: UML_EXECUTIONOCCURRENCESPECIFICATION_HPP */
