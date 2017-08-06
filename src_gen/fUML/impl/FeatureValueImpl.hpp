//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_FEATUREVALUEFEATUREVALUEIMPL_HPP
#define FUML_FEATUREVALUEFEATUREVALUEIMPL_HPP

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
#include "../FeatureValue.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"

#include "FUMLFactory.hpp"
#include "StructuralFeature.hpp"



//*********************************
namespace fUML 
{
	class FeatureValueImpl :virtual public ecore::EObjectImpl,
virtual public FeatureValue 
	{
		public: 
			FeatureValueImpl(const FeatureValueImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			FeatureValueImpl& operator=(FeatureValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			FeatureValueImpl();

		public:
			//destructor
			virtual ~FeatureValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool
			 hasEqualValues(std::shared_ptr<fUML::FeatureValue>  other)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getPosition() const ;
			
			/*!
			 */ 
			virtual void setPosition (int _position); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual 	std::shared_ptr< Bag<fUML::Value> >
			 getValues() const ;
			
			/*!
			 */
			virtual std::shared_ptr<uml::StructuralFeature > getFeature() const ;
			
			/*!
			 */
			virtual void setFeature(std::shared_ptr<uml::StructuralFeature> _feature_feature) ;
							
			
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
#endif /* end of include guard: FUML_FEATUREVALUEFEATUREVALUEIMPL_HPP */

