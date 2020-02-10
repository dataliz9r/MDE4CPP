#include "StandardProfile/impl/MetaclassImpl.hpp"

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

#include <cassert>
#include <iostream>
#include <sstream>


#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "StandardProfile/impl/StandardProfilePackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "StandardProfile/StandardProfileFactory.hpp"
#include "StandardProfile/StandardProfilePackage.hpp"

#include <exception> // used in Persistence

#include "uml/Class.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "StandardProfile/StandardProfilePackage.hpp"
#include "StandardProfile/StandardProfileFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace StandardProfile;

//*********************************
// Constructor / Destructor
//*********************************
MetaclassImpl::MetaclassImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	//Init references
	
}

MetaclassImpl::~MetaclassImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Metaclass "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




MetaclassImpl::MetaclassImpl(const MetaclassImpl & obj):MetaclassImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy Metaclass "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_base_Class  = obj.getBase_Class();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  MetaclassImpl::copy() const
{
	std::shared_ptr<MetaclassImpl> element(new MetaclassImpl(*this));
	element->setThisMetaclassPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> MetaclassImpl::eStaticClass() const
{
	return StandardProfilePackageImpl::eInstance()->getMetaclass_Class();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<uml::Class > MetaclassImpl::getBase_Class() const
{
//assert(m_base_Class);
    return m_base_Class;
}
void MetaclassImpl::setBase_Class(std::shared_ptr<uml::Class> _base_Class)
{
    m_base_Class = _base_Class;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<Metaclass> MetaclassImpl::getThisMetaclassPtr() const
{
	return m_thisMetaclassPtr.lock();
}
void MetaclassImpl::setThisMetaclassPtr(std::weak_ptr<Metaclass> thisMetaclassPtr)
{
	m_thisMetaclassPtr = thisMetaclassPtr;
}
std::shared_ptr<ecore::EObject> MetaclassImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any MetaclassImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case StandardProfilePackage::METACLASS_ATTRIBUTE_BASE_CLASS:
			return eAny(std::dynamic_pointer_cast<ecore::EObject>(getBase_Class())); //170
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool MetaclassImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case StandardProfilePackage::METACLASS_ATTRIBUTE_BASE_CLASS:
			return getBase_Class() != nullptr; //170
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool MetaclassImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case StandardProfilePackage::METACLASS_ATTRIBUTE_BASE_CLASS:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _temp = newValue->get<std::shared_ptr<ecore::EObject>>();
			std::shared_ptr<uml::Class> _base_Class = std::dynamic_pointer_cast<uml::Class>(_temp);
			setBase_Class(_base_Class); //170
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void MetaclassImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get StandardProfileFactory
	std::shared_ptr<StandardProfile::StandardProfileFactory> modelFactory = StandardProfile::StandardProfileFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void MetaclassImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("base_Class");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("base_Class")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void MetaclassImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<StandardProfile::StandardProfileFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void MetaclassImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case StandardProfilePackage::METACLASS_ATTRIBUTE_BASE_CLASS:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::Class> _base_Class = std::dynamic_pointer_cast<uml::Class>( references.front() );
				setBase_Class(_base_Class);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void MetaclassImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void MetaclassImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<StandardProfile::StandardProfilePackage> package = StandardProfile::StandardProfilePackage::eInstance();

	

		// Add references
		saveHandler->addReference("base_Class", this->getBase_Class());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}
