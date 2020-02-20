//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PACKAGEIMPORTPACKAGEIMPORTIMPL_HPP
#define UML_PACKAGEIMPORTPACKAGEIMPORTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../PackageImport.hpp"

#include "uml/impl/DirectedRelationshipImpl.hpp"

//*********************************
namespace uml 
{
	class PackageImportImpl :virtual public DirectedRelationshipImpl, virtual public PackageImport 
	{
		public: 
			PackageImportImpl(const PackageImportImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			PackageImportImpl& operator=(PackageImportImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			PackageImportImpl();
			virtual std::shared_ptr<PackageImport> getThisPackageImportPtr() const;
			virtual void setThisPackageImportPtr(std::weak_ptr<PackageImport> thisPackageImportPtr);

			//Additional constructors for the containments back reference
			PackageImportImpl(std::weak_ptr<uml::Namespace > par_importingNamespace);


			//Additional constructors for the containments back reference
			PackageImportImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~PackageImportImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The visibility of a PackageImport is either public or private.
			visibility = VisibilityKind::public or visibility = VisibilityKind::private */ 
			virtual bool public_or_private(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies the visibility of the imported PackageableElements within the importingNamespace, i.e., whether imported Elements will in turn be visible to other Namespaces. If the PackageImport is public, the imported Elements will be visible outside the importingNamespace, while, if the PackageImport is private, they will not.
			<p>From package UML::CommonStructure.</p> */ 
			virtual uml::VisibilityKind getVisibility() const ;
			
			/*!
			 Specifies the visibility of the imported PackageableElements within the importingNamespace, i.e., whether imported Elements will in turn be visible to other Namespaces. If the PackageImport is public, the imported Elements will be visible outside the importingNamespace, while, if the PackageImport is private, they will not.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setVisibility (uml::VisibilityKind _visibility); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the Package whose members are imported into a Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Package > getImportedPackage() const ;
			
			/*!
			 Specifies the Package whose members are imported into a Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual void setImportedPackage(std::shared_ptr<uml::Package> _importedPackage_importedPackage) ;
			/*!
			 Specifies the Namespace that imports the members from a Package.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getImportingNamespace() const ;
			
			/*!
			 Specifies the Namespace that imports the members from a Package.
			<p>From package UML::CommonStructure.</p> */
			virtual void setImportingNamespace(std::shared_ptr<uml::Namespace> _importingNamespace_importingNamespace) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<PackageImport> m_thisPackageImportPtr;
	};
}
#endif /* end of include guard: UML_PACKAGEIMPORTPACKAGEIMPORTIMPL_HPP */
