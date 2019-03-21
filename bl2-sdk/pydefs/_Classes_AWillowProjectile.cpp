#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowProjectile(py::object m)
{
    py::class_< AWillowProjectile,  AProjectile   >(m, "AWillowProjectile")
        .def_readwrite("VfTable_IICounterBehavior", &AWillowProjectile::VfTable_IICounterBehavior)
        .def_readwrite("VfTable_IITimerBehavior", &AWillowProjectile::VfTable_IITimerBehavior)
        .def_readwrite("VfTable_IIKilledBehavior", &AWillowProjectile::VfTable_IIKilledBehavior)
        .def_readwrite("VfTable_IIProjectileBehavior", &AWillowProjectile::VfTable_IIProjectileBehavior)
        .def_readwrite("VfTable_IITargetable", &AWillowProjectile::VfTable_IITargetable)
        .def_readwrite("VfTable_IIInstanceData", &AWillowProjectile::VfTable_IIInstanceData)
        .def_readwrite("VfTable_IIBalancedActor", &AWillowProjectile::VfTable_IIBalancedActor)
        .def_readwrite("VfTable_IIAttachableActor", &AWillowProjectile::VfTable_IIAttachableActor)
        .def_readwrite("VfTable_IIBodyCompositionInstance", &AWillowProjectile::VfTable_IIBodyCompositionInstance)
        .def_readwrite("VfTable_IIBehaviorConsumer", &AWillowProjectile::VfTable_IIBehaviorConsumer)
        .def_readwrite("VfTable_IIDrunkenProjectile", &AWillowProjectile::VfTable_IIDrunkenProjectile)
        .def_readwrite("VfTable_IIGearLikenessConsumer", &AWillowProjectile::VfTable_IIGearLikenessConsumer)
        .def_readwrite("VfTable_IIDynamicObstacle", &AWillowProjectile::VfTable_IIDynamicObstacle)
        .def_readwrite("Definition", &AWillowProjectile::Definition)
        .def_readwrite("MyDamageTypeDefinition", &AWillowProjectile::MyDamageTypeDefinition)
        .def_readwrite("MyExplosionDefinition", &AWillowProjectile::MyExplosionDefinition)
        .def_readwrite("GearLikenessActor", &AWillowProjectile::GearLikenessActor)
        .def_readwrite("Allegiance", &AWillowProjectile::Allegiance)
        .def_readwrite("AllegianceParent", &AWillowProjectile::AllegianceParent)
        .def_readonly("UnknownData00", &AWillowProjectile::UnknownData00)
        .def_readwrite("AllegianceChildren", &AWillowProjectile::AllegianceChildren)
        .def_readwrite("LastRBImpactEffectTime", &AWillowProjectile::LastRBImpactEffectTime)
        .def_readwrite("MyMeshClone", &AWillowProjectile::MyMeshClone)
        .def_readwrite("ProjectileTimers", &AWillowProjectile::ProjectileTimers)
        .def_readwrite("ProjectileCounters", &AWillowProjectile::ProjectileCounters)
        .def_readwrite("ActiveBehaviorSets", &AWillowProjectile::ActiveBehaviorSets)
        .def_readwrite("AttachmentNormal", &AWillowProjectile::AttachmentNormal)
        .def_readwrite("ProjEffects", &AWillowProjectile::ProjEffects)
        .def_readwrite("OverchargedEffect", &AWillowProjectile::OverchargedEffect)
        .def_readwrite("EffectiveInFlightEffects", &AWillowProjectile::EffectiveInFlightEffects)
        .def_readwrite("AutoAimProfile", &AWillowProjectile::AutoAimProfile)
        .def_readwrite("HomingTargetType", &AWillowProjectile::HomingTargetType)
        .def_readwrite("PayloadType", &AWillowProjectile::PayloadType)
        .def_readwrite("AccelRate", &AWillowProjectile::AccelRate)
        .def_readwrite("ExpLevel", &AWillowProjectile::ExpLevel)
        .def_readwrite("FiringOwnerStatsID", &AWillowProjectile::FiringOwnerStatsID)
        .def_readwrite("FiringWeaponStatsID", &AWillowProjectile::FiringWeaponStatsID)
        .def_readwrite("FiringWeaponMode", &AWillowProjectile::FiringWeaponMode)
        .def_readwrite("CheckRadius", &AWillowProjectile::CheckRadius)
        .def_readwrite("ProjectileLightClass", &AWillowProjectile::ProjectileLightClass)
        .def_readwrite("ProjectileLight", &AWillowProjectile::ProjectileLight)
        .def_readwrite("LightEnvironment", &AWillowProjectile::LightEnvironment)
        .def_readwrite("HomingActor", &AWillowProjectile::HomingActor)
        .def_readwrite("HomingLocation", &AWillowProjectile::HomingLocation)
        .def_readwrite("HomingRotationOffset", &AWillowProjectile::HomingRotationOffset)
        .def_readwrite("LastHomingPollLocation", &AWillowProjectile::LastHomingPollLocation)
        .def_readwrite("HomingTargetComponentIndex", &AWillowProjectile::HomingTargetComponentIndex)
        .def_readwrite("RetryTargetSearchRange", &AWillowProjectile::RetryTargetSearchRange)
        .def_readwrite("RetryTargetSearchFOVAngle", &AWillowProjectile::RetryTargetSearchFOVAngle)
        .def_readwrite("NextRetryFindHomingTargetTime", &AWillowProjectile::NextRetryFindHomingTargetTime)
        .def_readwrite("RetryFindTargetDelay", &AWillowProjectile::RetryFindTargetDelay)
        .def_readwrite("CustomGravityScaling", &AWillowProjectile::CustomGravityScaling)
        .def_readwrite("CurrentlyPursuedNode", &AWillowProjectile::CurrentlyPursuedNode)
        .def_readwrite("InstanceDataState", &AWillowProjectile::InstanceDataState)
        .def_readwrite("ReplicatedInstanceDataState", &AWillowProjectile::ReplicatedInstanceDataState)
        .def_readwrite("HitActors", &AWillowProjectile::HitActors)
        .def_readwrite("BulletListenerComponent", &AWillowProjectile::BulletListenerComponent)
        .def_readwrite("LastHomingRadius", &AWillowProjectile::LastHomingRadius)
        .def_readwrite("InitialRBImpulse", &AWillowProjectile::InitialRBImpulse)
        .def_readwrite("Wave_LastOffset", &AWillowProjectile::Wave_LastOffset)
        .def_readwrite("ProjectileWaveMotion", &AWillowProjectile::ProjectileWaveMotion)
        .def_readwrite("ExtraNonBlockingActor", &AWillowProjectile::ExtraNonBlockingActor)
        .def_readwrite("ProxActor", &AWillowProjectile::ProxActor)
        .def_readwrite("BaseStatusEffectChanceModifier", &AWillowProjectile::BaseStatusEffectChanceModifier)
        .def_readwrite("BaseStatusEffectChanceModifierBaseValue", &AWillowProjectile::BaseStatusEffectChanceModifierBaseValue)
        .def_readwrite("BaseStatusEffectChanceModifierModifierStack", &AWillowProjectile::BaseStatusEffectChanceModifierModifierStack)
        .def_readwrite("StatusEffectChanceModifier", &AWillowProjectile::StatusEffectChanceModifier)
        .def_readwrite("StatusEffectChanceModifierBaseValue", &AWillowProjectile::StatusEffectChanceModifierBaseValue)
        .def_readwrite("StatusEffectChanceModifierModifierStack", &AWillowProjectile::StatusEffectChanceModifierModifierStack)
        .def_readwrite("StatusEffectSpreadTimeIntervalModifier", &AWillowProjectile::StatusEffectSpreadTimeIntervalModifier)
        .def_readwrite("StatusEffectSpreadTimeIntervalModifierBaseValue", &AWillowProjectile::StatusEffectSpreadTimeIntervalModifierBaseValue)
        .def_readwrite("StatusEffectSpreadTimeIntervalModifierModifierStack", &AWillowProjectile::StatusEffectSpreadTimeIntervalModifierModifierStack)
        .def_readwrite("StatusEffectDamage", &AWillowProjectile::StatusEffectDamage)
        .def_readwrite("StatusEffectDamageBaseValue", &AWillowProjectile::StatusEffectDamageBaseValue)
        .def_readwrite("StatusEffectDamageModifierStack", &AWillowProjectile::StatusEffectDamageModifierStack)
        .def_readwrite("InstigatorSelfDamageScale", &AWillowProjectile::InstigatorSelfDamageScale)
        .def_readwrite("InstigatorSelfDamageScaleBaseValue", &AWillowProjectile::InstigatorSelfDamageScaleBaseValue)
        .def_readwrite("InstigatorSelfDamageScaleModifierStack", &AWillowProjectile::InstigatorSelfDamageScaleModifierStack)
        .def_readwrite("OverrideStatusEffectBaseChance", &AWillowProjectile::OverrideStatusEffectBaseChance)
        .def_readwrite("OverrideStatusEffectChance", &AWillowProjectile::OverrideStatusEffectChance)
        .def_readwrite("OverrideStatusEffectDamage", &AWillowProjectile::OverrideStatusEffectDamage)
        .def_readwrite("OverrideInstigatorSelfDamageScale", &AWillowProjectile::OverrideInstigatorSelfDamageScale)
        .def_readwrite("CreatedTime", &AWillowProjectile::CreatedTime)
        .def_readwrite("SpeedMultiplier", &AWillowProjectile::SpeedMultiplier)
        .def_readwrite("SpeedMultiplierBaseValue", &AWillowProjectile::SpeedMultiplierBaseValue)
        .def_readwrite("SpeedMultiplierModifierStack", &AWillowProjectile::SpeedMultiplierModifierStack)
        .def_readwrite("SecondsBeforeConsideringRemoval", &AWillowProjectile::SecondsBeforeConsideringRemoval)
        .def_readwrite("SecondsBetweenRemovalAttempts", &AWillowProjectile::SecondsBetweenRemovalAttempts)
        .def_readwrite("StickyIsAttachedTo", &AWillowProjectile::StickyIsAttachedTo)
        .def_readwrite("CollisionRadiusBeforeSticky", &AWillowProjectile::CollisionRadiusBeforeSticky)
        .def_readwrite("FuseTime", &AWillowProjectile::FuseTime)
        .def_readwrite("FuseTimeBaseValue", &AWillowProjectile::FuseTimeBaseValue)
        .def_readwrite("FuseTimeModifierStack", &AWillowProjectile::FuseTimeModifierStack)
        .def_readwrite("NumberOfChildProjectiles", &AWillowProjectile::NumberOfChildProjectiles)
        .def_readwrite("NumberOfChildProjectilesBaseValue", &AWillowProjectile::NumberOfChildProjectilesBaseValue)
        .def_readwrite("NumberOfChildProjectilesModifierStack", &AWillowProjectile::NumberOfChildProjectilesModifierStack)
        .def_readwrite("ConsumerHandle", &AWillowProjectile::ConsumerHandle)
        .def_readwrite("ReplicatedBehaviorConsumerState", &AWillowProjectile::ReplicatedBehaviorConsumerState)
        .def_readwrite("ReplicatedBehaviorEvent", &AWillowProjectile::ReplicatedBehaviorEvent)
        .def_readwrite("LightProjMgr", &AWillowProjectile::LightProjMgr)
        .def_readwrite("DrunkenRandomNumberSeed", &AWillowProjectile::DrunkenRandomNumberSeed)
        .def_readwrite("MovementComponent", &AWillowProjectile::MovementComponent)
        .def_readwrite("DesiredWorldZForLeveling", &AWillowProjectile::DesiredWorldZForLeveling)
        .def_readwrite("LevelingTurnSpeed", &AWillowProjectile::LevelingTurnSpeed)
        .def_readwrite("TakingDamageFromType", &AWillowProjectile::TakingDamageFromType)
        .def_readwrite("TakingDamageFromDamageCauser", &AWillowProjectile::TakingDamageFromDamageCauser)
        .def_readonly("UnknownData01", &AWillowProjectile::UnknownData01)
        .def_readwrite("TakingDamageFromInstigator", &AWillowProjectile::TakingDamageFromInstigator)
        .def_readwrite("BehaviorHitNormal", &AWillowProjectile::BehaviorHitNormal)
        .def("StaticClass", &AWillowProjectile::StaticClass, py::return_value_policy::reference)
        .def("GetLightProjMgrFor", &AWillowProjectile::GetLightProjMgrFor, py::return_value_policy::reference)
        .def("CheckAIAvoidance", &AWillowProjectile::CheckAIAvoidance)
        .def("GetObstacleInfo", &AWillowProjectile::GetObstacleInfo)
        .def("GetObstacleActor", &AWillowProjectile::GetObstacleActor, py::return_value_policy::reference)
        .def("GetMagnetData", &AWillowProjectile::GetMagnetData)
        .def("SetObstacleVelocity", &AWillowProjectile::SetObstacleVelocity)
        .def("CanAvoidObstacle", &AWillowProjectile::CanAvoidObstacle)
        .def("CanAvoidObstacles", &AWillowProjectile::CanAvoidObstacles)
        .def("SetObstacleActive", &AWillowProjectile::SetObstacleActive)
        .def("IsObstacleActive", &AWillowProjectile::IsObstacleActive)
        .def("ShouldRefreshLikenessOf", &AWillowProjectile::ShouldRefreshLikenessOf)
        .def("AssumeLikenessOf", &AWillowProjectile::AssumeLikenessOf)
        .def("SetTargetLocation", &AWillowProjectile::SetTargetLocation)
        .def("SetHomingTarget", &AWillowProjectile::SetHomingTarget)
        .def("FindHomingTarget", &AWillowProjectile::FindHomingTarget)
        .def("SetPatsy", &AWillowProjectile::SetPatsy)
        .def("GetPatsy", &AWillowProjectile::GetPatsy, py::return_value_policy::reference)
        .def("IsBeingHealed", &AWillowProjectile::IsBeingHealed)
        .def("SetBeingHealed", &AWillowProjectile::SetBeingHealed)
        .def("SetDrunkenRandomNumberSeed", &AWillowProjectile::SetDrunkenRandomNumberSeed)
        .def("GetTerminalVelocity", &AWillowProjectile::GetTerminalVelocity)
        .def("IsLevelingNow", &AWillowProjectile::IsLevelingNow)
        .def("Behavior_TagPayloadType", &AWillowProjectile::Behavior_TagPayloadType)
        .def("Behavior_LevelOffTrajectory", &AWillowProjectile::Behavior_LevelOffTrajectory)
        .def("Behavior_SetExplosionDefinition", &AWillowProjectile::Behavior_SetExplosionDefinition)
        .def("Behavior_SetDamageTypeDefinition", &AWillowProjectile::Behavior_SetDamageTypeDefinition)
        .def("Behavior_SetStickyGrenade", &AWillowProjectile::Behavior_SetStickyGrenade)
        .def("eventOnKilledEnemy", &AWillowProjectile::eventOnKilledEnemy)
        .def("eventOnKilledFriendly", &AWillowProjectile::eventOnKilledFriendly)
        .def("eventOnKilledNeutral", &AWillowProjectile::eventOnKilledNeutral)
        .def("eventOnDamagedNeutral", &AWillowProjectile::eventOnDamagedNeutral)
        .def("eventOnDamagedFriendly", &AWillowProjectile::eventOnDamagedFriendly)
        .def("eventOnDamagedEnemy", &AWillowProjectile::eventOnDamagedEnemy)
        .def("SetSpeed", &AWillowProjectile::SetSpeed)
        .def("ClearBodyCompositionInstance", &AWillowProjectile::ClearBodyCompositionInstance)
        .def("GetBodyInfoProvider", &AWillowProjectile::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("ApplyPreviewBodyComposition", &AWillowProjectile::ApplyPreviewBodyComposition)
        .def("ChangeInstanceDataSwitch", &AWillowProjectile::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &AWillowProjectile::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &AWillowProjectile::PreRemoveBodyComposition)
        .def("GetInstigatorSelfDamageScale", &AWillowProjectile::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &AWillowProjectile::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &AWillowProjectile::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &AWillowProjectile::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &AWillowProjectile::GetStatusEffectBaseDamage)
        .def("GetBalancedActorTypeIdentifier", &AWillowProjectile::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &AWillowProjectile::SetExpLevel)
        .def("SetAwesomeLevel", &AWillowProjectile::SetAwesomeLevel)
        .def("SetGameStage", &AWillowProjectile::SetGameStage)
        .def("GetExpLevelForEquip", &AWillowProjectile::GetExpLevelForEquip)
        .def("GetExpLevel", &AWillowProjectile::GetExpLevel)
        .def("GetAwesomeLevel", &AWillowProjectile::GetAwesomeLevel)
        .def("GetGameStage", &AWillowProjectile::GetGameStage)
        .def("GetPlayerProjectileLevel", &AWillowProjectile::GetPlayerProjectileLevel)
        .def("SetMorphNodeWeight", &AWillowProjectile::SetMorphNodeWeight)
        .def("GetProjectileDefinition", &AWillowProjectile::GetProjectileDefinition, py::return_value_policy::reference)
        .def("InitializeRBPhysics", &AWillowProjectile::InitializeRBPhysics)
        .def("Behavior_RegisterTargetable", &AWillowProjectile::Behavior_RegisterTargetable)
        .def("eventTraceTouch", &AWillowProjectile::eventTraceTouch)
        .def("SetInfoBarVisibility", &AWillowProjectile::SetInfoBarVisibility)
        .def("HideTargetInfoOnHud", &AWillowProjectile::HideTargetInfoOnHud)
        .def("IsChampion", &AWillowProjectile::IsChampion)
        .def("IsBoss", &AWillowProjectile::IsBoss)
        .def("eventGetTargetName", &AWillowProjectile::eventGetTargetName)
        .def("DoesTargetableTakeDamage", &AWillowProjectile::DoesTargetableTakeDamage)
        .def("GetExpInfo", &AWillowProjectile::GetExpInfo)
        .def("DisplayParentInfo", &AWillowProjectile::DisplayParentInfo)
        .def("GetAllBarInfo", &AWillowProjectile::GetAllBarInfo)
        .def("GetTargetableActor", &AWillowProjectile::GetTargetableActor, py::return_value_policy::reference)
        .def("Behavior_SetCanTarget", &AWillowProjectile::Behavior_SetCanTarget)
        .def("ShowSelfAsTarget", &AWillowProjectile::ShowSelfAsTarget)
        .def("GetDamageVector", &AWillowProjectile::GetDamageVector)
        .def("GetRigidBodyMesh", &AWillowProjectile::GetRigidBodyMesh, py::return_value_policy::reference)
        .def("eventGetInstanceData", &AWillowProjectile::eventGetInstanceData)
        .def("eventRemoveInstanceDataObject", &AWillowProjectile::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &AWillowProjectile::eventRemoveInstanceData)
        .def("SetInstanceData", &AWillowProjectile::SetInstanceData)
        .def("Behavior_Killed", &AWillowProjectile::Behavior_Killed)
        .def("Behavior_CauseRadiusDamage", &AWillowProjectile::Behavior_CauseRadiusDamage)
        .def("Behavior_CauseDamage", &AWillowProjectile::Behavior_CauseDamage)
        .def("SetProximity", &AWillowProjectile::SetProximity)
        .def("SetHomingRotationOffset", &AWillowProjectile::SetHomingRotationOffset)
        .def("GetHomingTargetLocation", &AWillowProjectile::GetHomingTargetLocation)
        .def("GetHomingTargetByType", &AWillowProjectile::GetHomingTargetByType)
        .def("WasAttachedToActor", &AWillowProjectile::WasAttachedToActor)
        .def("GetAttachedToActor", &AWillowProjectile::GetAttachedToActor, py::return_value_policy::reference)
        .def("GetAttachmentNormal", &AWillowProjectile::GetAttachmentNormal)
        .def("AttachToActor", &AWillowProjectile::AttachToActor)
        .def("IsAttached", &AWillowProjectile::IsAttached)
        .def("DetonateProjectile", &AWillowProjectile::DetonateProjectile)
        .def("Detonate", &AWillowProjectile::Detonate)
        .def("GetNextDetonationDelta", &AWillowProjectile::GetNextDetonationDelta)
        .def("ResetDetonationDelta", &AWillowProjectile::ResetDetonationDelta)
        .def("SetVelocity", &AWillowProjectile::SetVelocity)
        .def("GetVelocity", &AWillowProjectile::GetVelocity)
        .def("SetTimerState", &AWillowProjectile::SetTimerState)
        .def("GetTimerState", &AWillowProjectile::GetTimerState)
        .def("GetTimeSeconds", &AWillowProjectile::GetTimeSeconds)
        .def("SetCounterState", &AWillowProjectile::SetCounterState)
        .def("GetCounterState", &AWillowProjectile::GetCounterState)
        .def("EvaluateAttributeInitialization", &AWillowProjectile::EvaluateAttributeInitialization)
        .def("GetMesh", &AWillowProjectile::GetMesh, py::return_value_policy::reference)
        .def("FindAnimNode", &AWillowProjectile::FindAnimNode, py::return_value_policy::reference)
        .def("SetRotationRate", &AWillowProjectile::SetRotationRate)
        .def("GetCollisionRadius", &AWillowProjectile::GetCollisionRadius)
        .def("IsInTemporalField", &AWillowProjectile::IsInTemporalField, py::return_value_policy::reference)
        .def("GetHomingTarget", &AWillowProjectile::GetHomingTarget, py::return_value_policy::reference)
        .def("CalcCamera", &AWillowProjectile::CalcCamera)
        .def("InitStats", &AWillowProjectile::InitStats)
        .def("MyOnParticleSystemFinished", &AWillowProjectile::MyOnParticleSystemFinished)
        .def("Destroyed", &AWillowProjectile::Destroyed)
        .def("GetReplicatedInstanceDataState", &AWillowProjectile::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &AWillowProjectile::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &AWillowProjectile::DestroyOwnedInstanceData)
        .def("HideProjectile", &AWillowProjectile::HideProjectile)
        .def("eventTornOff", &AWillowProjectile::eventTornOff)
        .def("ShutDown", &AWillowProjectile::ShutDown)
        .def("UnregisterBehaviorConsumerTimer", &AWillowProjectile::UnregisterBehaviorConsumerTimer)
        .def("DisableProjectile", &AWillowProjectile::DisableProjectile)
        .def("GetImpactInfoForTouch", &AWillowProjectile::GetImpactInfoForTouch)
        .def("eventApplyOverchargedEffect", &AWillowProjectile::eventApplyOverchargedEffect)
        .def("eventSpawnFlightEffects", &AWillowProjectile::eventSpawnFlightEffects)
        .def("Explode", &AWillowProjectile::Explode)
        .def("SpawnClientExplosion", &AWillowProjectile::SpawnClientExplosion)
        .def("TryAwardExperience", &AWillowProjectile::TryAwardExperience)
        .def("TakeRadiusDamage", &AWillowProjectile::TakeRadiusDamage)
        .def("eventTakeDamage", &AWillowProjectile::eventTakeDamage)
        .def("HandleOnHitEvents", &AWillowProjectile::HandleOnHitEvents)
        .def("SetDamageSurfaceTypeImpactDataAndBoneIndex", &AWillowProjectile::SetDamageSurfaceTypeImpactDataAndBoneIndex)
        .def("eventLanded", &AWillowProjectile::eventLanded)
        .def("DoHitWall", &AWillowProjectile::DoHitWall)
        .def("HitWall", &AWillowProjectile::HitWall)
        .def("AttemptReflection", &AWillowProjectile::AttemptReflection)
        .def("eventProximityTouch", &AWillowProjectile::eventProximityTouch)
        .def("ProcessTouch", &AWillowProjectile::ProcessTouch)
        .def("HandleTouch", &AWillowProjectile::HandleTouch)
        .def("ShouldIgnoreTouchFrom", &AWillowProjectile::ShouldIgnoreTouchFrom)
        .def("eventTouch", &AWillowProjectile::eventTouch)
        .def("IsBlockedByWillowInteractiveObject", &AWillowProjectile::IsBlockedByWillowInteractiveObject)
        .def("AvoidCollision", &AWillowProjectile::AvoidCollision)
        .def("DrawHomingDebugTracer", &AWillowProjectile::DrawHomingDebugTracer)
        .def("GetCircularHomingAcceleration", &AWillowProjectile::GetCircularHomingAcceleration)
        .def("OnCounterEvent", &AWillowProjectile::OnCounterEvent)
        .def("eventOnTimerEvent", &AWillowProjectile::eventOnTimerEvent)
        .def("eventSetInitialState", &AWillowProjectile::eventSetInitialState)
        .def("eventCreateProjectileLight", &AWillowProjectile::eventCreateProjectileLight)
        .def("InitWithVelocity", &AWillowProjectile::InitWithVelocity)
        .def("InitWithWaveMotion", &AWillowProjectile::InitWithWaveMotion)
        .def("SetVelocityAndAcceleration", &AWillowProjectile::SetVelocityAndAcceleration)
        .def("Init", &AWillowProjectile::Init)
        .def("InitializeExplosion", &AWillowProjectile::InitializeExplosion)
        .def("eventInitializeDamageType", &AWillowProjectile::eventInitializeDamageType)
        .def("UpdateAndDestroyNonVisibleActorInTimer", &AWillowProjectile::UpdateAndDestroyNonVisibleActorInTimer)
        .def("DoOnSpawn", &AWillowProjectile::DoOnSpawn)
        .def("RefreshGearLikenessComponents", &AWillowProjectile::RefreshGearLikenessComponents)
        .def("GetGearLiknessActor", &AWillowProjectile::GetGearLiknessActor, py::return_value_policy::reference)
        .def("SetGearLikenessActor", &AWillowProjectile::SetGearLikenessActor)
        .def("eventProjectileGetBehaviorContext", &AWillowProjectile::eventProjectileGetBehaviorContext, py::return_value_policy::reference)
        .def("InitializeFromDefinition", &AWillowProjectile::InitializeFromDefinition)
        .def("eventReplicatedEvent", &AWillowProjectile::eventReplicatedEvent)
        .def("eventRigidBodyCollision", &AWillowProjectile::eventRigidBodyCollision)
        .def("GetInstigatingController", &AWillowProjectile::GetInstigatingController, py::return_value_policy::reference)
        .def("PostBeginPlay", &AWillowProjectile::PostBeginPlay)
        .def("GetHitDataForActor", &AWillowProjectile::GetHitDataForActor)
        .def("AddHitActor", &AWillowProjectile::AddHitActor)
        .def("IsHomingDebugEnabled", &AWillowProjectile::IsHomingDebugEnabled)
        .def("ToggleHomingDebug", &AWillowProjectile::ToggleHomingDebug)
        .def("CalcTrajectoryByTime", &AWillowProjectile::CalcTrajectoryByTime)
        .def("CalcTrajectoryAtActor", &AWillowProjectile::CalcTrajectoryAtActor)
        .def("CalcTrajectory", &AWillowProjectile::CalcTrajectory)
        .def("GetTrajectoryOffset", &AWillowProjectile::GetTrajectoryOffset)
        .def("GetBehaviorConsumerHandle", &AWillowProjectile::GetBehaviorConsumerHandle)
        .def("IsTargetableProxy", &AWillowProjectile::IsTargetableProxy)
        .def("GetAutoAimProfile", &AWillowProjectile::GetAutoAimProfile)
        .def("GetMagnetismRange", &AWillowProjectile::GetMagnetismRange)
        .def("GetMagnetismOrigin", &AWillowProjectile::GetMagnetismOrigin)
        .def("IsAutoAimTarget", &AWillowProjectile::IsAutoAimTarget)
        .def("GetTargetingModifier", &AWillowProjectile::GetTargetingModifier)
        .def("HasHomingTargetComponents", &AWillowProjectile::HasHomingTargetComponents)
        .def("IsValidHomingTarget", &AWillowProjectile::IsValidHomingTarget)
        .def("IsTargetable", &AWillowProjectile::IsTargetable)
        .def("GetTargetableIsHidden", &AWillowProjectile::GetTargetableIsHidden)
        .def("CanSnapZoom", &AWillowProjectile::CanSnapZoom)
        .def("GetSnapLocation", &AWillowProjectile::GetSnapLocation)
        .def("GetTargetableLocation", &AWillowProjectile::GetTargetableLocation)
        .def("GetOpinion", &AWillowProjectile::GetOpinion)
        .def("SetAllegiance", &AWillowProjectile::SetAllegiance)
        .def("GetDefaultAllegiance", &AWillowProjectile::GetDefaultAllegiance, py::return_value_policy::reference)
        .def("GetObjectAllegiance", &AWillowProjectile::GetObjectAllegiance, py::return_value_policy::reference)
        .def("IsSameAllegiance", &AWillowProjectile::IsSameAllegiance)
        .def("IsNeutral", &AWillowProjectile::IsNeutral)
        .def("IsFriendly", &AWillowProjectile::IsFriendly)
        .def("IsEnemy", &AWillowProjectile::IsEnemy)
          ;
}