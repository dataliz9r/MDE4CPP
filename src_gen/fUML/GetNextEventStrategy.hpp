//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_GETNEXTEVENTSTRATEGY_HPP
#define FUML_GETNEXTEVENTSTRATEGY_HPP

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
	class ObjectActivation;
}

namespace fUML 
{
	class SemanticStrategy;
}

namespace fUML 
{
	class SignalInstance;
}

// base class includes
#include "SemanticStrategy.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class GetNextEventStrategy:virtual public SemanticStrategy	{
		public:
 			GetNextEventStrategy(const GetNextEventStrategy &) {}
			GetNextEventStrategy& operator=(GetNextEventStrategy const&) = delete;
	
		protected:
			GetNextEventStrategy(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~GetNextEventStrategy() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SignalInstance> 
			 retrieveNextEvent(std::shared_ptr<fUML::ObjectActivation>  objectActivation)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_GETNEXTEVENTSTRATEGY_HPP */

