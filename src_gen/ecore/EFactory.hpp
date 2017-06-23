//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EFACTORY_HPP
#define ECORE_EFACTORY_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
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
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EClass;
}

namespace ecore 
{
	class EDataType;
}

namespace ecore 
{
	class EModelElement;
}

namespace ecore 
{
	class EObject;
}

namespace ecore 
{
	class EPackage;
}

// base class includes
#include "EModelElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EFactory:virtual public EModelElement	{
		public:
 			EFactory(const EFactory &) {}
			EFactory& operator=(EFactory const&) = delete;
	
		protected:
			EFactory(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~EFactory() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EObject> 
			 create(std::shared_ptr<ecore::EClass>  eClass)  const  = 0;
			
			/*!
			 */ 
			virtual boost::any
			 createFromString(std::shared_ptr<ecore::EDataType>  eDataType,std::string literalValue)  const  = 0;
			
			/*!
			 */ 
			virtual std::string
			 convertToString(std::shared_ptr<ecore::EDataType>  eDataType,boost::any instanceValue)  const  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EPackage > getEPackage() const = 0;
			
			/*!
			 */
			virtual void setEPackage(std::shared_ptr<ecore::EPackage> _ePackage_ePackage) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<ecore::EPackage > m_ePackage;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_EFACTORY_HPP */

