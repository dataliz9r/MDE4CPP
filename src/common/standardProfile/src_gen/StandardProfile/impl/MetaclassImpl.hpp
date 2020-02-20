//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_METACLASS_METACLASSIMPL_HPP
#define STANDARDPROFILE_METACLASS_METACLASSIMPL_HPP

#include <functional>

//Model includes
#include "../Metaclass.hpp"
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
	class MetaclassImpl : virtual public uml::StereotypeImpl, virtual public Metaclass
	{
		public: 
			MetaclassImpl(const MetaclassImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			MetaclassImpl& operator=(MetaclassImpl const&) = delete;

		protected:
			friend class StandardProfileFactoryImpl;
			//constructor
			MetaclassImpl();
			virtual std::shared_ptr<Metaclass> getThisMetaclassPtr();
			virtual void setThisMetaclassPtr(std::weak_ptr<Metaclass> thisMetaclassPtr);


		public:

			//destructor
			virtual ~MetaclassImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Class> getBase_Class() const ;
			virtual void setBase_Class (std::weak_ptr<uml::Class> _base_Class);
			

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
			std::weak_ptr<Metaclass> m_thisMetaclassPtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: STANDARDPROFILE_METACLASS_METACLASSIMPL_HPP */
