//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_REMOVESTRUCTURALFEATUREVALUEACTIVATION_HPP
#define FUML_REMOVESTRUCTURALFEATUREVALUEACTIVATION_HPP

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
	class PinActivation;
}

namespace fUML 
{
	class Token;
}

namespace fUML 
{
	class WriteStructuralFeatureActionActivation;
}

// base class includes
#include "WriteStructuralFeatureActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class RemoveStructuralFeatureValueActivation:virtual public WriteStructuralFeatureActionActivation	{
		public:
 			RemoveStructuralFeatureValueActivation(const RemoveStructuralFeatureValueActivation &) {}
			RemoveStructuralFeatureValueActivation& operator=(RemoveStructuralFeatureValueActivation const&) = delete;
	
		protected:
			RemoveStructuralFeatureValueActivation(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~RemoveStructuralFeatureValueActivation() {}

			//*********************************
			// Operations
			//*********************************
			
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
#endif /* end of include guard: FUML_REMOVESTRUCTURALFEATUREVALUEACTIVATION_HPP */

