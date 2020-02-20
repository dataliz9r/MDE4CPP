//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXPRESSION_HPP
#define UML_EXPRESSION_HPP

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
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class Slot;
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
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

namespace uml 
{
	class ValueSpecificationAction;
}

// base class includes
#include "uml/ValueSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Expression represents a node in an expression tree, which may be non-terminal or terminal. It defines a symbol, and has a possibly empty sequence of operands that are ValueSpecifications. It denotes a (possibly empty) set of values when evaluated in a context.
	<p>From package UML::Values.</p> */
	class Expression:virtual public ValueSpecification
	{
		public:
 			Expression(const Expression &) {}
			Expression& operator=(Expression const&) = delete;

		protected:
			Expression(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Expression() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p> */ 
			virtual std::string getSymbol() const = 0;
			
			/*!
			 The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p> */ 
			virtual void setSymbol (std::string _symbol)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies a sequence of operand ValueSpecifications.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<Subset<uml::ValueSpecification, uml::Element>> getOperand() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p> */ 
			std::string m_symbol = "";
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies a sequence of operand ValueSpecifications.
			<p>From package UML::Values.</p> */
			std::shared_ptr<Subset<uml::ValueSpecification, uml::Element>> m_operand;
			

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
#endif /* end of include guard: UML_EXPRESSION_HPP */
