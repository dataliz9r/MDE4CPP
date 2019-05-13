//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERVAL_HPP
#define UML_INTERVAL_HPP

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

// base class includes
#include "uml/ValueSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Interval defines the range between two ValueSpecifications.
	<p>From package UML::Values.</p> */
	class Interval:virtual public ValueSpecification
	{
		public:
 			Interval(const Interval &) {}
			Interval& operator=(Interval const&) = delete;

		protected:
			Interval(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Interval() {}

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
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMax() const = 0;
			
			/*!
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			virtual void setMax(std::shared_ptr<uml::ValueSpecification> _max_max) = 0;
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMin() const = 0;
			
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			virtual void setMin(std::shared_ptr<uml::ValueSpecification> _min_min) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			std::shared_ptr<uml::ValueSpecification > m_max;
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			std::shared_ptr<uml::ValueSpecification > m_min;
			

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
#endif /* end of include guard: UML_INTERVAL_HPP */
