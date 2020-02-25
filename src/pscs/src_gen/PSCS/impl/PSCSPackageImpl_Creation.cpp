#include "PSCS/impl/PSCSPackageImpl.hpp"

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes
#include "ecore/EAnnotation.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EClass.hpp"
#include "ecore/EDataType.hpp"
#include "ecore/EEnum.hpp"
#include "ecore/EEnumLiteral.hpp"
#include "ecore/EGenericType.hpp"
#include "ecore/EOperation.hpp"
#include "ecore/EPackage.hpp"
#include "ecore/EParameter.hpp"
#include "ecore/EReference.hpp"
#include "ecore/EStringToStringMapEntry.hpp"

//depending model packages
#include "ecore/EcorePackage.hpp"
#include "fUML/FUMLPackage.hpp"
#include "types/TypesPackage.hpp"
#include "uml/UmlPackage.hpp"

using namespace PSCS;

void PSCSPackageImpl::createPackageContents(std::shared_ptr<ecore::EPackage> package)
{
	if (isCreated) 
	{
		return;
	}
	isCreated = true;

	std::shared_ptr<ecore::EcoreFactory> factory = ecore::EcoreFactory::eInstance();

	createCS_AcceptCallActionActivationContent(package, factory);
	createCS_AcceptEventActionActivationContent(package, factory);
	createCS_AddStructuralFeatureValueActionActivationContent(package, factory);
	createCS_CallEventExecutionContent(package, factory);
	createCS_CallOperationActionActivationContent(package, factory);
	createCS_ClearStructuralFeatureActionActivationContent(package, factory);
	createCS_ConstructStrategyContent(package, factory);
	createCS_CreateLinkActionActivationContent(package, factory);
	createCS_CreateObjectActionActivationContent(package, factory);
	createCS_DefaultConstructStrategyContent(package, factory);
	createCS_DefaultRequestPropagationStrategyContent(package, factory);
	createCS_DispatchOperationOfInterfaceStrategyContent(package, factory);
	createCS_EventOccurrenceContent(package, factory);
	createCS_ExecutionFactoryContent(package, factory);
	createCS_ExecutorContent(package, factory);
	createCS_InstanceValueEvaluationContent(package, factory);
	createCS_InteractionPointContent(package, factory);
	createCS_LinkContent(package, factory);
	createCS_LocusContent(package, factory);
	createCS_NameBased_StructuralFeatureOfInterfaceAccessStrategyContent(package, factory);
	createCS_ObjectContent(package, factory);
	createCS_OpaqueExpressionEvaluationContent(package, factory);
	createCS_ReadExtentActionActivationContent(package, factory);
	createCS_ReadSelfActionActivationContent(package, factory);
	createCS_ReferenceContent(package, factory);
	createCS_RemoveStructuralFeatureValueActionActivationContent(package, factory);
	createCS_RequestPropagationStrategyContent(package, factory);
	createCS_SendSignalActionActivationContent(package, factory);
	createCS_StructuralFeatureOfInterfaceAccessStrategyContent(package, factory);

	createPackageEDataTypes(package, factory);
}

void PSCSPackageImpl::createCS_AcceptCallActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_AcceptCallActionActivation_Class = factory->createEClass_in_EPackage(package, CS_ACCEPTCALLACTIONACTIVATION_CLASS);
	
	
	m_cS_AcceptCallActionActivation_Operation_accept_EventOccurrence = factory->createEOperation_in_EContainingClass(m_cS_AcceptCallActionActivation_Class, CS_ACCEPTCALLACTIONACTIVATION_OPERATION_ACCEPT_EVENTOCCURRENCE);
	
}

void PSCSPackageImpl::createCS_AcceptEventActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_AcceptEventActionActivation_Class = factory->createEClass_in_EPackage(package, CS_ACCEPTEVENTACTIONACTIVATION_CLASS);
	
	
	m_cS_AcceptEventActionActivation_Operation_accept_EventOccurrence = factory->createEOperation_in_EContainingClass(m_cS_AcceptEventActionActivation_Class, CS_ACCEPTEVENTACTIONACTIVATION_OPERATION_ACCEPT_EVENTOCCURRENCE);
	
}

void PSCSPackageImpl::createCS_AddStructuralFeatureValueActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_AddStructuralFeatureValueActionActivation_Class = factory->createEClass_in_EPackage(package, CS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_CLASS);
	
	
	m_cS_AddStructuralFeatureValueActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_AddStructuralFeatureValueActionActivation_Class, CS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_OPERATION_DOACTION);
	m_cS_AddStructuralFeatureValueActionActivation_Operation_doActionDefault = factory->createEOperation_in_EContainingClass(m_cS_AddStructuralFeatureValueActionActivation_Class, CS_ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_OPERATION_DOACTIONDEFAULT);
	
}

void PSCSPackageImpl::createCS_CallEventExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_CallEventExecution_Class = factory->createEClass_in_EPackage(package, CS_CALLEVENTEXECUTION_CLASS);
	
	m_cS_CallEventExecution_Attribute_interactionPoint = factory->createEReference_in_EContainingClass(m_cS_CallEventExecution_Class, CS_CALLEVENTEXECUTION_ATTRIBUTE_INTERACTIONPOINT);
	
	m_cS_CallEventExecution_Operation_copy = factory->createEOperation_in_EContainingClass(m_cS_CallEventExecution_Class, CS_CALLEVENTEXECUTION_OPERATION_COPY);
	m_cS_CallEventExecution_Operation_createEventOccurrence = factory->createEOperation_in_EContainingClass(m_cS_CallEventExecution_Class, CS_CALLEVENTEXECUTION_OPERATION_CREATEEVENTOCCURRENCE);
	m_cS_CallEventExecution_Operation_new_ = factory->createEOperation_in_EContainingClass(m_cS_CallEventExecution_Class, CS_CALLEVENTEXECUTION_OPERATION_NEW_);
	
}

void PSCSPackageImpl::createCS_CallOperationActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_CallOperationActionActivation_Class = factory->createEClass_in_EPackage(package, CS_CALLOPERATIONACTIONACTIVATION_CLASS);
	
	
	m_cS_CallOperationActionActivation_Operation__isCreate_Operation = factory->createEOperation_in_EContainingClass(m_cS_CallOperationActionActivation_Class, CS_CALLOPERATIONACTIONACTIVATION_OPERATION__ISCREATE_OPERATION);
	m_cS_CallOperationActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_CallOperationActionActivation_Class, CS_CALLOPERATIONACTIONACTIVATION_OPERATION_DOACTION);
	m_cS_CallOperationActionActivation_Operation_getCallExecution = factory->createEOperation_in_EContainingClass(m_cS_CallOperationActionActivation_Class, CS_CALLOPERATIONACTIONACTIVATION_OPERATION_GETCALLEXECUTION);
	m_cS_CallOperationActionActivation_Operation_isCreate_Operation = factory->createEOperation_in_EContainingClass(m_cS_CallOperationActionActivation_Class, CS_CALLOPERATIONACTIONACTIVATION_OPERATION_ISCREATE_OPERATION);
	m_cS_CallOperationActionActivation_Operation_isOperationProvided_Port_Operation = factory->createEOperation_in_EContainingClass(m_cS_CallOperationActionActivation_Class, CS_CALLOPERATIONACTIONACTIVATION_OPERATION_ISOPERATIONPROVIDED_PORT_OPERATION);
	m_cS_CallOperationActionActivation_Operation_isOperationRequired_Port_Operation = factory->createEOperation_in_EContainingClass(m_cS_CallOperationActionActivation_Class, CS_CALLOPERATIONACTIONACTIVATION_OPERATION_ISOPERATIONREQUIRED_PORT_OPERATION);
	
}

