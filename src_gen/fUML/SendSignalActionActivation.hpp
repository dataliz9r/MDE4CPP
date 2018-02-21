//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SENDSIGNALACTIONACTIVATION_HPP
#define FUML_SENDSIGNALACTIONACTIVATION_HPP

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

namespace fUML 
{
	class InputPinActivation;
}

namespace fUML 
{
	class InvocationActionActivation;
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
	class Token;
}

// base class includes
#include "fUML/InvocationActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class SendSignalActionActivation:virtual public InvocationActionActivation
	{
		public:
 			SendSignalActionActivation(const SendSignalActionActivation &) {}
			SendSignalActionActivation& operator=(SendSignalActionActivation const&) = delete;

		protected:
			SendSignalActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~SendSignalActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doAction()  = 0;
			
			
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
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation> > getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: FUML_SENDSIGNALACTIONACTIVATION_HPP */

