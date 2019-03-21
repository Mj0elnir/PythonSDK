#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPerchDefinition(py::object m)
{
    py::class_< UPerchDefinition,  UGBXDefinition   >(m, "UPerchDefinition")
        .def_readwrite("VfTable_IIBodyInfoProvider", &UPerchDefinition::VfTable_IIBodyInfoProvider)
        .def_readwrite("VfTable_IIBehaviorProvider", &UPerchDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("VfTable_IIAnimProvider", &UPerchDefinition::VfTable_IIAnimProvider)
        .def_readwrite("LoopTime", &UPerchDefinition::LoopTime)
        .def_readwrite("CooldownTime", &UPerchDefinition::CooldownTime)
        .def_readwrite("AnimMap", &UPerchDefinition::AnimMap)
        .def_readwrite("CanUseExpression", &UPerchDefinition::CanUseExpression)
        .def_readwrite("LerpTime", &UPerchDefinition::LerpTime)
        .def_readwrite("AdditionalOffsetScale", &UPerchDefinition::AdditionalOffsetScale)
        .def_readwrite("PlayerInRangeCheckFrequency", &UPerchDefinition::PlayerInRangeCheckFrequency)
        .def_readwrite("PlayerInRangeRadius", &UPerchDefinition::PlayerInRangeRadius)
        .def_readwrite("PlayerInRangeCooldown", &UPerchDefinition::PlayerInRangeCooldown)
        .def_readwrite("CombatProjectile", &UPerchDefinition::CombatProjectile)
        .def_readwrite("BodyComposition", &UPerchDefinition::BodyComposition)
        .def_readwrite("BehaviorProviderDefinition", &UPerchDefinition::BehaviorProviderDefinition)
        .def_readwrite("LightingBoundsScale", &UPerchDefinition::LightingBoundsScale)
        .def_readwrite("NumVolumeVisibilitySamples", &UPerchDefinition::NumVolumeVisibilitySamples)
        .def_readwrite("ModShadowFadeoutExponent", &UPerchDefinition::ModShadowFadeoutExponent)
        .def_readwrite("ModShadowFadeoutTime", &UPerchDefinition::ModShadowFadeoutTime)
        .def_readwrite("AmbientGlow", &UPerchDefinition::AmbientGlow)
        .def_readwrite("AmbientShadowSourceDirection", &UPerchDefinition::AmbientShadowSourceDirection)
        .def_readwrite("AmbientShadowColor", &UPerchDefinition::AmbientShadowColor)
        .def_readwrite("DominantShadowTransitionStartDistance", &UPerchDefinition::DominantShadowTransitionStartDistance)
        .def_readwrite("DominantShadowTransitionEndDistance", &UPerchDefinition::DominantShadowTransitionEndDistance)
        .def("StaticClass", &UPerchDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnPlayerInRange", &UPerchDefinition::OnPlayerInRange)
        .def("OnFinished", &UPerchDefinition::OnFinished)
        .def("OnStopAnim", &UPerchDefinition::OnStopAnim)
        .def("OnIdleAnim", &UPerchDefinition::OnIdleAnim)
        .def("OnStartAnim", &UPerchDefinition::OnStartAnim)
        .def("SetBehaviorProviderDefinition", &UPerchDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UPerchDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
        .def("GetAnims", &UPerchDefinition::GetAnims)
        .def("CanUse", &UPerchDefinition::CanUse)
        .def("GetPerchData", &UPerchDefinition::GetPerchData)
        .def("Supports", &UPerchDefinition::Supports)
          ;
}