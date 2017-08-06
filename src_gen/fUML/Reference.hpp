//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_REFERENCE_HPP
#define FUML_REFERENCE_HPP

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
namespace uml 
{
	class Class;
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
	class Object;
}

namespace uml 
{
	class Operation;
}

namespace fUML 
{
	class ParameterValue;
}

namespace fUML 
{
	class SignalInstance;
}

namespace uml 
{
	class StructuralFeature;
}

namespace fUML 
{
	class StructuredValue;
}

namespace fUML 
{
	class Value;
}

// base class includes
#include "StructuredValue.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class Reference:virtual public StructuredValue	{
		public:
 			Reference(const Reference &) {}
			Reference& operator=(Reference const&) = delete;
	
		protected:
			Reference(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Reference() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> 
			 dispatch(std::shared_ptr<uml::Operation>  operation)  = 0;
			
			/*!
			 */ 
			virtual void
			 send(std::shared_ptr<fUML::SignalInstance>  signalInstance)  = 0;
			
			/*!
			 */ 
			virtual void
			 destroy()  = 0;
			
			/*!
			 */ 
			virtual bool
			 equals(std::shared_ptr<fUML::Value>  otherValue)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 new_()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> >
			 getTypes()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> 
			 retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature)  = 0;
			
			/*!
			 */ 
			virtual void
			 assignFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> >
			 retrieveFeatureValues()  = 0;
			
			/*!
			 */ 
			virtual std::string
			 toString()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getReferent() const = 0;
			
			/*!
			 */
			virtual void setReferent(std::shared_ptr<fUML::Object> _referent_referent) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::Object > m_referent;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_REFERENCE_HPP */

