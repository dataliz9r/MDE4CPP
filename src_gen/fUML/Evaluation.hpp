//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EVALUATION_HPP
#define FUML_EVALUATION_HPP

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
	class Locus;
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
	class Evaluation:virtual public SemanticVisitor	{
		public:
 			Evaluation(const Evaluation &) {}
			Evaluation& operator=(Evaluation const&) = delete;
	
		protected:
			Evaluation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Evaluation() {}

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
			/*!
			 */
			virtual std::shared_ptr<uml::ValueSpecification > getSpecification() const = 0;
			
			/*!
			 */
			virtual void setSpecification(std::shared_ptr<uml::ValueSpecification> _specification_specification) = 0;
			/*!
			 */
			virtual std::shared_ptr<fUML::Locus > getLocus() const = 0;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Locus> _locus_locus) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::ValueSpecification > m_specification;
			/*!
			 */
			std::shared_ptr<fUML::Locus > m_locus;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_EVALUATION_HPP */

