//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIONACTIVATION_HPP
#define FUML_ACTIONACTIVATION_HPP

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
	class ActivityNodeActivation;
}

namespace fUML 
{
	class ActivityNodeActivationGroup;
}

namespace fUML 
{
	class BooleanValue;
}

namespace uml 
{
	class InputPin;
}

namespace fUML 
{
	class InputPinActivation;
}

namespace fUML 
{
	class Link;
}

namespace uml 
{
	class OutputPin;
}

namespace fUML 
{
	class OutputPinActivation;
}

namespace uml 
{
	class Pin;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class Token;
}

namespace fUML 
{
	class Value;
}

// base class includes
#include "fUML/ActivityNodeActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ActionActivation:virtual public ActivityNodeActivation
	{
		public:
 			ActionActivation(const ActionActivation &) {}
			ActionActivation& operator=(ActionActivation const&) = delete;

		protected:
			ActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ActionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addOutgoingEdge(std::shared_ptr<fUML::ActivityEdgeInstance>  edge)  = 0;
			
			/*!
			 */ 
			virtual void addPinActivation(std::shared_ptr<fUML::PinActivation>  pinActivation)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > completeAction()  = 0;
			
			/*!
			 */ 
			virtual void createNodeActivations()  = 0;
			
			/*!
			 */ 
			virtual void doAction()  = 0;
			
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > getTokens(std::shared_ptr<uml::InputPin>  pin)  = 0;
			
			/*!
			 */ 
			virtual bool isFirng()  = 0;
			
			/*!
			 */ 
			virtual bool isReady()  = 0;
			
			/*!
			 */ 
			virtual bool isSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::BooleanValue> makeBooleanValue(bool value)  = 0;
			
			/*!
			 */ 
			virtual void putToken(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<fUML::Value>  value)  = 0;
			
			/*!
			 */ 
			virtual void putTokens(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<Bag<fUML::Value> >  values)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::PinActivation> retrievePinActivation(std::shared_ptr<uml::Pin>  pin)  = 0;
			
			/*!
			 */ 
			virtual void run()  = 0;
			
			/*!
			 */ 
			virtual void sendOffers()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > takeOfferedTokens()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > takeTokens(std::shared_ptr<uml::InputPin>  pin)  = 0;
			
			/*!
			 */ 
			virtual void terminate()  = 0;
			
			/*!
			 */ 
			virtual bool valueParticipatesInLink(std::shared_ptr<fUML::Value>  value,std::shared_ptr<fUML::Link>  link)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isFiring() const = 0;
			
			/*!
			 */ 
			virtual void setFiring (bool _firing)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Subset<fUML::InputPinActivation, fUML::PinActivation > > getInputPinActivation() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Subset<fUML::OutputPinActivation, fUML::PinActivation > > getOutputPinActivation() const = 0;
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_firing =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Subset<fUML::InputPinActivation, fUML::PinActivation > > m_inputPinActivation;
			/*!
			 */
			std::shared_ptr<Subset<fUML::OutputPinActivation, fUML::PinActivation > > m_outputPinActivation;
			/*!
			 */
			std::shared_ptr<Union<fUML::PinActivation> > m_pinActivation;
			

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
#endif /* end of include guard: FUML_ACTIONACTIVATION_HPP */

