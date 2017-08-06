//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LITERALREALEVALUATION_HPP
#define FUML_LITERALREALEVALUATION_HPP

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
namespace fUML 
{
	class LiteralEvaluation;
}

namespace fUML 
{
	class Locus;
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
#include "LiteralEvaluation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class LiteralRealEvaluation:virtual public LiteralEvaluation	{
		public:
 			LiteralRealEvaluation(const LiteralRealEvaluation &) {}
			LiteralRealEvaluation& operator=(LiteralRealEvaluation const&) = delete;
	
		protected:
			LiteralRealEvaluation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~LiteralRealEvaluation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 evaluate()  = 0;
			
			
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
#endif /* end of include guard: FUML_LITERALREALEVALUATION_HPP */

