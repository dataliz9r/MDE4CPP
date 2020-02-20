//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_HPP
#define FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace fUML
{
	class FUMLFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Classifier;
}

namespace fUML::Semantics::CommonBehavior 
{
	class EventOccurrence;
}

namespace fUML::Semantics::CommonBehavior 
{
	class Execution;
}

namespace fUML::Semantics::SimpleClassifiers 
{
	class FeatureValue;
}

namespace fUML::Semantics::Loci 
{
	class Locus;
}

namespace fUML::Semantics::StructuredClassifiers 
{
	class Object;
}

namespace fUML::Semantics::CommonBehavior 
{
	class ObjectActivation;
}

namespace uml 
{
	class Operation;
}

namespace fUML::Semantics::CommonBehavior 
{
	class ParameterValue;
}

namespace fUML::Semantics::Values 
{
	class Value;
}

// base class includes
#include "fUML/Semantics/CommonBehavior/Execution.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::CommonBehavior 
{
	/*!
	 */
	class CallEventExecution:virtual public Execution
	{
		public:
 			CallEventExecution(const CallEventExecution &) {}
			CallEventExecution& operator=(CallEventExecution const&) = delete;

		protected:
			CallEventExecution(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CallEventExecution() {}

			//*********************************
			// Operations
			//*********************************
			
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::CommonBehavior::EventOccurrence> createEventOccurrence() = 0;
			
			/*!
			 */ 
			virtual void execute() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> > getInputParameterValues() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Operation> getOperation() = 0;
			
			/*!
			 */ 
			virtual bool isCallerSuspended() = 0;
			
			/*!
			 */ 
			virtual void makeCall() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() = 0;
			
			/*!
			 */ 
			virtual void releaseCaller() = 0;
			
			/*!
			 */ 
			virtual void setOutputParameterValues(std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  parameterValues) = 0;
			
			/*!
			 */ 
			virtual void suspendCaller() = 0;
			
			/*!
			 */ 
			virtual void wait_() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool getCallerSuspended() const = 0;
			
			/*!
			 */ 
			virtual void setCallerSuspended (bool _callerSuspended)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_callerSuspended = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTEXECUTION_HPP */
