#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowMind(py::module &m)
{
    py::class_< AWillowMind,  AGearboxMind   >(m, "AWillowMind")
		.def_static("StaticClass", &AWillowMind::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IISeeTargetable", &AWillowMind::VfTable_IISeeTargetable)
        .def_readwrite("VfTable_IIControllerLocator", &AWillowMind::VfTable_IIControllerLocator)
        .def_readwrite("VfTable_IIConstructObject", &AWillowMind::VfTable_IIConstructObject)
        .def_readwrite("AIClass", &AWillowMind::AIClass)
        .def_readwrite("MyWillowPawn", &AWillowMind::MyWillowPawn)
        .def_readwrite("AIDefOverride", &AWillowMind::AIDefOverride)
        .def_readwrite("SpawnParent", &AWillowMind::SpawnParent)
        .def_readwrite("SpawnChildren", &AWillowMind::SpawnChildren)
        .def_readwrite("TotalSpawnedChildren", &AWillowMind::TotalSpawnedChildren)
        .def_readwrite("DirectionHint", &AWillowMind::DirectionHint)
        .def_readwrite("WillowNav", &AWillowMind::WillowNav)
        .def_readwrite("DistanceToGoal", &AWillowMind::DistanceToGoal)
        .def_readwrite("LastPatrolNode", &AWillowMind::LastPatrolNode)
        .def_readwrite("LastScriptedNode", &AWillowMind::LastScriptedNode)
        .def_readwrite("ScriptedStance", &AWillowMind::ScriptedStance)
        .def_readwrite("ScriptedFocusStyle", &AWillowMind::ScriptedFocusStyle)
        .def_readwrite("WeaponFireMode", &AWillowMind::WeaponFireMode)
        .def_readwrite("ScriptedAction", &AWillowMind::ScriptedAction)
        .def_readwrite("LastUsedTime", &AWillowMind::LastUsedTime)
        .def_readwrite("LookAtPlayer", &AWillowMind::LookAtPlayer)
        .def_readwrite("FollowActor", &AWillowMind::FollowActor)
        .def_readwrite("FollowMinDist", &AWillowMind::FollowMinDist)
        .def_readwrite("FollowMaxDist", &AWillowMind::FollowMaxDist)
        .def_readwrite("FollowComponent", &AWillowMind::FollowComponent)
        .def_readwrite("SightFireCone", &AWillowMind::SightFireCone)
        .def_readwrite("LastWeaponFireTime", &AWillowMind::LastWeaponFireTime)
        .def_readwrite("WeaponBurstEndTime", &AWillowMind::WeaponBurstEndTime)
        .def_readwrite("NextAvailableFireTime", &AWillowMind::NextAvailableFireTime)
        .def_readwrite("PatrolPerch", &AWillowMind::PatrolPerch)
        .def_readwrite("CombatPerch", &AWillowMind::CombatPerch)
        .def_readwrite("RotationRateModifier", &AWillowMind::RotationRateModifier)
        .def_readwrite("RotationRateModifierBaseValue", &AWillowMind::RotationRateModifierBaseValue)
        .def_readwrite("RotationRateModifierModifierStack", &AWillowMind::RotationRateModifierModifierStack)
        .def_readwrite("AvoidanceModifier", &AWillowMind::AvoidanceModifier)
        .def_readwrite("ProvokedLocation", &AWillowMind::ProvokedLocation)
        .def_readwrite("InteractionProxy", &AWillowMind::InteractionProxy)
        .def_readwrite("SpawnedHelperActor", &AWillowMind::SpawnedHelperActor)
        .def_readwrite("SightViewCone", &AWillowMind::SightViewCone)
        .def_readwrite("MinAggroTimeToConsiderAwareOfTarget", &AWillowMind::MinAggroTimeToConsiderAwareOfTarget)
        .def("eventNotifyFallingHitWall", &AWillowMind::eventNotifyFallingHitWall)
        .def("PassInteractionProxyEventsToKismet", &AWillowMind::PassInteractionProxyEventsToKismet)
        .def("ProcessTraceTouch", &AWillowMind::ProcessTraceTouch)
        .def("eventTraceTouch", &AWillowMind::eventTraceTouch)
        .def("IsTooFarFromHome", &AWillowMind::IsTooFarFromHome)
        .def("GetViewLocation", &AWillowMind::GetViewLocation)
        .def("GetWorldBody", &AWillowMind::GetWorldBody, py::return_value_policy::reference)
        .def("GetAWillowMind", &AWillowMind::GetAWillowMind, py::return_value_policy::reference)
        .def("GetAWillowPlayerController", &AWillowMind::GetAWillowPlayerController, py::return_value_policy::reference)
        .def("GetABaseController", &AWillowMind::GetABaseController, py::return_value_policy::reference)
        .def("StopRotationAudio", &AWillowMind::StopRotationAudio)
        .def("StartRotationAudio", &AWillowMind::StartRotationAudio)
        .def("SetWantsRotationAudio", &AWillowMind::SetWantsRotationAudio)
        .def("GetWantsRotationAudio", &AWillowMind::GetWantsRotationAudio)
        .def("ParentIsScripted", &AWillowMind::ParentIsScripted)
        .def("GetNumSpawnChildren", &AWillowMind::GetNumSpawnChildren)
        .def("ParentDistToTarget", &AWillowMind::ParentDistToTarget)
        .def("InGodMode", &AWillowMind::InGodMode)
        .def("SetAIDemigod", &AWillowMind::SetAIDemigod)
        .def("GetAIDemigod", &AWillowMind::GetAIDemigod)
        .def("SetAIGod", &AWillowMind::SetAIGod)
        .def("GetAIGod", &AWillowMind::GetAIGod)
        .def("ActivateEventRule", &AWillowMind::ActivateEventRule)
        .def("SetOverrideAIDef", &AWillowMind::SetOverrideAIDef)
        .def("InitSequence", &AWillowMind::InitSequence)
        .def("GetAIDefinition", &AWillowMind::GetAIDefinition, py::return_value_policy::reference)
        .def("GetAIParent", &AWillowMind::GetAIParent, py::return_value_policy::reference)
        .def("CanTickAI", &AWillowMind::CanTickAI)
        .def("GetReplicatedInstanceDataState", &AWillowMind::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &AWillowMind::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &AWillowMind::DestroyOwnedInstanceData)
        .def("KillHelperActor", &AWillowMind::KillHelperActor)
        .def("eventRemoveInstanceDataObject", &AWillowMind::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &AWillowMind::eventRemoveInstanceData)
        .def("eventGetInstanceData", &AWillowMind::eventGetInstanceData)
        .def("SetInstanceData", &AWillowMind::SetInstanceData)
        .def("GetInstanceDataPawn", &AWillowMind::GetInstanceDataPawn, py::return_value_policy::reference)
        .def("Behavior_GetSkillInstigatorController", &AWillowMind::Behavior_GetSkillInstigatorController, py::return_value_policy::reference)
        .def("Behavior_UpgradeSkill", &AWillowMind::Behavior_UpgradeSkill)
        .def("Behavior_DeactivateSkill", &AWillowMind::Behavior_DeactivateSkill)
        .def("Behavior_ActivateSkill", &AWillowMind::Behavior_ActivateSkill)
        .def("SetFlag", &AWillowMind::SetFlag)
        .def("NotifyTakeHit", &AWillowMind::NotifyTakeHit)
        .def("GetRallyPoint", &AWillowMind::GetRallyPoint)
        .def("GetPopOpDen", &AWillowMind::GetPopOpDen, py::return_value_policy::reference)
        .def("GetPerchLocation", &AWillowMind::GetPerchLocation)
        .def("CheckForPerch", &AWillowMind::CheckForPerch)
        .def("eventTakeDamage", &AWillowMind::eventTakeDamage)
        .def("eventReceiveRunOverWarning", &AWillowMind::eventReceiveRunOverWarning)
        .def("GetDirectionHint", &AWillowMind::GetDirectionHint)
        .def("ExitVehicle", &AWillowMind::ExitVehicle)
        .def("EnterVehicle", &AWillowMind::EnterVehicle)
        .def("TargetIsFriendly", &AWillowMind::TargetIsFriendly)
        .def("AddTargetable", &AWillowMind::AddTargetable)
        .def("IsAwareOfTarget", &AWillowMind::IsAwareOfTarget)
        .def("NotifyAttackedBy", &AWillowMind::NotifyAttackedBy)
        .def("OnAICombatVolume", &AWillowMind::OnAICombatVolume)
        .def("OnAILookAt", &AWillowMind::OnAILookAt)
        .def("OnAIProvoke", &AWillowMind::OnAIProvoke)
        .def("OnAIScriptedFollow", &AWillowMind::OnAIScriptedFollow)
        .def("OnAIScriptedDeath", &AWillowMind::OnAIScriptedDeath)
        .def("StopScriptedAnim", &AWillowMind::StopScriptedAnim)
        .def("ScriptedAnimEnded", &AWillowMind::ScriptedAnimEnded)
        .def("OnAIScriptedAnim", &AWillowMind::OnAIScriptedAnim)
        .def("OnAIScriptedHold", &AWillowMind::OnAIScriptedHold)
        .def("OnAIScripted", &AWillowMind::OnAIScripted)
        .def("ClearScriptedMove", &AWillowMind::ClearScriptedMove)
        .def("OnAIAbortMoveToActor", &AWillowMind::OnAIAbortMoveToActor)
        .def("ForceMoveToActor", &AWillowMind::ForceMoveToActor)
        .def("IsFlying", &AWillowMind::IsFlying)
        .def("WantsToSprint", &AWillowMind::WantsToSprint)
        .def("SetWantsToSprint", &AWillowMind::SetWantsToSprint)
        .def("ShouldLookAtPlayer", &AWillowMind::ShouldLookAtPlayer)
        .def("IsInScriptedMovement", &AWillowMind::IsInScriptedMovement)
        .def("InitNavigationHandle", &AWillowMind::InitNavigationHandle)
        .def("CanHoldWeapon", &AWillowMind::CanHoldWeapon)
        .def("SetWeaponsRestricted", &AWillowMind::SetWeaponsRestricted)
        .def("GetTargetLeadOffset", &AWillowMind::GetTargetLeadOffset)
        .def("ShouldPauseFiring", &AWillowMind::ShouldPauseFiring)
        .def("ShouldStopFiring", &AWillowMind::ShouldStopFiring)
        .def("CanFireMyWeapon", &AWillowMind::CanFireMyWeapon)
        .def("TickWeaponFire", &AWillowMind::TickWeaponFire)
        .def("eventGetWeaponBurstLength", &AWillowMind::eventGetWeaponBurstLength)
        .def("eventGetWeaponFireDelay", &AWillowMind::eventGetWeaponFireDelay)
        .def("eventGetWeaponSpeed", &AWillowMind::eventGetWeaponSpeed)
        .def("eventStopFiringWeapon", &AWillowMind::eventStopFiringWeapon)
        .def("eventStartFiringWeapon", &AWillowMind::eventStartFiringWeapon)
        .def("GetAdjustedAimFor", &AWillowMind::GetAdjustedAimFor)
        .def("RecalculateAttributeInitializedState", &AWillowMind::RecalculateAttributeInitializedState)
        .def("ApplyCharacterClassDefaults", &AWillowMind::ApplyCharacterClassDefaults)
        .def("GetClassDefinition", &AWillowMind::GetClassDefinition, py::return_value_policy::reference)
        .def("CleanSpawnFamily", &AWillowMind::CleanSpawnFamily)
        .def("PawnDied", &AWillowMind::PawnDied)
        .def("eventUnPossess", &AWillowMind::eventUnPossess)
        .def("InitializeCharacterClass", &AWillowMind::InitializeCharacterClass)
        .def("eventPossess", &AWillowMind::eventPossess)
        .def("OnTeleport", &AWillowMind::OnTeleport)
        .def("GetAllegiance", &AWillowMind::GetAllegiance, py::return_value_policy::reference)
        .def("GetWorldPawn", &AWillowMind::GetWorldPawn, py::return_value_policy::reference)
        .def("GetActor", &AWillowMind::GetActor, py::return_value_policy::reference)
        .def("eventDestroyed", &AWillowMind::eventDestroyed)
          ;
}