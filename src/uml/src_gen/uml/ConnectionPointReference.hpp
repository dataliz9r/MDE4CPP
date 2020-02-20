//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTIONPOINTREFERENCE_HPP
#define UML_CONNECTIONPOINTREFERENCE_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

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
	class Namespace;
}

namespace uml 
{
	class Pseudostate;
}

namespace uml 
{
	class Region;
}

namespace uml 
{
	class State;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Transition;
}

namespace uml 
{
	class Vertex;
}

// base class includes
#include "uml/Vertex.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ConnectionPointReference represents a usage (as part of a submachine State) of an entry/exit point Pseudostate defined in the StateMachine referenced by the submachine State.
	<p>From package UML::StateMachines.</p> */
	class ConnectionPointReference:virtual public Vertex
	{
		public:
 			ConnectionPointReference(const ConnectionPointReference &) {}
			ConnectionPointReference& operator=(ConnectionPointReference const&) = delete;

		protected:
			ConnectionPointReference(){}


			//Additional constructors for the containments back reference

			ConnectionPointReference(std::weak_ptr<uml::Region > par_container);

			//Additional constructors for the containments back reference

			ConnectionPointReference(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			ConnectionPointReference(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			ConnectionPointReference(std::weak_ptr<uml::State > par_state);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ConnectionPointReference() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The entry Pseudostates must be Pseudostates with kind entryPoint.
			entry->forAll(kind = PseudostateKind::entryPoint) */ 
			virtual bool entry_pseudostates(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The exit Pseudostates must be Pseudostates with kind exitPoint.
			exit->forAll(kind = PseudostateKind::exitPoint) */ 
			virtual bool exit_pseudostates(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The entryPoint Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<Bag<uml::Pseudostate>> getEntry() const = 0;
			
			/*!
			 The exitPoints kind Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<Bag<uml::Pseudostate>> getExit() const = 0;
			
			/*!
			 The State in which the ConnectionPointReference is defined.
			<p>From package UML::StateMachines.</p> */
			virtual std::weak_ptr<uml::State > getState() const = 0;
			
			/*!
			 The State in which the ConnectionPointReference is defined.
			<p>From package UML::StateMachines.</p> */
			virtual void setState(std::shared_ptr<uml::State> _state_state) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The entryPoint Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			std::shared_ptr<Bag<uml::Pseudostate>> m_entry;
			/*!
			 The exitPoints kind Pseudostates corresponding to this connection point.
			<p>From package UML::StateMachines.</p> */
			std::shared_ptr<Bag<uml::Pseudostate>> m_exit;
			/*!
			 The State in which the ConnectionPointReference is defined.
			<p>From package UML::StateMachines.</p> */
			std::weak_ptr<uml::State > m_state;
			

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
#endif /* end of include guard: UML_CONNECTIONPOINTREFERENCE_HPP */
