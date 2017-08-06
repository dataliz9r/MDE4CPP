//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXECUTIONFACTORYL3_HPP
#define FUML_EXECUTIONFACTORYL3_HPP

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
	class Element;
}

namespace fUML 
{
	class ExecutionFactoryL2;
}

namespace fUML 
{
	class Locus;
}

namespace fUML 
{
	class OpaqueBehaviorExecution;
}

namespace uml 
{
	class PrimitiveType;
}

namespace fUML 
{
	class SemanticStrategy;
}

namespace fUML 
{
	class SemanticVisitor;
}

// base class includes
#include "ExecutionFactoryL2.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ExecutionFactoryL3:virtual public ExecutionFactoryL2	{
		public:
 			ExecutionFactoryL3(const ExecutionFactoryL3 &) {}
			ExecutionFactoryL3& operator=(ExecutionFactoryL3 const&) = delete;
	
		protected:
			ExecutionFactoryL3(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ExecutionFactoryL3() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticVisitor> 
			 instantiateVisitor(std::shared_ptr<uml::Element>  element)  = 0;
			
			
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
#endif /* end of include guard: FUML_EXECUTIONFACTORYL3_HPP */