void PSCSPackageImpl::createCS_ClearStructuralFeatureActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_ClearStructuralFeatureActionActivation_Class = factory->createEClass_in_EPackage(package, CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_CLASS);
	
	
	m_cS_ClearStructuralFeatureActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_ClearStructuralFeatureActionActivation_Class, CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_OPERATION_DOACTION);
	m_cS_ClearStructuralFeatureActionActivation_Operation_getLinksToDestroy_StructuredValue_StructuralFeature = factory->createEOperation_in_EContainingClass(m_cS_ClearStructuralFeatureActionActivation_Class, CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_OPERATION_GETLINKSTODESTROY_STRUCTUREDVALUE_STRUCTURALFEATURE);
	m_cS_ClearStructuralFeatureActionActivation_Operation_getPotentialLinkEnds_CS_Reference_StructuralFeature = factory->createEOperation_in_EContainingClass(m_cS_ClearStructuralFeatureActionActivation_Class, CS_CLEARSTRUCTURALFEATUREACTIONACTIVATION_OPERATION_GETPOTENTIALLINKENDS_CS_REFERENCE_STRUCTURALFEATURE);
	
}

void PSCSPackageImpl::createCS_ConstructStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_ConstructStrategy_Class = factory->createEClass_in_EPackage(package, CS_CONSTRUCTSTRATEGY_CLASS);
	
	
	m_cS_ConstructStrategy_Operation_construct_Operation_CS_Object = factory->createEOperation_in_EContainingClass(m_cS_ConstructStrategy_Class, CS_CONSTRUCTSTRATEGY_OPERATION_CONSTRUCT_OPERATION_CS_OBJECT);
	m_cS_ConstructStrategy_Operation_getName = factory->createEOperation_in_EContainingClass(m_cS_ConstructStrategy_Class, CS_CONSTRUCTSTRATEGY_OPERATION_GETNAME);
	
}

void PSCSPackageImpl::createCS_CreateLinkActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_CreateLinkActionActivation_Class = factory->createEClass_in_EPackage(package, CS_CREATELINKACTIONACTIVATION_CLASS);
	
	
	m_cS_CreateLinkActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_CreateLinkActionActivation_Class, CS_CREATELINKACTIONACTIVATION_OPERATION_DOACTION);
	
}

void PSCSPackageImpl::createCS_CreateObjectActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_CreateObjectActionActivation_Class = factory->createEClass_in_EPackage(package, CS_CREATEOBJECTACTIONACTIVATION_CLASS);
	
	
	m_cS_CreateObjectActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_CreateObjectActionActivation_Class, CS_CREATEOBJECTACTIONACTIVATION_OPERATION_DOACTION);
	
}

void PSCSPackageImpl::createCS_DefaultConstructStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_DefaultConstructStrategy_Class = factory->createEClass_in_EPackage(package, CS_DEFAULTCONSTRUCTSTRATEGY_CLASS);
	
	m_cS_DefaultConstructStrategy_Attribute_defaultAssociation = factory->createEReference_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_ATTRIBUTE_DEFAULTASSOCIATION);
	m_cS_DefaultConstructStrategy_Attribute_generatedRealizingClasses = factory->createEReference_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_ATTRIBUTE_GENERATEDREALIZINGCLASSES);
	m_cS_DefaultConstructStrategy_Attribute_locus = factory->createEReference_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_ATTRIBUTE_LOCUS);
	
	m_cS_DefaultConstructStrategy_Operation_addStructuralFeatureValue_CS_Reference_Value = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_ADDSTRUCTURALFEATUREVALUE_CS_REFERENCE_VALUE);
	m_cS_DefaultConstructStrategy_Operation_canInstantiate_Property = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_CANINSTANTIATE_PROPERTY);
	m_cS_DefaultConstructStrategy_Operation_construct_Operation_CS_Object = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_CONSTRUCT_OPERATION_CS_OBJECT);
	m_cS_DefaultConstructStrategy_Operation_constructObject_CS_Object_Class = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_CONSTRUCTOBJECT_CS_OBJECT_CLASS);
	m_cS_DefaultConstructStrategy_Operation_generateArrayPattern_CS_Reference_Connector = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_GENERATEARRAYPATTERN_CS_REFERENCE_CONNECTOR);
	m_cS_DefaultConstructStrategy_Operation_generateRealizingClass_Interface_EString = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_GENERATEREALIZINGCLASS_INTERFACE_ESTRING);
	m_cS_DefaultConstructStrategy_Operation_generateStarPattern_CS_Reference_Connector = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_GENERATESTARPATTERN_CS_REFERENCE_CONNECTOR);
	m_cS_DefaultConstructStrategy_Operation_getCardinality_ConnectorEnd = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_GETCARDINALITY_CONNECTOREND);
	m_cS_DefaultConstructStrategy_Operation_getDefaultAssociation = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_GETDEFAULTASSOCIATION);
	m_cS_DefaultConstructStrategy_Operation_getRealizingClass_Interface = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_GETREALIZINGCLASS_INTERFACE);
	m_cS_DefaultConstructStrategy_Operation_getValuesFromConnectorEnd_CS_Reference_ConnectorEnd = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_GETVALUESFROMCONNECTOREND_CS_REFERENCE_CONNECTOREND);
	m_cS_DefaultConstructStrategy_Operation_instantiateInterface_Interface_Locus = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_INSTANTIATEINTERFACE_INTERFACE_LOCUS);
	m_cS_DefaultConstructStrategy_Operation_isArrayPattern_Connector = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_ISARRAYPATTERN_CONNECTOR);
	m_cS_DefaultConstructStrategy_Operation_isStarPattern_Connector = factory->createEOperation_in_EContainingClass(m_cS_DefaultConstructStrategy_Class, CS_DEFAULTCONSTRUCTSTRATEGY_OPERATION_ISSTARPATTERN_CONNECTOR);
	
}

