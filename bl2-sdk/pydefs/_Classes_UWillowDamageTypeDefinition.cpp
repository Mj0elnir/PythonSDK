#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDamageTypeDefinition(py::object m)
{
    py::class_< UWillowDamageTypeDefinition,  UDamageTypeDefinition   >(m, "UWillowDamageTypeDefinition")
        .def_readwrite("FleshDamageModifier", &UWillowDamageTypeDefinition::FleshDamageModifier)
        .def_readwrite("ArmorDamageModifier", &UWillowDamageTypeDefinition::ArmorDamageModifier)
        .def_readwrite("ShieldDamageModifier", &UWillowDamageTypeDefinition::ShieldDamageModifier)
        .def_readwrite("CharacterDamageTypeModifierAttribute", &UWillowDamageTypeDefinition::CharacterDamageTypeModifierAttribute)
        .def_readwrite("OnProjectileSpawn", &UWillowDamageTypeDefinition::OnProjectileSpawn)
        .def_readwrite("StatusEffect", &UWillowDamageTypeDefinition::StatusEffect)
        .def_readwrite("DamageColor", &UWillowDamageTypeDefinition::DamageColor)
        .def_readwrite("HUDDamageColor", &UWillowDamageTypeDefinition::HUDDamageColor)
        .def_readwrite("DamageType", &UWillowDamageTypeDefinition::DamageType)
        .def_readwrite("UpwardMomentumScale", &UWillowDamageTypeDefinition::UpwardMomentumScale)
        .def_readwrite("RigidBodyMomentumScale", &UWillowDamageTypeDefinition::RigidBodyMomentumScale)
        .def_readwrite("FleshMomentumModifier", &UWillowDamageTypeDefinition::FleshMomentumModifier)
        .def_readwrite("ArmorMomentumModifier", &UWillowDamageTypeDefinition::ArmorMomentumModifier)
        .def_readwrite("ShieldMomentumModifier", &UWillowDamageTypeDefinition::ShieldMomentumModifier)
        .def_readwrite("WeaponCardPresentations", &UWillowDamageTypeDefinition::WeaponCardPresentations)
        .def_readwrite("MaxDamageRadius", &UWillowDamageTypeDefinition::MaxDamageRadius)
        .def_readwrite("MinDamageRadius", &UWillowDamageTypeDefinition::MinDamageRadius)
        .def_readwrite("MinDamagePercent", &UWillowDamageTypeDefinition::MinDamagePercent)
        .def_readwrite("HardFlinchPercent", &UWillowDamageTypeDefinition::HardFlinchPercent)
        .def_readwrite("DamageDealtStatId", &UWillowDamageTypeDefinition::DamageDealtStatId)
        .def_readwrite("DamageLanguageId", &UWillowDamageTypeDefinition::DamageLanguageId)
        .def("StaticClass", &UWillowDamageTypeDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetDamageTypeModifiers", &UWillowDamageTypeDefinition::GetDamageTypeModifiers)
        .def("eventDisplayRecentDamageForPlayer", &UWillowDamageTypeDefinition::eventDisplayRecentDamageForPlayer)
        .def("HasPlayerRecentDamageFlags", &UWillowDamageTypeDefinition::HasPlayerRecentDamageFlags)
        .def("CalcRadiusDamageScale", &UWillowDamageTypeDefinition::CalcRadiusDamageScale)
        .def("GetMinDamagePercent", &UWillowDamageTypeDefinition::GetMinDamagePercent)
        .def("GetMinDamageRadius", &UWillowDamageTypeDefinition::GetMinDamageRadius)
        .def("GetMaxDamageRadius", &UWillowDamageTypeDefinition::GetMaxDamageRadius)
        .def("GetPawnDamageTypeModifier", &UWillowDamageTypeDefinition::GetPawnDamageTypeModifier)
        .def("GetSurfaceDamageTypeModifier", &UWillowDamageTypeDefinition::GetSurfaceDamageTypeModifier)
        .def("GetSurfaceMomentumTypeModifier", &UWillowDamageTypeDefinition::GetSurfaceMomentumTypeModifier)
        .def("GetRigidBodyMomentumScale", &UWillowDamageTypeDefinition::GetRigidBodyMomentumScale)
        .def("GetUpwardMomentumScale", &UWillowDamageTypeDefinition::GetUpwardMomentumScale)
        .def("ApplyUpwardMomentum", &UWillowDamageTypeDefinition::ApplyUpwardMomentum)
          ;
}