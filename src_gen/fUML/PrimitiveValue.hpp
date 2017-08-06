//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_PRIMITIVEVALUE_HPP
#define FUML_PRIMITIVEVALUE_HPP

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

namespace uml 
{
	class PrimitiveType;
}

namespace fUML 
{
	class Value;
}

// base class includes
#include "Value.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class PrimitiveValue:virtual public Value	{
		public:
 			PrimitiveValue(const PrimitiveValue &) {}
			PrimitiveValue& operator=(PrimitiveValue const&) = delete;
	
		protected:
			PrimitiveValue(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~PrimitiveValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> >
			 getTypes()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::PrimitiveType > getType() const = 0;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::PrimitiveType> _type_type) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::PrimitiveType > m_type;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_PRIMITIVEVALUE_HPP */

