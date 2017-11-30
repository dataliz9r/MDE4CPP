//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef TYPESPLUGINIMPL_HPP
#define TYPESPLUGINIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include "TypesPlugin.hpp"

namespace types 
{
	class TypesPluginImpl : virtual public TypesPlugin 
	{
		public:
			TypesPluginImpl();
			virtual ~TypesPluginImpl();
		
			virtual std::string eNAME();
			virtual std::string eNS_URI();
			virtual std::string eNS_PREFIX();
		
			virtual std::shared_ptr<ecore::EFactory> getFactory();
			virtual std::shared_ptr<ecore::EPackage> getPackage();
	};
}
#endif /* end of include guard: TYPESPLUGINIMPL_HPP */

