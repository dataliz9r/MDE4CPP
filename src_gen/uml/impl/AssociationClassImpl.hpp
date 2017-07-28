//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ASSOCIATIONCLASSASSOCIATIONCLASSIMPL_HPP
#define UML_ASSOCIATIONCLASSASSOCIATIONCLASSIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../AssociationClass.hpp"

#include "impl/AssociationImpl.hpp"
#include "impl/ClassImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class AssociationClassImpl :virtual public AssociationImpl, virtual public ClassImpl, virtual public AssociationClass 
	{
		public: 
			AssociationClassImpl(const AssociationClassImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			AssociationClassImpl& operator=(AssociationClassImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			AssociationClassImpl();

		public:
			//destructor
			virtual ~AssociationClassImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An AssociationClass cannot be defined between itself and something else.
			self.endType()->excludes(self) and self.endType()->collect(et|et.oclAsType(Classifier).allParents())->flatten()->excludes(self) */ 
			virtual bool
			 cannot_be_defined(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The owned attributes and owned ends of an AssociationClass are disjoint.
			ownedAttribute->intersection(ownedEnd)->isEmpty() */ 
			virtual bool
			 disjoint_attributes_ends(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > >
			 getAttribute() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > >
			 getFeature() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > >
			 getOwnedMember() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement > >
			 getRole() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ASSOCIATIONCLASSASSOCIATIONCLASSIMPL_HPP */

