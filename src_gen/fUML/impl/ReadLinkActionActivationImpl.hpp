//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_READLINKACTIONACTIVATIONREADLINKACTIONACTIVATIONIMPL_HPP
#define FUML_READLINKACTIONACTIVATIONREADLINKACTIONACTIVATIONIMPL_HPP

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
#include "../ReadLinkActionActivation.hpp"

#include "fUML/impl/LinkActionActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class ReadLinkActionActivationImpl :virtual public LinkActionActivationImpl, virtual public ReadLinkActionActivation 
	{
		public: 
			ReadLinkActionActivationImpl(const ReadLinkActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReadLinkActionActivationImpl& operator=(ReadLinkActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ReadLinkActionActivationImpl();



		public:
			//destructor
			virtual ~ReadLinkActionActivationImpl();
			
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
#endif /* end of include guard: FUML_READLINKACTIONACTIVATIONREADLINKACTIONACTIVATIONIMPL_HPP */

