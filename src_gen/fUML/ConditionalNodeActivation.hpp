//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CONDITIONALNODEACTIVATION_HPP
#define FUML_CONDITIONALNODEACTIVATION_HPP

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

#include <map>
#include <string>
#include <vector>
#include <memory>
#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace fUML 
{
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML 
{
	class ActivityNodeActivationGroup;
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
	class InputPinActivation;
}

namespace fUML 
{
	class OutputPinActivation;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class StructuredActivityNodeActivation;
}

namespace fUML 
{
	class Token;
}

// base class includes
#include "fUML/StructuredActivityNodeActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ConditionalNodeActivation:virtual public StructuredActivityNodeActivation
	{
		public:
 			ConditionalNodeActivation(const ConditionalNodeActivation &) {}
			ConditionalNodeActivation& operator=(ConditionalNodeActivation const&) = delete;

		protected:
			ConditionalNodeActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ConditionalNodeActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ClauseActivation> getClauseActivation(std::shared_ptr<uml::Clause>  clause)  = 0;
			
			/*!
			 */ 
			virtual void runTest(std::shared_ptr<uml::Clause>  clause)  = 0;
			
			/*!
			 */ 
			virtual void selectBody(std::shared_ptr<uml::Clause>  clause)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ClauseActivation> > getClauseActivations() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<uml::Clause> > getSelectedClauses() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr< Bag<fUML::ClauseActivation> > m_clauseActivations;
			/*!
			 */
			std::shared_ptr< Bag<uml::Clause> > m_selectedClauses;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation> > getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: FUML_CONDITIONALNODEACTIVATION_HPP */