void PSCSPackageImpl::createCS_DefaultRequestPropagationStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_DefaultRequestPropagationStrategy_Class = factory->createEClass_in_EPackage(package, CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_CLASS);
	
	
	m_cS_DefaultRequestPropagationStrategy_Operation_select_Reference_SemanticVisitor = factory->createEOperation_in_EContainingClass(m_cS_DefaultRequestPropagationStrategy_Class, CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_OPERATION_SELECT_REFERENCE_SEMANTICVISITOR);
	
}

void PSCSPackageImpl::createCS_DispatchOperationOfInterfaceStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_DispatchOperationOfInterfaceStrategy_Class = factory->createEClass_in_EPackage(package, CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_CLASS);
	
	
	m_cS_DispatchOperationOfInterfaceStrategy_Operation_operationsMatch_Operation_Operation = factory->createEOperation_in_EContainingClass(m_cS_DispatchOperationOfInterfaceStrategy_Class, CS_DISPATCHOPERATIONOFINTERFACESTRATEGY_OPERATION_OPERATIONSMATCH_OPERATION_OPERATION);
	
}

void PSCSPackageImpl::createCS_EventOccurrenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_EventOccurrence_Class = factory->createEClass_in_EPackage(package, CS_EVENTOCCURRENCE_CLASS);
	m_cS_EventOccurrence_Attribute_propagationInward = factory->createEAttribute_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_ATTRIBUTE_PROPAGATIONINWARD);
	
	m_cS_EventOccurrence_Attribute_interactionPoint = factory->createEReference_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_ATTRIBUTE_INTERACTIONPOINT);
	m_cS_EventOccurrence_Attribute_onPort = factory->createEReference_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_ATTRIBUTE_ONPORT);
	m_cS_EventOccurrence_Attribute_wrappedEventOccurrence = factory->createEReference_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_ATTRIBUTE_WRAPPEDEVENTOCCURRENCE);
	
	m_cS_EventOccurrence_Operation_doSend = factory->createEOperation_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_OPERATION_DOSEND);
	m_cS_EventOccurrence_Operation_getParameterValues = factory->createEOperation_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_OPERATION_GETPARAMETERVALUES);
	m_cS_EventOccurrence_Operation_match_Trigger = factory->createEOperation_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_OPERATION_MATCH_TRIGGER);
	m_cS_EventOccurrence_Operation_sendInTo_CS_Reference_Port = factory->createEOperation_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_OPERATION_SENDINTO_CS_REFERENCE_PORT);
	m_cS_EventOccurrence_Operation_sendOutTo_CS_Reference_Port = factory->createEOperation_in_EContainingClass(m_cS_EventOccurrence_Class, CS_EVENTOCCURRENCE_OPERATION_SENDOUTTO_CS_REFERENCE_PORT);
	
}

