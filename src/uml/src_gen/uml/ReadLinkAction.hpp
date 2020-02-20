//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_READLINKACTION_HPP
#define UML_READLINKACTION_HPP

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
	class LinkAction;
}

namespace uml 
{
	class LinkEndData;
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
	class StructuredActivityNode;
}

// base class includes
#include "uml/LinkAction.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ReadLinkAction is a LinkAction that navigates across an Association to retrieve the objects on one end.
	<p>From package UML::Actions.</p> */
	class ReadLinkAction:virtual public LinkAction
	{
		public:
 			ReadLinkAction(const ReadLinkAction &) {}
			ReadLinkAction& operator=(ReadLinkAction const&) = delete;

		protected:
			ReadLinkAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ReadLinkAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the open Association end must be compatible with the multiplicity of the result OutputPin.
			self.openEnd()->first().compatibleWith(result) */ 
			virtual bool compatible_multiplicity(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The open end must be navigable.
			self.openEnd()->first().isNavigable() */ 
			virtual bool navigable_open_end(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Exactly one linkEndData specification (corresponding to the "open" end) must not have an value InputPin.
			self.openEnd()->size() = 1 */ 
			virtual bool one_open_end(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Returns the ends corresponding to endData with no value InputPin. (A well-formed ReadLinkAction is constrained to have only one of these.)
			result = (endData->select(value=null).end->asOrderedSet())
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::Property> > openEnd() = 0;
			
			/*!
			 The type and ordering of the result OutputPin are same as the type and ordering of the open Association end.
			self.openEnd()->forAll(type=result.type and isOrdered=result.isOrdered) */ 
			virtual bool type_and_ordering(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Visibility of the open end must allow access from the object performing the action.
			let openEnd : Property = self.openEnd()->first() in
			  openEnd.visibility = VisibilityKind::public or 
			  endData->exists(oed | 
			    oed.end<>openEnd and 
			    (_'context' = oed.end.type or 
			      (openEnd.visibility = VisibilityKind::protected and 
			        _'context'.conformsTo(oed.end.type.oclAsType(Classifier))))) */ 
			virtual bool visibility(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The OutputPin on which the objects retrieved from the "open" end of those links whose values on other ends are given by the endData.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const = 0;
			
			/*!
			 The OutputPin on which the objects retrieved from the "open" end of those links whose values on other ends are given by the endData.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The OutputPin on which the objects retrieved from the "open" end of those links whose values on other ends are given by the endData.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::OutputPin > m_result;
			

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
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const = 0;/*!
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
#endif /* end of include guard: UML_READLINKACTION_HPP */
