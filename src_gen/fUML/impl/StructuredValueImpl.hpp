//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP
#define FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP

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
#include "../StructuredValue.hpp"

#include "impl/ValueImpl.hpp"

#include "SubsetUnion.hpp"

#include "InstanceValue.hpp"
#include "UmlFactory.hpp"
#include "Slot.hpp"
#include "Classifier.hpp"
#include "NamedElement.hpp"
#include "InstanceSpecification.hpp"

#include "FUMLFactory.hpp"
#include "StructuralFeature.hpp"



//*********************************
namespace fUML 
{
	class StructuredValueImpl :virtual public ValueImpl, virtual public StructuredValue 
	{
		public: 
			StructuredValueImpl(const StructuredValueImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			StructuredValueImpl& operator=(StructuredValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StructuredValueImpl();

		public:
			//destructor
			virtual ~StructuredValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> 
			 retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature)  ;
			
			/*!
			 */ 
			virtual void
			 assignFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> >
			 retrieveFeatureValues()  ;
			
			/*!
			 */ 
			virtual void
			 createFeatureValues()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> 
			 specify()  ;
			
			
			
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
#endif /* end of include guard: FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP */

