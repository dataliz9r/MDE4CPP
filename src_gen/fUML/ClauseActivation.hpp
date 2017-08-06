//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CLAUSEACTIVATION_HPP
#define FUML_CLAUSEACTIVATION_HPP

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
	class BooleanValue;
}

namespace uml 
{
	class Clause;
}

namespace fUML 
{
	class ClauseActivation;
}

namespace fUML 
{
	class ConditionalNodeActivation;
}

// base class includes

// enum includes

#include "EObject.hpp"

//*********************************
namespace fUML 
{
	/*!
	 */
	class ClauseActivation : virtual public ecore::EObject 
	{
		public:
 			ClauseActivation(const ClauseActivation &) {}
			ClauseActivation& operator=(ClauseActivation const&) = delete;
	
		protected:
			ClauseActivation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ClauseActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 recieveControl()  = 0;
			
			/*!
			 */ 
			virtual bool
			 isReady()  = 0;
			
			/*!
			 */ 
			virtual void
			 runTest()  = 0;
			
			/*!
			 */ 
			virtual void
			 selectBody()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::BooleanValue> 
			 getDecision()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ClauseActivation> >
			 getPredecessors()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ClauseActivation> >
			 getSuccessors()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Clause > getClause() const = 0;
			
			/*!
			 */
			virtual void setClause(std::shared_ptr<uml::Clause> _clause_clause) = 0;
			/*!
			 */
			virtual std::shared_ptr<fUML::ConditionalNodeActivation > getConditionalNodeActivation() const = 0;
			
			/*!
			 */
			virtual void setConditionalNodeActivation(std::shared_ptr<fUML::ConditionalNodeActivation> _conditionalNodeActivation_conditionalNodeActivation) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::Clause > m_clause;
			/*!
			 */
			std::shared_ptr<fUML::ConditionalNodeActivation > m_conditionalNodeActivation;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_CLAUSEACTIVATION_HPP */

