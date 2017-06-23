//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EENUMLITERALEENUMLITERALIMPL_HPP
#define ECORE_EENUMLITERALEENUMLITERALIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../EEnumLiteral.hpp"

#include "impl/ENamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EEnumLiteralImpl :virtual public ENamedElementImpl, virtual public EEnumLiteral 
	{
		public: 
			EEnumLiteralImpl(const EEnumLiteralImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EEnumLiteralImpl& operator=(EEnumLiteralImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EEnumLiteralImpl();

		public:
			//destructor
			virtual ~EEnumLiteralImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getValue() const ;
			
			/*!
			 */ 
			virtual void setValue (int _value); 
			
			/*!
			 */ 
			virtual boost::any getInstance() const ;
			
			/*!
			 */ 
			virtual void setInstance (boost::any _instance); 
			
			/*!
			 */ 
			virtual std::string getLiteral() const ;
			
			/*!
			 */ 
			virtual void setLiteral (std::string _literal); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EEnum > getEEnum() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EENUMLITERALEENUMLITERALIMPL_HPP */

