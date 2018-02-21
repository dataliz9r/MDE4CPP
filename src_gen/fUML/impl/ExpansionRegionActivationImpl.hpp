//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXPANSIONREGIONACTIVATIONEXPANSIONREGIONACTIVATIONIMPL_HPP
#define FUML_EXPANSIONREGIONACTIVATIONEXPANSIONREGIONACTIVATIONIMPL_HPP

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
#include "../ExpansionRegionActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class ExpansionRegionActivationImpl :virtual public ActionActivationImpl, virtual public ExpansionRegionActivation 
	{
		public: 
			ExpansionRegionActivationImpl(const ExpansionRegionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExpansionRegionActivationImpl& operator=(ExpansionRegionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ExpansionRegionActivationImpl();



		public:
			//destructor
			virtual ~ExpansionRegionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doStructuredActivity()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ExpansionNodeActivation> getExpansionNodeActivation(std::shared_ptr<uml::ExpansionNode>  node)  ;
			
			/*!
			 */ 
			virtual int numberOfValues()  ;
			
			/*!
			 */ 
			virtual void runGroup(std::shared_ptr<fUML::ExpansionActivationGroup>  activationGroup)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ExpansionActivationGroup> > getActivationGroups() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::TokenSet> > getInputExpansionTokens() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::TokenSet> > getInputTokens() const ;
			
							
			
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
#endif /* end of include guard: FUML_EXPANSIONREGIONACTIVATIONEXPANSIONREGIONACTIVATIONIMPL_HPP */

