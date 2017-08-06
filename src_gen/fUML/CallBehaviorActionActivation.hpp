//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CALLBEHAVIORACTIONACTIVATION_HPP
#define FUML_CALLBEHAVIORACTIONACTIVATION_HPP

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

namespace fUML 
{
	class CallActionActivation;
}

namespace fUML 
{
	class Execution;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class Token;
}

// base class includes
#include "CallActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class CallBehaviorActionActivation:virtual public CallActionActivation	{
		public:
 			CallBehaviorActionActivation(const CallBehaviorActionActivation &) {}
			CallBehaviorActionActivation& operator=(CallBehaviorActionActivation const&) = delete;
	
		protected:
			CallBehaviorActionActivation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~CallBehaviorActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> 
			 getCallExecution()  = 0;
			
			
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
#endif /* end of include guard: FUML_CALLBEHAVIORACTIONACTIVATION_HPP */

