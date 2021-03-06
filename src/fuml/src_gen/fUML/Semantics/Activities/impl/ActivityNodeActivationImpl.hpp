//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONACTIVITYNODEACTIVATIONIMPL_HPP
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONACTIVITYNODEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActivityNodeActivation.hpp"

#include "fUML/impl/FUMLFactoryImpl.hpp"
#include "fUML/Semantics/Loci/impl/SemanticVisitorImpl.hpp"

//*********************************
namespace fUML::Semantics::Activities 
{
	class ActivityNodeActivationImpl :virtual public fUML::Semantics::Loci::SemanticVisitorImpl, virtual public ActivityNodeActivation 
	{
		public: 
			ActivityNodeActivationImpl(const ActivityNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityNodeActivationImpl& operator=(ActivityNodeActivationImpl const&) = delete;

		protected:
			friend class fUML::FUMLFactoryImpl;
			ActivityNodeActivationImpl();
			virtual std::shared_ptr<ActivityNodeActivation> getThisActivityNodeActivationPtr() const;
			virtual void setThisActivityNodeActivationPtr(std::weak_ptr<ActivityNodeActivation> thisActivityNodeActivationPtr);

			//Additional constructors for the containments back reference
			ActivityNodeActivationImpl(std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~ActivityNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addIncomingEdge(std::shared_ptr<fUML::Semantics::Activities::ActivityEdgeInstance>  edge) ;
			
			/*!
			 */ 
			virtual void addOutgoingEdge(std::shared_ptr<fUML::Semantics::Activities::ActivityEdgeInstance>  edge) ;
			
			/*!
			 */ 
			virtual void addToken(std::shared_ptr<fUML::Semantics::Activities::Token>  token) ;
			
			/*!
			 */ 
			virtual void addTokens(std::shared_ptr<Bag<fUML::Semantics::Activities::Token> >  tokens) ;
			
			/*!
			 */ 
			virtual void clearTokens() ;
			
			/*!
			 */ 
			virtual void createEdgeInstances() ;
			
			/*!
			 */ 
			virtual void createNodeActivations() ;
			
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Semantics::Activities::Token> >  incomingTokens) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::Activities::ActivityExecution> getActivityExecution() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::StructuredClassifiers::Object> getExecutionContext() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::Loci::Locus> getExecutionLocus() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivation> getNodeActivation(std::shared_ptr<uml::ActivityNode>  node) ;
			
			/*!
			 */ 
			virtual bool getRunning() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > getTokens() ;
			
			/*!
			 */ 
			virtual bool isReady() ;
			
			/*!
			 */ 
			virtual bool isSourceFor(std::shared_ptr<fUML::Semantics::Activities::ActivityEdgeInstance>  edgeInstances) ;
			
			/*!
			 */ 
			virtual void receiveOffer() ;
			
			/*!
			 */ 
			virtual int removeToken(std::shared_ptr<fUML::Semantics::Activities::Token>  token) ;
			
			/*!
			 */ 
			virtual void resume() ;
			
			/*!
			 */ 
			virtual void run() ;
			
			/*!
			 */ 
			virtual void sendOffers(std::shared_ptr<Bag<fUML::Semantics::Activities::Token> >  tokens) ;
			
			/*!
			 */ 
			virtual void suspend() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > takeOfferedTokens() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token> > takeTokens() ;
			
			/*!
			 */ 
			virtual void terminate() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isRunning() const ;
			
			/*!
			 */ 
			virtual void setRunning (bool _running); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup > getGroup() const ;
			
			/*!
			 */
			virtual void setGroup(std::shared_ptr<fUML::Semantics::Activities::ActivityNodeActivationGroup> _group_group) ;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::Token>> getHeldTokens() const ;
			
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::ActivityEdgeInstance>> getIncomingEdges() const ;
			
			/*!
			 */
			virtual std::shared_ptr<uml::ActivityNode > getNode() const ;
			
			/*!
			 */
			virtual void setNode(std::shared_ptr<uml::ActivityNode> _node_node) ;
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Semantics::Activities::ActivityEdgeInstance>> getOutgoingEdges() const ;
			
							
			
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
			std::weak_ptr<ActivityNodeActivation> m_thisActivityNodeActivationPtr;
	};
}
#endif /* end of include guard: FUML_SEMANTICS_ACTIVITIES_ACTIVITYNODEACTIVATIONACTIVITYNODEACTIVATIONIMPL_HPP */
