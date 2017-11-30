//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EDATATYPEEDATATYPEIMPL_HPP
#define ECORE_EDATATYPEEDATATYPEIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../EDataType.hpp"

#include "impl/EClassifierImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EDataTypeImpl :virtual public EClassifierImpl, virtual public EDataType 
	{
		public: 
			EDataTypeImpl(const EDataTypeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EDataTypeImpl& operator=(EDataTypeImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EDataTypeImpl();

			//Additional constructors for the containments back reference
			EDataTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~EDataTypeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isSerializable() const ;
			
			/*!
			 */ 
			virtual void setSerializable (bool _serializable); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EDATATYPEEDATATYPEIMPL_HPP */

