//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATIONADDSTRUCTURALFEATUREVALUEACTIONACTIVATIONIMPL_HPP
#define FUML_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATIONADDSTRUCTURALFEATUREVALUEACTIONACTIVATIONIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../AddStructuralFeatureValueActionActivation.hpp"

#include "impl/WriteStructuralFeatureActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class AddStructuralFeatureValueActionActivationImpl :virtual public WriteStructuralFeatureActionActivationImpl, virtual public AddStructuralFeatureValueActionActivation 
	{
		public: 
			AddStructuralFeatureValueActionActivationImpl(const AddStructuralFeatureValueActionActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			AddStructuralFeatureValueActionActivationImpl& operator=(AddStructuralFeatureValueActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			AddStructuralFeatureValueActionActivationImpl();

		public:
			//destructor
			virtual ~AddStructuralFeatureValueActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
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
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATIONADDSTRUCTURALFEATUREVALUEACTIONACTIVATIONIMPL_HPP */

