/*
 * SaveHandler.hpp
 *
 *  Created on: 29.05.2017
 *      Author: Alexander
 */

#ifndef PERSISTENCE_BASE_SAVEHANDLER_HPP
#define PERSISTENCE_BASE_SAVEHANDLER_HPP

#include "persistence/interfaces/XSaveHandler.hpp"

#include <string>
#include "abstractDataTypes/Bag.hpp"

namespace ecore
{
	class EObject;
}

namespace persistence
{
	namespace base
	{
		class SaveHandler: public persistence::interfaces::XSaveHandler
		{
			public:
				SaveHandler();
				virtual ~SaveHandler();

				std::string getPrefix();
				void setRootObject(std::shared_ptr<ecore::EObject> object);

				std::string extractType(std::shared_ptr<ecore::EObject> obj) const;

				virtual bool createRootNode(const std::string& name, const std::string& ns_uri) = 0;
				virtual bool createRootNode(const std::string& prefix, const std::string& name, const std::string& ns_uri) = 0;

				virtual bool createAndAddElement(const std::string& name) = 0;

				void addAttribute(const std::string &name, bool value);
				virtual void addAttribute(const std::string &name, const std::string& value) = 0;

				virtual void addReferences(const std::string &name, std::shared_ptr<ecore::EObject> object) = 0;

				virtual void release() = 0;
				virtual void finalize() = 0;
				virtual void setThisPtr(std::shared_ptr<SaveHandler> thisPtr);
				virtual void setIsXSIMode(bool value);
				virtual void setTypesMap(std::map<std::string, std::shared_ptr<ecore::EObject>> typesMap);
//				virtual void addTypeReference(const std::string& href, const std::string& xmitype) = 0;

			protected:
				std::shared_ptr<ecore::EObject> m_rootObject;
				std::string m_rootPrefix;
				std::map<std::shared_ptr<ecore::EObject>, std::string> m_refObjectName_map; // map of known reference names which are stored in container. Used for references to this objects
				bool m_isXSIMode;
				std::shared_ptr<Bag<ecore::EObject>> m_savedObjects; // List of allready saved Objejts to avoid multiple save
				std::shared_ptr<SaveHandler> m_thisPtr;
		};
	} /* namespace base */
} /* namespace persistence */

#endif /* SaveHandler_HPP_ */
