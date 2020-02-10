//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef STANDARDPROFILE_LIBRARY__HPP
#define STANDARDPROFILE_LIBRARY__HPP




//Forward Declaration for used types
namespace uml 
{
	class Artifact;
}

// base class includes
#include "StandardProfile/File.hpp"



namespace StandardProfile
{
	class Library:virtual public File	{
		private:    
			Library(const Library& that) = delete;

		protected:
			Library(){}

		public:
			//destructor
			virtual ~Library() {}

			//*********************************
			// Getter Setter
			//*********************************
			virtual std::weak_ptr<uml::Artifact> getBase_Artifact() const  = 0;
			virtual void setBase_Artifact (std::weak_ptr<uml::Artifact> _base_Artifact) = 0;
			
			
			//*********************************
			// Operations
			//*********************************
			
			
		protected:
			//*********************************
			// Members
			//*********************************
			std::weak_ptr<uml::Artifact> m_base_Artifact;
			
	};
}
#endif /* end of include guard: STANDARDPROFILE_LIBRARY__HPP */