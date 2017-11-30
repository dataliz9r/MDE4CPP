//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ESTRUCTURALFEATURE_HPP
#define ECORE_ESTRUCTURALFEATURE_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

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
	class EClassifier;
}

namespace ecore 
{
	class EGenericType;
}

namespace ecore 
{
	class ETypedElement;
}

// base class includes
#include "ETypedElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EStructuralFeature:virtual public ETypedElement
	{
		public:
 			EStructuralFeature(const EStructuralFeature &) {}
			EStructuralFeature& operator=(EStructuralFeature const&) = delete;

		protected:
			EStructuralFeature(){}


			//Additional constructors for the containments back reference

			EStructuralFeature(std::weak_ptr<ecore::EClass > par_eContainingClass);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EStructuralFeature() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isChangeable() const = 0;
			
			/*!
			 */ 
			virtual void setChangeable (bool _changeable)= 0; 
			
			/*!
			 */ 
			virtual void *  getContainerClass() const = 0;
			
			/*!
			 */ 
			virtual boost::any getDefaultValue() const = 0;
			
			/*!
			 */ 
			virtual std::string getDefaultValueLiteral() const = 0;
			
			/*!
			 */ 
			virtual void setDefaultValueLiteral (std::string _defaultValueLiteral)= 0; 
			
			/*!
			 */ 
			virtual bool isDerived() const = 0;
			
			/*!
			 */ 
			virtual void setDerived (bool _derived)= 0; 
			
			/*!
			 */ 
			virtual int getFeatureID() const = 0;
			
			/*!
			 */ 
			virtual bool isTransient() const = 0;
			
			/*!
			 */ 
			virtual void setTransient (bool _transient)= 0; 
			
			/*!
			 */ 
			virtual bool isUnsettable() const = 0;
			
			/*!
			 */ 
			virtual void setUnsettable (bool _unsettable)= 0; 
			
			/*!
			 */ 
			virtual bool isVolatile() const = 0;
			
			/*!
			 */ 
			virtual void setVolatile (bool _volatile)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<ecore::EClass > getEContainingClass() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_changeable =  true;
			/*!
			 */ 
			void *  m_containerClass ;
			/*!
			 */ 
			boost::any m_defaultValue ;
			/*!
			 */ 
			std::string m_defaultValueLiteral ;
			/*!
			 */ 
			bool m_derived ;
			/*!
			 */ 
			int m_featureID =  -1;
			/*!
			 */ 
			bool m_transient ;
			/*!
			 */ 
			bool m_unsettable ;
			/*!
			 */ 
			bool m_volatile ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<ecore::EClass > m_eContainingClass;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_ESTRUCTURALFEATURE_HPP */

