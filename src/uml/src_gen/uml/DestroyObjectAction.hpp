//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DESTROYOBJECTACTION_HPP
#define UML_DESTROYOBJECTACTION_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
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
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
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
	class ExceptionHandler;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OutputPin;
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
	class StructuredActivityNode;
}

// base class includes
#include "uml/Action.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A DestroyObjectAction is an Action that destroys objects.
	<p>From package UML::Actions.</p> */
	class DestroyObjectAction:virtual public Action
	{
		public:
 			DestroyObjectAction(const DestroyObjectAction &) {}
			DestroyObjectAction& operator=(DestroyObjectAction const&) = delete;

		protected:
			DestroyObjectAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~DestroyObjectAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the targe IinputPin is 1..1.
			target.is(1,1) */ 
			virtual bool multiplicity(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The target InputPin has no type.
			target.type= null */ 
			virtual bool no_type(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether links in which the object participates are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDestroyLinks() const = 0;
			
			/*!
			 Specifies whether links in which the object participates are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDestroyLinks (bool _isDestroyLinks)= 0; 
			
			/*!
			 Specifies whether objects owned by the object (via composition) are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDestroyOwnedObjects() const = 0;
			
			/*!
			 Specifies whether objects owned by the object (via composition) are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDestroyOwnedObjects (bool _isDestroyOwnedObjects)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin providing the object to be destroyed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getTarget() const = 0;
			
			/*!
			 The InputPin providing the object to be destroyed.
			<p>From package UML::Actions.</p> */
			virtual void setTarget(std::shared_ptr<uml::InputPin> _target_target) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether links in which the object participates are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			bool m_isDestroyLinks = false;
			/*!
			 Specifies whether objects owned by the object (via composition) are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			bool m_isDestroyOwnedObjects = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The InputPin providing the object to be destroyed.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_target;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_DESTROYOBJECTACTION_HPP */
