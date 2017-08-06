//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OFFER_HPP
#define FUML_OFFER_HPP

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

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace fUML 
{
	class Token;
}

// base class includes

// enum includes

#include "EObject.hpp"

//*********************************
namespace fUML 
{
	/*!
	 */
	class Offer : virtual public ecore::EObject 
	{
		public:
 			Offer(const Offer &) {}
			Offer& operator=(Offer const&) = delete;
	
		protected:
			Offer(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Offer() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual int
			 countOfferedVales()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> >
			 retrieveOfferedTokens()  = 0;
			
			/*!
			 */ 
			virtual void
			 removeOfferedValues(int count)  = 0;
			
			/*!
			 */ 
			virtual void
			 removeWithdrawnTokens()  = 0;
			
			/*!
			 */ 
			virtual bool
			 hasTokens()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual 	std::shared_ptr< Bag<fUML::Token> >
			 getOfferedTokens() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
				std::shared_ptr< Bag<fUML::Token> >
			 m_offeredTokens;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_OFFER_HPP */