void PSCSPackageImpl::createCS_ExecutionFactoryContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_ExecutionFactory_Class = factory->createEClass_in_EPackage(package, CS_EXECUTIONFACTORY_CLASS);
	
	m_cS_ExecutionFactory_Attribute_appliedProfiles = factory->createEReference_in_EContainingClass(m_cS_ExecutionFactory_Class, CS_EXECUTIONFACTORY_ATTRIBUTE_APPLIEDPROFILES);
	
	m_cS_ExecutionFactory_Operation_getStereotypeApplication_Class_Element = factory->createEOperation_in_EContainingClass(m_cS_ExecutionFactory_Class, CS_EXECUTIONFACTORY_OPERATION_GETSTEREOTYPEAPPLICATION_CLASS_ELEMENT);
	m_cS_ExecutionFactory_Operation_getStereotypeClass_EString_EString = factory->createEOperation_in_EContainingClass(m_cS_ExecutionFactory_Class, CS_EXECUTIONFACTORY_OPERATION_GETSTEREOTYPECLASS_ESTRING_ESTRING);
	m_cS_ExecutionFactory_Operation_instantiateVisitor_Element = factory->createEOperation_in_EContainingClass(m_cS_ExecutionFactory_Class, CS_EXECUTIONFACTORY_OPERATION_INSTANTIATEVISITOR_ELEMENT);
	
}

void PSCSPackageImpl::createCS_ExecutorContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_Executor_Class = factory->createEClass_in_EPackage(package, CS_EXECUTOR_CLASS);
	
	
	m_cS_Executor_Operation_start_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_cS_Executor_Class, CS_EXECUTOR_OPERATION_START_CLASS_PARAMETERVALUE);
	
}

void PSCSPackageImpl::createCS_InstanceValueEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_InstanceValueEvaluation_Class = factory->createEClass_in_EPackage(package, CS_INSTANCEVALUEEVALUATION_CLASS);
	
	
	m_cS_InstanceValueEvaluation_Operation_evaluate = factory->createEOperation_in_EContainingClass(m_cS_InstanceValueEvaluation_Class, CS_INSTANCEVALUEEVALUATION_OPERATION_EVALUATE);
	
}

void PSCSPackageImpl::createCS_InteractionPointContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_InteractionPoint_Class = factory->createEClass_in_EPackage(package, CS_INTERACTIONPOINT_CLASS);
	
	m_cS_InteractionPoint_Attribute_definingPort = factory->createEReference_in_EContainingClass(m_cS_InteractionPoint_Class, CS_INTERACTIONPOINT_ATTRIBUTE_DEFININGPORT);
	m_cS_InteractionPoint_Attribute_owner = factory->createEReference_in_EContainingClass(m_cS_InteractionPoint_Class, CS_INTERACTIONPOINT_ATTRIBUTE_OWNER);
	
	m_cS_InteractionPoint_Operation_checkAllParents_Classifier_Classifier = factory->createEOperation_in_EContainingClass(m_cS_InteractionPoint_Class, CS_INTERACTIONPOINT_OPERATION_CHECKALLPARENTS_CLASSIFIER_CLASSIFIER);
	m_cS_InteractionPoint_Operation_dispatch_Operation = factory->createEOperation_in_EContainingClass(m_cS_InteractionPoint_Class, CS_INTERACTIONPOINT_OPERATION_DISPATCH_OPERATION);
	m_cS_InteractionPoint_Operation_send_EventOccurrence = factory->createEOperation_in_EContainingClass(m_cS_InteractionPoint_Class, CS_INTERACTIONPOINT_OPERATION_SEND_EVENTOCCURRENCE);
	m_cS_InteractionPoint_Operation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_cS_InteractionPoint_Class, CS_INTERACTIONPOINT_OPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	
}

