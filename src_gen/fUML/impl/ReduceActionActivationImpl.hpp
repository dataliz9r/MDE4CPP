//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_REDUCEACTIONACTIVATIONREDUCEACTIONACTIVATIONIMPL_HPP
#define FUML_REDUCEACTIONACTIVATIONREDUCEACTIONACTIVATIONIMPL_HPP

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
#include "../ReduceActionActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class ReduceActionActivationImpl :virtual public ActionActivationImpl, virtual public ReduceActionActivation 
	{
		public: 
			ReduceActionActivationImpl(const ReduceActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReduceActionActivationImpl& operator=(ReduceActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ReduceActionActivationImpl();



		public:
			//destructor
			virtual ~ReduceActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Execution > getCurrentExecution() const ;
			
			/*!
			 */
			virtual void setCurrentExecution(std::shared_ptr<fUML::Execution> _currentExecution_currentExecution) ;
							
			
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
#endif /* end of include guard: FUML_REDUCEACTIONACTIVATIONREDUCEACTIONACTIVATIONIMPL_HPP */

