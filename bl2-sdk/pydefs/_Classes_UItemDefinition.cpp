#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemDefinition(py::object m)
{
    py::class_< UItemDefinition,  UWillowInventoryDefinition   >(m, "UItemDefinition")
        .def_readwrite("VfTable_IIBehaviorProvider", &UItemDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("VfTable_IIConstructObject", &UItemDefinition::VfTable_IIConstructObject)
        .def_readwrite("DroppedImpact", &UItemDefinition::DroppedImpact)
        .def_readwrite("UseFailureCharacterMessage", &UItemDefinition::UseFailureCharacterMessage)
        .def_readwrite("ItemName", &UItemDefinition::ItemName)
        .def_readwrite("TitleList", &UItemDefinition::TitleList)
        .def_readwrite("PrefixList", &UItemDefinition::PrefixList)
        .def_readwrite("NonCompositeStaticMesh", &UItemDefinition::NonCompositeStaticMesh)
        .def_readwrite("NonCompositeSkeletalMesh", &UItemDefinition::NonCompositeSkeletalMesh)
        .def_readwrite("OverrideMaterial", &UItemDefinition::OverrideMaterial)
        .def_readwrite("GestaltMesh", &UItemDefinition::GestaltMesh)
        .def_readwrite("AlphaParts", &UItemDefinition::AlphaParts)
        .def_readwrite("BetaParts", &UItemDefinition::BetaParts)
        .def_readwrite("GammaParts", &UItemDefinition::GammaParts)
        .def_readwrite("DeltaParts", &UItemDefinition::DeltaParts)
        .def_readwrite("EpsilonParts", &UItemDefinition::EpsilonParts)
        .def_readwrite("ZetaParts", &UItemDefinition::ZetaParts)
        .def_readwrite("EtaParts", &UItemDefinition::EtaParts)
        .def_readwrite("ThetaParts", &UItemDefinition::ThetaParts)
        .def_readwrite("MaterialParts", &UItemDefinition::MaterialParts)
        .def_readwrite("BehaviorProviderDefinition", &UItemDefinition::BehaviorProviderDefinition)
        .def_readwrite("Behaviors", &UItemDefinition::Behaviors)
        .def_readwrite("ExternalAttributeEffects", &UItemDefinition::ExternalAttributeEffects)
        .def_readwrite("ItemAttributeEffects", &UItemDefinition::ItemAttributeEffects)
        .def_readwrite("ItemCardAttributes", &UItemDefinition::ItemCardAttributes)
        .def_readwrite("CustomPresentations", &UItemDefinition::CustomPresentations)
        .def_readwrite("RequiredPlayerClass", &UItemDefinition::RequiredPlayerClass)
        .def_readwrite("PickupIconOverride", &UItemDefinition::PickupIconOverride)
        .def("StaticClass", &UItemDefinition::StaticClass, py::return_value_policy::reference)
        .def("DisplayTitleAtEnd", &UItemDefinition::DisplayTitleAtEnd)
        .def("GetManufacturerOverrideOrDefault", &UItemDefinition::GetManufacturerOverrideOrDefault, py::return_value_policy::reference)
        .def("eventGetEquipmentLocation", &UItemDefinition::eventGetEquipmentLocation)
        .def("PlayerClassRequirementMet", &UItemDefinition::PlayerClassRequirementMet)
        .def("GetRequiredPlayerClass", &UItemDefinition::GetRequiredPlayerClass, py::return_value_policy::reference)
        .def("OnPickupDisassociated", &UItemDefinition::OnPickupDisassociated)
        .def("OnPickupAssociated", &UItemDefinition::OnPickupAssociated)
        .def("OnCreate", &UItemDefinition::OnCreate)
        .def("SetBehaviorProviderDefinition", &UItemDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UItemDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}