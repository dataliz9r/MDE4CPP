//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYEXECUTION_HPP
#define FUML_ACTIVITYEXECUTION_HPP

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
	class ActivityNodeActivationGroup;
}

namespace uml 
{
	class Classifier;
}

namespace fUML 
{
	class Execution;
}

namespace fUML 
{
	class FeatureValue;
}

namespace fUML 
{
	class Locus;
}

namespace fUML 
{
	class Object;
}

namespace fUML 
{
	class ObjectActivation;
}

namespace fUML 
{
	class ParameterValue;
}

namespace fUML 
{
	class Value;
}

// base class includes
#include "Execution.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ActivityExecution:virtual public Execution	{
		public:
 			ActivityExecution(const ActivityExecution &) {}
			ActivityExecution& operator=(ActivityExecution const&) = delete;
	
		protected:
			ActivityExecution(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ActivityExecution() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 execute()  = 0;
			
			/*!
			 */ 
			virtual void
			 terminate()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 new_()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityNodeActivationGroup > getActivationGroup() const = 0;
			
			/*!
			 */
			virtual void setActivationGroup(std::shared_ptr<fUML::ActivityNodeActivationGroup> _activationGroup_activationGroup) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::ActivityNodeActivationGroup > m_activationGroup;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_ACTIVITYEXECUTION_HPP */

