#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryDefinition(py::object m)
{
    py::class_< UWillowInventoryDefinition,  UGBXDefinition   >(m, "UWillowInventoryDefinition")
        .def_readwrite("InventoryClass", &UWillowInventoryDefinition::InventoryClass)
        .def_readwrite("PlayerDroppability", &UWillowInventoryDefinition::PlayerDroppability)
        .def_readwrite("FormOfCurrency", &UWillowInventoryDefinition::FormOfCurrency)
        .def_readwrite("OnUseConstraintsMode", &UWillowInventoryDefinition::OnUseConstraintsMode)
        .def_readwrite("AttributeSlotEffectMode", &UWillowInventoryDefinition::AttributeSlotEffectMode)
        .def_readwrite("PickupLifeSpan", &UWillowInventoryDefinition::PickupLifeSpan)
        .def_readwrite("PickupFlagScale", &UWillowInventoryDefinition::PickupFlagScale)
        .def_readwrite("PickupFlagIcon", &UWillowInventoryDefinition::PickupFlagIcon)
        .def_readwrite("PickupFlagOffset", &UWillowInventoryDefinition::PickupFlagOffset)
        .def_readwrite("Torque", &UWillowInventoryDefinition::Torque)
        .def_readwrite("ThirdPersonMeshScale", &UWillowInventoryDefinition::ThirdPersonMeshScale)
        .def_readwrite("PickupSounds", &UWillowInventoryDefinition::PickupSounds)
        .def_readwrite("PickupAndEquipSounds", &UWillowInventoryDefinition::PickupAndEquipSounds)
        .def_readwrite("MaterialClass", &UWillowInventoryDefinition::MaterialClass)
        .def_readwrite("PhysicsAsset", &UWillowInventoryDefinition::PhysicsAsset)
        .def_readwrite("PickupMessage", &UWillowInventoryDefinition::PickupMessage)
        .def_readwrite("UseFailureLevelMessage", &UWillowInventoryDefinition::UseFailureLevelMessage)
        .def_readwrite("UseFailureConstraintsMessage", &UWillowInventoryDefinition::UseFailureConstraintsMessage)
        .def_readwrite("NoManufacturerName", &UWillowInventoryDefinition::NoManufacturerName)
        .def_readwrite("BaseRarity", &UWillowInventoryDefinition::BaseRarity)
        .def_readwrite("MonetaryValue", &UWillowInventoryDefinition::MonetaryValue)
        .def_readwrite("BaseMonetaryValueModifier", &UWillowInventoryDefinition::BaseMonetaryValueModifier)
        .def_readwrite("PlayerUseLevelBonus", &UWillowInventoryDefinition::PlayerUseLevelBonus)
        .def_readwrite("OnUseConstraints", &UWillowInventoryDefinition::OnUseConstraints)
        .def_readwrite("UIStatList", &UWillowInventoryDefinition::UIStatList)
        .def_readwrite("UIMeshRotation", &UWillowInventoryDefinition::UIMeshRotation)
        .def_readwrite("Presentation", &UWillowInventoryDefinition::Presentation)
        .def_readwrite("CalloutDefinition", &UWillowInventoryDefinition::CalloutDefinition)
        .def_readwrite("PickedUpStatID", &UWillowInventoryDefinition::PickedUpStatID)
        .def_readwrite("PurchasedStatID", &UWillowInventoryDefinition::PurchasedStatID)
        .def_readwrite("FocusRadius", &UWillowInventoryDefinition::FocusRadius)
        .def_readwrite("FocusOffset", &UWillowInventoryDefinition::FocusOffset)
        .def_readwrite("AttributeSlotEffectSkillDuration", &UWillowInventoryDefinition::AttributeSlotEffectSkillDuration)
        .def_readwrite("AttributeSlotBaseGrade", &UWillowInventoryDefinition::AttributeSlotBaseGrade)
        .def_readwrite("AttributeSlotMaxActivated", &UWillowInventoryDefinition::AttributeSlotMaxActivated)
        .def_readwrite("AttributeSlotEffects", &UWillowInventoryDefinition::AttributeSlotEffects)
        .def_readwrite("AttributeSlotUpgrades", &UWillowInventoryDefinition::AttributeSlotUpgrades)
        .def_readwrite("LootBeamColorOverride", &UWillowInventoryDefinition::LootBeamColorOverride)
        .def("StaticClass", &UWillowInventoryDefinition::StaticClass, py::return_value_policy::reference)
        .def("CanPickupInBulk", &UWillowInventoryDefinition::CanPickupInBulk)
        .def("ShouldPlayerAutomaticallyPickup", &UWillowInventoryDefinition::ShouldPlayerAutomaticallyPickup)
        .def("GetAttributeSlotMaxActivated", &UWillowInventoryDefinition::GetAttributeSlotMaxActivated)
        .def("GetLocalizedInventoryName", &UWillowInventoryDefinition::GetLocalizedInventoryName)
        .def("GetInventorySpaceRequirement", &UWillowInventoryDefinition::GetInventorySpaceRequirement)
        .def("GetBaseRarityLevel", &UWillowInventoryDefinition::GetBaseRarityLevel)
          ;
}