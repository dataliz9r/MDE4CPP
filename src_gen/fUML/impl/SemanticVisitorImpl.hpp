//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICVISITORSEMANTICVISITORIMPL_HPP
#define FUML_SEMANTICVISITORSEMANTICVISITORIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../SemanticVisitor.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class SemanticVisitorImpl :virtual public ecore::EObjectImpl,
virtual public SemanticVisitor 
	{
		public: 
			SemanticVisitorImpl(const SemanticVisitorImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			SemanticVisitorImpl& operator=(SemanticVisitorImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			SemanticVisitorImpl();

		public:
			//destructor
			virtual ~SemanticVisitorImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void
			 _endIsolation()  ;
			
			/*!
			 */ 
			virtual void
			 _beginIsolation()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_SEMANTICVISITORSEMANTICVISITORIMPL_HPP */

