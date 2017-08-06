//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_FORKEDTOKENFORKEDTOKENIMPL_HPP
#define FUML_FORKEDTOKENFORKEDTOKENIMPL_HPP

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
#include "../ForkedToken.hpp"

#include "impl/TokenImpl.hpp"

#include "SubsetUnion.hpp"

 


//*********************************
namespace fUML 
{
	class ForkedTokenImpl :virtual public TokenImpl, virtual public ForkedToken 
	{
		public: 
			ForkedTokenImpl(const ForkedTokenImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ForkedTokenImpl& operator=(ForkedTokenImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ForkedTokenImpl();

		public:
			//destructor
			virtual ~ForkedTokenImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool
			 equals(std::shared_ptr<fUML::Token>  otherToken)  ;
			
			/*!
			 */ 
			virtual void
			 withdraw()  ;
			
			/*!
			 */ 
			virtual bool
			 isControl()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 getValue()  const  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getRemainingOffersCount() const ;
			
			/*!
			 */ 
			virtual void setRemainingOffersCount (int _remainingOffersCount); 
			
			/*!
			 */ 
			virtual bool isBaseTokenIsWithdrawn() const ;
			
			/*!
			 */ 
			virtual void setBaseTokenIsWithdrawn (bool _baseTokenIsWithdrawn); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Token > getBaseToken() const ;
			
			/*!
			 */
			virtual void setBaseToken(std::shared_ptr<fUML::Token> _baseToken_baseToken) ;
							
			
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
#endif /* end of include guard: FUML_FORKEDTOKENFORKEDTOKENIMPL_HPP */

