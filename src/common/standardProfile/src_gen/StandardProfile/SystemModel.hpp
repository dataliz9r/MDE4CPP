//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_SYSTEMMODEL__HPP
#define STANDARDPROFILE_SYSTEMMODEL__HPP




//Forward Declaration for used types
namespace uml 
{
	class Model;
}

// base class includes
#include "uml/Stereotype.hpp"



namespace StandardProfile
{
	class SystemModel : virtual public uml::Stereotype 
	{
		private:    
			SystemModel(const SystemModel& that) = delete;

		protected:
			SystemModel(){}

		public:
			//destructor
			virtual ~SystemModel() {}

			//*********************************
			// Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Model> getBase_Model() const  = 0;
			virtual void setBase_Model (std::weak_ptr<uml::Model> _base_Model) = 0;
			
			
			//*********************************
			// Operations
			//*********************************
			
			
		protected:
			//*********************************
			// Members
			//*********************************
			std::weak_ptr<uml::Model> m_base_Model;
			
	};
}
#endif /* end of include guard: STANDARDPROFILE_SYSTEMMODEL__HPP */
