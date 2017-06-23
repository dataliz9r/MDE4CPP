//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ENAMEDELEMENTENAMEDELEMENTIMPL_HPP
#define ECORE_ENAMEDELEMENTENAMEDELEMENTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ENamedElement.hpp"

#include "impl/EModelElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class ENamedElementImpl :virtual public EModelElementImpl, virtual public ENamedElement 
	{
		public: 
			ENamedElementImpl(const ENamedElementImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ENamedElementImpl& operator=(ENamedElementImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			ENamedElementImpl();

		public:
			//destructor
			virtual ~ENamedElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getName() const ;
			
			/*!
			 */ 
			virtual void setName (std::string _name); 
			
			
			
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
#endif /* end of include guard: ECORE_ENAMEDELEMENTENAMEDELEMENTIMPL_HPP */

