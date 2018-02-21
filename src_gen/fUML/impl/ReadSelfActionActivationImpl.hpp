//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_READSELFACTIONACTIVATIONREADSELFACTIONACTIVATIONIMPL_HPP
#define FUML_READSELFACTIONACTIVATIONREADSELFACTIONACTIVATIONIMPL_HPP

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
#include "../ReadSelfActionActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class ReadSelfActionActivationImpl :virtual public ActionActivationImpl, virtual public ReadSelfActionActivation 
	{
		public: 
			ReadSelfActionActivationImpl(const ReadSelfActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReadSelfActionActivationImpl& operator=(ReadSelfActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ReadSelfActionActivationImpl();



		public:
			//destructor
			virtual ~ReadSelfActionActivationImpl();
			
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
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation> > getPinActivation() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_READSELFACTIONACTIVATIONREADSELFACTIONACTIVATIONIMPL_HPP */

