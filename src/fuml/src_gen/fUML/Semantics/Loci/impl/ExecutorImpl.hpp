//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_LOCI_EXECUTOREXECUTORIMPL_HPP
#define FUML_SEMANTICS_LOCI_EXECUTOREXECUTORIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Executor.hpp"

#include "fUML/impl/FUMLFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML::Semantics::Loci 
{
	class ExecutorImpl :virtual public ecore::EObjectImpl,
virtual public Executor 
	{
		public: 
			ExecutorImpl(const ExecutorImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExecutorImpl& operator=(ExecutorImpl const&) = delete;

		protected:
			friend class fUML::FUMLFactoryImpl;
			ExecutorImpl();
			virtual std::shared_ptr<Executor> getThisExecutorPtr() const;
			virtual void setThisExecutorPtr(std::weak_ptr<Executor> thisExecutorPtr);

			//Additional constructors for the containments back reference
			ExecutorImpl(std::weak_ptr<fUML::Semantics::Loci::Locus > par_locus);




		public:
			//destructor
			virtual ~ExecutorImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> evaluate(std::shared_ptr<uml::ValueSpecification>  specification) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> > execute(std::shared_ptr<uml::Behavior>  behavior,std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object>  context,std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  inputs) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::StructuredClassifiers::Reference> start(std::shared_ptr<uml::Class>  type,std::shared_ptr<Bag<fUML::Semantics::CommonBehavior::ParameterValue> >  inputs) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<fUML::Semantics::Loci::Locus > getLocus() const ;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Semantics::Loci::Locus> _locus_locus) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Executor> m_thisExecutorPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_LOCI_EXECUTOREXECUTORIMPL_HPP */
