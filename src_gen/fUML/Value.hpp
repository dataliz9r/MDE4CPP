//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_VALUE_HPP
#define FUML_VALUE_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) /**/
#else
    #define ACT_DEBUG(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Classifier;
}

namespace fUML 
{
	class SemanticVisitor;
}

namespace fUML 
{
	class Value;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "SemanticVisitor.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class Value:virtual public SemanticVisitor	{
		public:
 			Value(const Value &) {}
			Value& operator=(Value const&) = delete;
	
		protected:
			Value(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Value() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> 
			 specify()  = 0;
			
			/*!
			 */ 
			virtual bool
			 equals(std::shared_ptr<fUML::Value>  otherValue)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> >
			 getTypes()  const  = 0;
			
			/*!
			 */ 
			virtual bool
			 hasTypes(std::shared_ptr<uml::Classifier>  type)  = 0;
			
			/*!
			 */ 
			virtual std::string
			 toString()  = 0;
			
			/*!
			 */ 
			virtual std::string
			 objectId()  = 0;
			
			
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
			 
	};

}
#endif /* end of include guard: FUML_VALUE_HPP */