void PSCSPackageImpl::createCS_LinkContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_Link_Class = factory->createEClass_in_EPackage(package, CS_LINK_CLASS);
	
	
	m_cS_Link_Operation_getFeature_Value = factory->createEOperation_in_EContainingClass(m_cS_Link_Class, CS_LINK_OPERATION_GETFEATURE_VALUE);
	m_cS_Link_Operation_hasValueForAFeature_Value = factory->createEOperation_in_EContainingClass(m_cS_Link_Class, CS_LINK_OPERATION_HASVALUEFORAFEATURE_VALUE);
	
}

void PSCSPackageImpl::createCS_LocusContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_Locus_Class = factory->createEClass_in_EPackage(package, CS_LOCUS_CLASS);
	
	
	m_cS_Locus_Operation_instantiate_Class = factory->createEOperation_in_EContainingClass(m_cS_Locus_Class, CS_LOCUS_OPERATION_INSTANTIATE_CLASS);
	
}

void PSCSPackageImpl::createCS_NameBased_StructuralFeatureOfInterfaceAccessStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Class = factory->createEClass_in_EPackage(package, CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS);
	
	
	m_cS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Operation_read_CS_Object_StructuralFeature = factory->createEOperation_in_EContainingClass(m_cS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Class, CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_READ_CS_OBJECT_STRUCTURALFEATURE);
	m_cS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Operation_write_CS_Object_EInt = factory->createEOperation_in_EContainingClass(m_cS_NameBased_StructuralFeatureOfInterfaceAccessStrategy_Class, CS_NAMEBASED_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_WRITE_CS_OBJECT_EINT);
	
}

void PSCSPackageImpl::createCS_ObjectContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_Object_Class = factory->createEClass_in_EPackage(package, CS_OBJECT_CLASS);
	
	
	m_cS_Object_Operation_checkAllParents_Classifier_Classifier = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_CHECKALLPARENTS_CLASSIFIER_CLASSIFIER);
	m_cS_Object_Operation_contains_Object = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_CONTAINS_OBJECT);
	m_cS_Object_Operation_directlyContains_Object = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_DIRECTLYCONTAINS_OBJECT);
	m_cS_Object_Operation_dispatchIn_Operation_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_DISPATCHIN_OPERATION_CS_INTERACTIONPOINT);
	m_cS_Object_Operation_dispatchIn_Operation_Port = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_DISPATCHIN_OPERATION_PORT);
	m_cS_Object_Operation_dispatchOut_Operation_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_DISPATCHOUT_OPERATION_CS_INTERACTIONPOINT);
	m_cS_Object_Operation_dispatchOut_Operation_Port = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_DISPATCHOUT_OPERATION_PORT);
	m_cS_Object_Operation_getDirectContainers = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_GETDIRECTCONTAINERS);
	m_cS_Object_Operation_getFeatureValue_StructuralFeature = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_GETFEATUREVALUE_STRUCTURALFEATURE);
	m_cS_Object_Operation_getLinkKind_CS_Link_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_GETLINKKIND_CS_LINK_CS_INTERACTIONPOINT);
	m_cS_Object_Operation_getLinks_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_GETLINKS_CS_INTERACTIONPOINT);
	m_cS_Object_Operation_hasValueForAFeature_Value = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_HASVALUEFORAFEATURE_VALUE);
	m_cS_Object_Operation_isDescendant_Interface_Interface = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_ISDESCENDANT_INTERFACE_INTERFACE);
	m_cS_Object_Operation_isOperationProvided_Reference_Operation = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_ISOPERATIONPROVIDED_REFERENCE_OPERATION);
	m_cS_Object_Operation_isOperationRequired_Reference_Operation = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_ISOPERATIONREQUIRED_REFERENCE_OPERATION);
	m_cS_Object_Operation_realizesInterface_Class_Interface = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_REALIZESINTERFACE_CLASS_INTERFACE);
	m_cS_Object_Operation_selectTargetsForDispatching_CS_Link_EBoolean = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_SELECTTARGETSFORDISPATCHING_CS_LINK_EBOOLEAN);
	m_cS_Object_Operation_selectTargetsForSending_CS_Link_EBoolean = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_SELECTTARGETSFORSENDING_CS_LINK_EBOOLEAN);
	m_cS_Object_Operation_sendIn_EventOccurrence_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_SENDIN_EVENTOCCURRENCE_CS_INTERACTIONPOINT);
	m_cS_Object_Operation_sendIn_EventOccurrence_Port = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_SENDIN_EVENTOCCURRENCE_PORT);
	m_cS_Object_Operation_sendOut_EventOccurrence_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_SENDOUT_EVENTOCCURRENCE_CS_INTERACTIONPOINT);
	m_cS_Object_Operation_sendOut_EventOccurrence_Port = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_SENDOUT_EVENTOCCURRENCE_PORT);
	m_cS_Object_Operation_setFeatureValue_StructuralFeature_EInt = factory->createEOperation_in_EContainingClass(m_cS_Object_Class, CS_OBJECT_OPERATION_SETFEATUREVALUE_STRUCTURALFEATURE_EINT);
	
}

