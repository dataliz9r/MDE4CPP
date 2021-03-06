//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_MODELLIBRARY_MODELLIBRARYIMPL_HPP
#define STANDARDPROFILE_MODELLIBRARY_MODELLIBRARYIMPL_HPP

#include <functional>

//Model includes
#include "../ModelLibrary.hpp"
#include "uml/impl/StereotypeImpl.hpp"
#include "uml/Property.hpp"

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

namespace uml
{
	class Property;
}

//*********************************
namespace StandardProfile
{
	class ModelLibraryImpl : virtual public uml::StereotypeImpl, virtual public ModelLibrary
	{
		public: 
			ModelLibraryImpl(const ModelLibraryImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ModelLibraryImpl& operator=(ModelLibraryImpl const&) = delete;

		protected:
			friend class StandardProfileFactoryImpl;
			//constructor
			ModelLibraryImpl();
			virtual std::shared_ptr<ModelLibrary> getThisModelLibraryPtr();
			virtual void setThisModelLibraryPtr(std::weak_ptr<ModelLibrary> thisModelLibraryPtr);


		public:

			//destructor
			virtual ~ModelLibraryImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Package> getBase_Package() const ;
			virtual void setBase_Package (std::weak_ptr<uml::Package> _base_Package);
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual Any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property, Any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
			
		
		private:
			std::weak_ptr<ModelLibrary> m_thisModelLibraryPtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: STANDARDPROFILE_MODELLIBRARY_MODELLIBRARYIMPL_HPP */
