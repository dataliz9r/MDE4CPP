//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OPERATIONTEMPLATEPARAMETER_HPP
#define UML_OPERATIONTEMPLATEPARAMETER_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations


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
	class Element;
}

namespace uml 
{
	class ParameterableElement;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

// base class includes
#include "uml/TemplateParameter.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 An OperationTemplateParameter exposes an Operation as a formal parameter for a template.
	<p>From package UML::Classification.</p> */
	class OperationTemplateParameter:virtual public TemplateParameter
	{
		public:
 			OperationTemplateParameter(const OperationTemplateParameter &) {}
			OperationTemplateParameter& operator=(OperationTemplateParameter const&) = delete;

		protected:
			OperationTemplateParameter(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~OperationTemplateParameter() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 default->notEmpty() implies (default.oclIsKindOf(Operation) and (let defaultOp : Operation = default.oclAsType(Operation) in 
			    defaultOp.ownedParameter->size() = parameteredElement.ownedParameter->size() and
			    Sequence{1.. defaultOp.ownedParameter->size()}->forAll( ix | 
			        let p1: Parameter = defaultOp.ownedParameter->at(ix), p2 : Parameter = parameteredElement.ownedParameter->at(ix) in
			          p1.type = p2.type and p1.upper = p2.upper and p1.lower = p2.lower and p1.direction = p2.direction and p1.isOrdered = p2.isOrdered and p1.isUnique = p2.isUnique))) */ 
			virtual bool match_default_signature(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
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
#endif /* end of include guard: UML_OPERATIONTEMPLATEPARAMETER_HPP */