void PSCSPackageImpl::createCS_OpaqueExpressionEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_OpaqueExpressionEvaluation_Class = factory->createEClass_in_EPackage(package, CS_OPAQUEEXPRESSIONEVALUATION_CLASS);
	
	
	m_cS_OpaqueExpressionEvaluation_Operation_evaluate = factory->createEOperation_in_EContainingClass(m_cS_OpaqueExpressionEvaluation_Class, CS_OPAQUEEXPRESSIONEVALUATION_OPERATION_EVALUATE);
	m_cS_OpaqueExpressionEvaluation_Operation_executeExpressionBehavior = factory->createEOperation_in_EContainingClass(m_cS_OpaqueExpressionEvaluation_Class, CS_OPAQUEEXPRESSIONEVALUATION_OPERATION_EXECUTEEXPRESSIONBEHAVIOR);
	
}

void PSCSPackageImpl::createCS_ReadExtentActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_ReadExtentActionActivation_Class = factory->createEClass_in_EPackage(package, CS_READEXTENTACTIONACTIVATION_CLASS);
	
	
	m_cS_ReadExtentActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_ReadExtentActionActivation_Class, CS_READEXTENTACTIONACTIVATION_OPERATION_DOACTION);
	
}

void PSCSPackageImpl::createCS_ReadSelfActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_ReadSelfActionActivation_Class = factory->createEClass_in_EPackage(package, CS_READSELFACTIONACTIVATION_CLASS);
	
	
	m_cS_ReadSelfActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_ReadSelfActionActivation_Class, CS_READSELFACTIONACTIVATION_OPERATION_DOACTION);
	
}

void PSCSPackageImpl::createCS_ReferenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_Reference_Class = factory->createEClass_in_EPackage(package, CS_REFERENCE_CLASS);
	
	m_cS_Reference_Attribute_compositeReferent = factory->createEReference_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_ATTRIBUTE_COMPOSITEREFERENT);
	
	m_cS_Reference_Operation_copy = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_COPY);
	m_cS_Reference_Operation_dispatchIn_Operation_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_DISPATCHIN_OPERATION_CS_INTERACTIONPOINT);
	m_cS_Reference_Operation_dispatchIn_Operation_Port = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_DISPATCHIN_OPERATION_PORT);
	m_cS_Reference_Operation_dispatchOut_Operation_Port = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_DISPATCHOUT_OPERATION_PORT);
	m_cS_Reference_Operation_dispatchOut_Operation_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_DISPATCHOUT_OPERATION_CS_INTERACTIONPOINT);
	m_cS_Reference_Operation_sendIn_EventOccurrence_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_SENDIN_EVENTOCCURRENCE_CS_INTERACTIONPOINT);
	m_cS_Reference_Operation_sendIn_EventOccurrence_Port = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_SENDIN_EVENTOCCURRENCE_PORT);
	m_cS_Reference_Operation_sendOut_EventOccurrence_Port = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_SENDOUT_EVENTOCCURRENCE_PORT);
	m_cS_Reference_Operation_sendOut_EventOccurrence_CS_InteractionPoint = factory->createEOperation_in_EContainingClass(m_cS_Reference_Class, CS_REFERENCE_OPERATION_SENDOUT_EVENTOCCURRENCE_CS_INTERACTIONPOINT);
	
}

