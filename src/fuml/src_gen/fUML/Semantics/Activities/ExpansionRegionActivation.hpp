//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_EXPANSIONREGIONACTIVATION_HPP
#define FUML_SEMANTICS_ACTIVITIES_EXPANSIONREGIONACTIVATION_HPP

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
namespace fUML::Semantics::Actions 
{
	class ActionActivation;
}

namespace fUML::Semantics::Activities 
{
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML::Semantics::Activities 
{
	class ActivityNodeActivationGroup;
}

namespace fUML::Semantics::Activities 
{
	class ExpansionActivationGroup;
}

namespace uml 
{
	class ExpansionNode;
}

namespace fUML::Semantics::Activities 
{
	class ExpansionNodeActivation;
}

namespace fUML::Semantics::Actions 
{
	class InputPinActivation;
}

namespace fUML::Semantics::Actions 
{
	class OutputPinActivation;
}

namespace fUML::Semantics::Actions 
{
	class PinActivation;
}

namespace fUML::Semantics::Activities 
{
	class Token;
}

namespace fUML::Semantics::Activities 
{
	class TokenSet;
}

// base class includes
#include "fUML/Semantics/Actions/ActionActivation.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::Activities 
{
	/*!
	 */
	class ExpansionRegionActivation:virtual public fUML::Semantics::Actions::ActionActivation
	{
		public:
 			ExpansionRegionActivation(const ExpansionRegionActivation &) {}
			ExpansionRegionActivation& operator=(ExpansionRegionActivation const&) = delete;

		protected:
			ExpansionRegionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExpansionRegionActivation() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doAction() = 0;
			
			/*!
			 */ 
			virtual void doOutput() = 0;
			
			/*!
			 */ 
			virtual void doStructuredActivity() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::Activities::ExpansionNodeActivation> getExpansionNodeActivation(std::shared_ptr<uml::ExpansionNode>  node) = 0;
			
			/*!
			 */ 
			virtual bool isSuspended() = 0;
			
			/*!
			 */ 
			virtual int numberOfValues() = 0;
			
			/*!
			 */ 
			virtual void resume(std::shared_ptr<fUML::Semantics::Activities::ExpansionActivationGroup>  activationGroup) = 0;
			
			/*!
			 */ 
			virtual void runGroup(std::shared_ptr<fUML::Semantics::Activities::ExpansionActivationGroup>  activationGroup) = 0;
			
			/*!
			 */ 
			virtual void runIterative() = 0;
			
			/*!
			 */ 
			virtual void runParallel() = 0;
			
			/*!
			 */ 
			virtual void sendOffers() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > takeOfferedTokens() = 0;
			
			/*!
			 */ 
			virtual void terminate() = 0;
			
			/*!
			 */ 
			virtual void terminateGroup(std::shared_ptr<fUML::Semantics::Activities::ExpansionActivationGroup>  activationGroup) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getNext() const = 0;
			
			/*!
			 */ 
			virtual void setNext (int _next)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::ExpansionActivationGroup>> getActivationGroups() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::TokenSet>> getInputExpansionTokens() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::TokenSet>> getInputTokens() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			int m_next = 0;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<fUML::Semantics::Activities::ExpansionActivationGroup>> m_activationGroups;
			/*!
			 */
			std::shared_ptr<Bag<fUML::Semantics::Activities::TokenSet>> m_inputExpansionTokens;
			/*!
			 */
			std::shared_ptr<Bag<fUML::Semantics::Activities::TokenSet>> m_inputTokens;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::Semantics::Actions::PinActivation>> getPinActivation() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_EXPANSIONREGIONACTIVATION_HPP */
