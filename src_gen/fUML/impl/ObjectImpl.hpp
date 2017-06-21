//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OBJECTOBJECTIMPL_HPP
#define FUML_OBJECTOBJECTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Object.hpp"

#include "impl/ExtensionalValueImpl.hpp"

#include "FUMLFactory.hpp"
#include "UmlFactory.hpp"
#include "Class.hpp"
#include "Classifier.hpp"


//*********************************
namespace fUML 
{
	class ObjectImpl :virtual public ExtensionalValueImpl, virtual public Object 
	{
		public: 
			ObjectImpl(const ObjectImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ObjectImpl& operator=(ObjectImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ObjectImpl();

		public:
			//destructor
			virtual ~ObjectImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<std::vector<std::shared_ptr<fUML::ParameterValue>>>  inputs)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution>  dispatch(std::shared_ptr<uml::Operation>  operation)  ;
			
			/*!
			 */ 
			virtual void send(std::shared_ptr<fUML::SignalInstance>  signalInstance)  ;
			
			/*!
			 */ 
			virtual void _register(std::shared_ptr<fUML::EventAccepter>  accepter)  ;
			
			/*!
			 */ 
			virtual void unregister(std::shared_ptr<fUML::EventAccepter>  accepter)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value>  new_()  ;
			
			/*!
			 */ 
			virtual void destroy()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> getTypes() const ;
			
			/*!
			 */
			virtual std::shared_ptr<fUML::ObjectActivation> getObjectActivation() const ;
			
			/*!
			 */
			virtual void setObjectActivation(std::shared_ptr<fUML::ObjectActivation> _objectActivation) ;
							
			
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
#endif /* end of include guard: FUML_OBJECTOBJECTIMPL_HPP */