void PSCSPackageImpl::createCS_RemoveStructuralFeatureValueActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_RemoveStructuralFeatureValueActionActivation_Class = factory->createEClass_in_EPackage(package, CS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_CLASS);
	
	
	m_cS_RemoveStructuralFeatureValueActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_RemoveStructuralFeatureValueActionActivation_Class, CS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_OPERATION_DOACTION);
	m_cS_RemoveStructuralFeatureValueActionActivation_Operation_getLinksToDestroy_StructuredValue_Value = factory->createEOperation_in_EContainingClass(m_cS_RemoveStructuralFeatureValueActionActivation_Class, CS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_OPERATION_GETLINKSTODESTROY_STRUCTUREDVALUE_VALUE);
	m_cS_RemoveStructuralFeatureValueActionActivation_Operation_getPotentialLinkEnds_CS_Reference_StructuralFeature = factory->createEOperation_in_EContainingClass(m_cS_RemoveStructuralFeatureValueActionActivation_Class, CS_REMOVESTRUCTURALFEATUREVALUEACTIONACTIVATION_OPERATION_GETPOTENTIALLINKENDS_CS_REFERENCE_STRUCTURALFEATURE);
	
}

void PSCSPackageImpl::createCS_RequestPropagationStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_RequestPropagationStrategy_Class = factory->createEClass_in_EPackage(package, CS_REQUESTPROPAGATIONSTRATEGY_CLASS);
	
	
	m_cS_RequestPropagationStrategy_Operation_getName = factory->createEOperation_in_EContainingClass(m_cS_RequestPropagationStrategy_Class, CS_REQUESTPROPAGATIONSTRATEGY_OPERATION_GETNAME);
	m_cS_RequestPropagationStrategy_Operation_select_Reference_SemanticVisitor = factory->createEOperation_in_EContainingClass(m_cS_RequestPropagationStrategy_Class, CS_REQUESTPROPAGATIONSTRATEGY_OPERATION_SELECT_REFERENCE_SEMANTICVISITOR);
	
}

void PSCSPackageImpl::createCS_SendSignalActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_SendSignalActionActivation_Class = factory->createEClass_in_EPackage(package, CS_SENDSIGNALACTIONACTIVATION_CLASS);
	
	
	m_cS_SendSignalActionActivation_Operation_doAction = factory->createEOperation_in_EContainingClass(m_cS_SendSignalActionActivation_Class, CS_SENDSIGNALACTIONACTIVATION_OPERATION_DOACTION);
	
}

void PSCSPackageImpl::createCS_StructuralFeatureOfInterfaceAccessStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_StructuralFeatureOfInterfaceAccessStrategy_Class = factory->createEClass_in_EPackage(package, CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_CLASS);
	
	
	m_cS_StructuralFeatureOfInterfaceAccessStrategy_Operation_getName = factory->createEOperation_in_EContainingClass(m_cS_StructuralFeatureOfInterfaceAccessStrategy_Class, CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_GETNAME);
	m_cS_StructuralFeatureOfInterfaceAccessStrategy_Operation_read_CS_Object_StructuralFeature = factory->createEOperation_in_EContainingClass(m_cS_StructuralFeatureOfInterfaceAccessStrategy_Class, CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_READ_CS_OBJECT_STRUCTURALFEATURE);
	m_cS_StructuralFeatureOfInterfaceAccessStrategy_Operation_write_CS_Object_Integer = factory->createEOperation_in_EContainingClass(m_cS_StructuralFeatureOfInterfaceAccessStrategy_Class, CS_STRUCTURALFEATUREOFINTERFACEACCESSSTRATEGY_OPERATION_WRITE_CS_OBJECT_INTEGER);
	
}

void PSCSPackageImpl::createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_cS_LinkKind_Class = factory->createEEnum_in_EPackage(package, CS_LINKKIND_CLASS);
	
}