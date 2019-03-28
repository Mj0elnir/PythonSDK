#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWorldInfo(py::module &m)
{
    py::class_< AWorldInfo,  AActor   >(m, "AWorldInfo")
		.def_static("StaticClass", &AWorldInfo::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultPostProcessSettings", &AWorldInfo::DefaultPostProcessSettings)
        .def_readwrite("WorldPostProcessChain", &AWorldInfo::WorldPostProcessChain)
        .def_readwrite("SquintModeKernelSize", &AWorldInfo::SquintModeKernelSize)
        .def_readwrite("ShadowmapStreamingFactorMultiplier", &AWorldInfo::ShadowmapStreamingFactorMultiplier)
        .def_readwrite("HighestPriorityPostProcessVolume", &AWorldInfo::HighestPriorityPostProcessVolume)
        .def_readwrite("DefaultReverbSettings", &AWorldInfo::DefaultReverbSettings)
        .def_readwrite("DefaultAmbientZoneSettings", &AWorldInfo::DefaultAmbientZoneSettings)
        .def_readwrite("FogStart", &AWorldInfo::FogStart)
        .def_readwrite("FogEnd", &AWorldInfo::FogEnd)
        .def_readwrite("FogColor", &AWorldInfo::FogColor)
        .def_readwrite("BumpEnd", &AWorldInfo::BumpEnd)
        .def_readwrite("HighestPriorityReverbVolume", &AWorldInfo::HighestPriorityReverbVolume)
        .def_readwrite("MassiveLODOverrideVolumes", &AWorldInfo::MassiveLODOverrideVolumes)
        .def_readwrite("WorldSoundManager", &AWorldInfo::WorldSoundManager)
        .def_readwrite("PortalVolumes", &AWorldInfo::PortalVolumes)
        .def_readwrite("EnvironmentVolumes", &AWorldInfo::EnvironmentVolumes)
        .def_readwrite("StreamingLevels", &AWorldInfo::StreamingLevels)
        .def_readwrite("LastTimeUnbuiltLightingWasEncountered", &AWorldInfo::LastTimeUnbuiltLightingWasEncountered)
        .def_readwrite("TimeDilation", &AWorldInfo::TimeDilation)
        .def_readwrite("DemoPlayTimeDilation", &AWorldInfo::DemoPlayTimeDilation)
        .def_readwrite("TimeSeconds", &AWorldInfo::TimeSeconds)
        .def_readwrite("RealTimeSeconds", &AWorldInfo::RealTimeSeconds)
        .def_readwrite("AudioTimeSeconds", &AWorldInfo::AudioTimeSeconds)
        .def_readwrite("DeltaSeconds", &AWorldInfo::DeltaSeconds)
        .def_readwrite("PauseDelay", &AWorldInfo::PauseDelay)
        .def_readwrite("RealTimeToUnPause", &AWorldInfo::RealTimeToUnPause)
        .def_readwrite("Pauser", &AWorldInfo::Pauser)
        .def_readwrite("DefaultTexture", &AWorldInfo::DefaultTexture)
        .def_readwrite("WireframeTexture", &AWorldInfo::WireframeTexture)
        .def_readwrite("WhiteSquareTexture", &AWorldInfo::WhiteSquareTexture)
        .def_readwrite("LargeVertex", &AWorldInfo::LargeVertex)
        .def_readwrite("BSPVertex", &AWorldInfo::BSPVertex)
        .def_readwrite("DeferredExecs", &AWorldInfo::DeferredExecs)
        .def_readwrite("GRI", &AWorldInfo::GRI)
        .def_readwrite("NetMode", &AWorldInfo::NetMode)
        .def_readwrite("NextTravelType", &AWorldInfo::NextTravelType)
        .def_readwrite("VisibilityAggressiveness", &AWorldInfo::VisibilityAggressiveness)
        .def_readwrite("LevelLightingQuality", &AWorldInfo::LevelLightingQuality)
        .def_readwrite("ComputerName", &AWorldInfo::ComputerName)
        .def_readwrite("EngineVersion", &AWorldInfo::EngineVersion)
        .def_readwrite("MinNetVersion", &AWorldInfo::MinNetVersion)
        .def_readwrite("Game", &AWorldInfo::Game)
        .def_readwrite("StallZ", &AWorldInfo::StallZ)
        .def_readwrite("WorldGravityZ", &AWorldInfo::WorldGravityZ)
        .def_readwrite("DefaultGravityZ", &AWorldInfo::DefaultGravityZ)
        .def_readwrite("GlobalGravityZ", &AWorldInfo::GlobalGravityZ)
        .def_readwrite("RBPhysicsGravityScaling", &AWorldInfo::RBPhysicsGravityScaling)
        .def_readwrite("NavigationPointList", &AWorldInfo::NavigationPointList)
        .def_readwrite("ControllerList", &AWorldInfo::ControllerList)
        .def_readwrite("PawnList", &AWorldInfo::PawnList)
        .def_readwrite("CoverList", &AWorldInfo::CoverList)
        .def_readwrite("PylonList", &AWorldInfo::PylonList)
        .def_readwrite("NavMeshList", &AWorldInfo::NavMeshList)
        .def_readwrite("MoveRepSize", &AWorldInfo::MoveRepSize)
        .def_readwrite("ReplicationViewers", &AWorldInfo::ReplicationViewers)
        .def_readwrite("NextURL", &AWorldInfo::NextURL)
        .def_readwrite("NextSwitchCountdown", &AWorldInfo::NextSwitchCountdown)
        .def_readwrite("PackedLightAndShadowMapTextureSize", &AWorldInfo::PackedLightAndShadowMapTextureSize)
        .def_readwrite("DefaultColorScale", &AWorldInfo::DefaultColorScale)
        .def_readwrite("DefaultGameType", &AWorldInfo::DefaultGameType)
        .def_readwrite("GameTypesSupportedOnThisMap", &AWorldInfo::GameTypesSupportedOnThisMap)
        .def_readwrite("ClientDestroyedActorContent", &AWorldInfo::ClientDestroyedActorContent)
        .def_readwrite("PreparingLevelNames", &AWorldInfo::PreparingLevelNames)
        .def_readwrite("CommittedPersistentLevel", &AWorldInfo::CommittedPersistentLevel)
        .def_readwrite("PersistentMapForcedObjects", &AWorldInfo::PersistentMapForcedObjects)
        .def_readwrite("Title", &AWorldInfo::Title)
        .def_readwrite("Author", &AWorldInfo::Author)
        .def_readwrite("MyMapInfo", &AWorldInfo::MyMapInfo)
        .def_readwrite("EmitterPoolClassPath", &AWorldInfo::EmitterPoolClassPath)
        .def_readwrite("MyEmitterPool", &AWorldInfo::MyEmitterPool)
        .def_readwrite("DecalManagerClassPath", &AWorldInfo::DecalManagerClassPath)
        .def_readwrite("MyDecalManager", &AWorldInfo::MyDecalManager)
        .def_readwrite("ParticleEventManagerClassPath", &AWorldInfo::ParticleEventManagerClassPath)
        .def_readwrite("MyParticleEventManager", &AWorldInfo::MyParticleEventManager)
        .def_readwrite("ParentLoader", &AWorldInfo::ParentLoader)
        .def_readwrite("MaxPhysicsDeltaTime", &AWorldInfo::MaxPhysicsDeltaTime)
        .def_readwrite("MaxPhysicsSubsteps", &AWorldInfo::MaxPhysicsSubsteps)
        .def_readwrite("PhysicsProperties", &AWorldInfo::PhysicsProperties)
        .def_readwrite("CompartmentRunFrames", &AWorldInfo::CompartmentRunFrames)
        .def_readwrite("DefaultSkinWidth", &AWorldInfo::DefaultSkinWidth)
        .def_readwrite("ApexLODResourceBudget", &AWorldInfo::ApexLODResourceBudget)
        .def_readwrite("DestructibleSettings", &AWorldInfo::DestructibleSettings)
        .def_readwrite("EmitterVertical", &AWorldInfo::EmitterVertical)
        .def_readwrite("VerticalProperties", &AWorldInfo::VerticalProperties)
        .def_readwrite("ChanceOfPhysicsChunkOverride", &AWorldInfo::ChanceOfPhysicsChunkOverride)
        .def_readwrite("MaxExplosionChunkSize", &AWorldInfo::MaxExplosionChunkSize)
        .def_readwrite("MaxDamageChunkSize", &AWorldInfo::MaxDamageChunkSize)
        .def_readwrite("FractureExplosionVelScale", &AWorldInfo::FractureExplosionVelScale)
        .def_readwrite("MaxNumFacturedChunksToSpawnInAFrame", &AWorldInfo::MaxNumFacturedChunksToSpawnInAFrame)
        .def_readwrite("NumFacturedChunksSpawnedThisFrame", &AWorldInfo::NumFacturedChunksSpawnedThisFrame)
        .def_readwrite("FracturedMeshWeaponDamage", &AWorldInfo::FracturedMeshWeaponDamage)
        .def_readwrite("VisibilityCellSize", &AWorldInfo::VisibilityCellSize)
        .def_readwrite("CharacterLitIndirectBrightness", &AWorldInfo::CharacterLitIndirectBrightness)
        .def_readwrite("CharacterLitIndirectContrastFactor", &AWorldInfo::CharacterLitIndirectContrastFactor)
        .def_readwrite("CharacterShadowedIndirectBrightness", &AWorldInfo::CharacterShadowedIndirectBrightness)
        .def_readwrite("CharacterShadowedIndirectContrastFactor", &AWorldInfo::CharacterShadowedIndirectContrastFactor)
        .def_readwrite("CharacterLightingContrastFactor", &AWorldInfo::CharacterLightingContrastFactor)
        .def_readwrite("ScreenMessages", &AWorldInfo::ScreenMessages)
        .def_readwrite("PriorityScreenMessages", &AWorldInfo::PriorityScreenMessages)
        .def_readwrite("LightmassSettings", &AWorldInfo::LightmassSettings)
        .def_readwrite("PeerHostMigration", &AWorldInfo::PeerHostMigration)
        .def_readwrite("HostMigrationTimeout", &AWorldInfo::HostMigrationTimeout)
        .def_readwrite("NavigationAreas", &AWorldInfo::NavigationAreas)
        .def_readwrite("HoldingCell", &AWorldInfo::HoldingCell)
        .def_readwrite("PersonalTeleporterDestination", &AWorldInfo::PersonalTeleporterDestination)
        .def_readwrite("PersonalReturnTeleporterLocation", &AWorldInfo::PersonalReturnTeleporterLocation)
        .def_readwrite("CommonsLevelName", &AWorldInfo::CommonsLevelName)
        .def_readwrite("TeleporterPlacedEventName", &AWorldInfo::TeleporterPlacedEventName)
        .def_readwrite("CombatMusic", &AWorldInfo::CombatMusic)
        .def_readwrite("GBXCheckDisplayDuration", &AWorldInfo::GBXCheckDisplayDuration)
        .def_readwrite("TextureMovies", &AWorldInfo::TextureMovies)
        .def_readwrite("KillZ", &AZoneInfo::KillZ)
        .def_readwrite("SoftKill", &AZoneInfo::SoftKill)
        .def_readwrite("KillZDamageType", &AZoneInfo::KillZDamageType)
        .def("GetStreamingPersistentMap", &AWorldInfo::GetStreamingPersistentMap, py::return_value_policy::reference)
        .def("GetStreamingPersistentWorldInfo", &AWorldInfo::GetStreamingPersistentWorldInfo, py::return_value_policy::reference)
        .def("GetStreamingPersistentMapName", &AWorldInfo::GetStreamingPersistentMapName)
        .def("GetAreaColor", &AWorldInfo::GetAreaColor)
        .def("ClearObjectPools", &AWorldInfo::ClearObjectPools)
        .def("ToggleHostMigration", &AWorldInfo::ToggleHostMigration)
        .def("eventNotifyHostMigrationStateChanged", &AWorldInfo::eventNotifyHostMigrationStateChanged)
        .def("BeginHostMigration", &AWorldInfo::BeginHostMigration)
        .def("eventCanBeginHostMigration", &AWorldInfo::eventCanBeginHostMigration)
        .def("FindEnvironmentVolume", &AWorldInfo::FindEnvironmentVolume, py::return_value_policy::reference)
        .def("GetWorldInfo", &AWorldInfo::GetWorldInfo, py::return_value_policy::reference)
        .def("GetWorldFractureSettings", &AWorldInfo::GetWorldFractureSettings)
        .def("DoMemoryTracking", &AWorldInfo::DoMemoryTracking)
        .def("GetDemoRewindPoints", &AWorldInfo::GetDemoRewindPoints)
        .def("GetDemoFrameInfo", [](AWorldInfo &self ) { int* pyCurrentFrame = (int*)malloc(sizeof(int)) ; int* pyTotalFrames = (int*)malloc(sizeof(int)) ;   self.GetDemoFrameInfo(pyCurrentFrame, pyTotalFrames); return py::make_tuple(*pyCurrentFrame, *pyTotalFrames); })
        .def("IsPlayingDemo", &AWorldInfo::IsPlayingDemo)
        .def("IsRecordingDemo", &AWorldInfo::IsRecordingDemo)
        .def("GetDetailMode", &AWorldInfo::GetDetailMode)
        .def("GetMapName", &AWorldInfo::GetMapName)
        .def("SetMapInfo", &AWorldInfo::SetMapInfo)
        .def("GetMapInfo", &AWorldInfo::GetMapInfo, py::return_value_policy::reference)
        .def("SetSeamlessTravelMidpointPause", &AWorldInfo::SetSeamlessTravelMidpointPause)
        .def("IsInSeamlessTravel", &AWorldInfo::IsInSeamlessTravel)
        .def("SeamlessTravel", &AWorldInfo::SeamlessTravel)
        .def("CommitMapChange", &AWorldInfo::CommitMapChange)
        .def("CancelPendingMapChange", &AWorldInfo::CancelPendingMapChange)
        .def("IsMapChangeReady", &AWorldInfo::IsMapChangeReady)
        .def("IsPreparingMapChange", &AWorldInfo::IsPreparingMapChange)
        .def("PrepareMapChange", &AWorldInfo::PrepareMapChange)
        .def("NotifyMatchStarted", &AWorldInfo::NotifyMatchStarted)
        .def("AllClientConnections", [](AWorldInfo &self ) { class UPlayer** pyClientConnection = 0 ; int* pyClientIP = (int*)malloc(sizeof(int)) ; int* pyClientPort = (int*)malloc(sizeof(int)) ;   self.AllClientConnections(pyClientConnection, pyClientIP, pyClientPort); return py::make_tuple(*pyClientConnection, *pyClientIP, *pyClientPort); })
        .def("AllPawns", [](AWorldInfo &self , class UClass* BaseClass, struct FVector TestLocation, float TestRadius) { class APawn** pyP = 0 ;   self.AllPawns(BaseClass, TestLocation, TestRadius, pyP); return py::make_tuple(*pyP); })
        .def("AllControllers", [](AWorldInfo &self , class UClass* BaseClass) { class AController** pyC = 0 ;   self.AllControllers(BaseClass, pyC); return py::make_tuple(*pyC); })
        .def("NavigationPointCheck", &AWorldInfo::NavigationPointCheck)
        .def("RadiusNavigationPoints", [](AWorldInfo &self , class UClass* BaseClass, struct FVector Point, float Radius) { class ANavigationPoint** pyN = 0 ;   self.RadiusNavigationPoints(BaseClass, Point, Radius, pyN); return py::make_tuple(*pyN); })
        .def("AllNavigationPoints", [](AWorldInfo &self , class UClass* BaseClass) { class ANavigationPoint** pyN = 0 ;   self.AllNavigationPoints(BaseClass, pyN); return py::make_tuple(*pyN); })
        .def("NotifyNavMeshRemoved", &AWorldInfo::NotifyNavMeshRemoved)
        .def("NotifyNavMeshAdded", &AWorldInfo::NotifyNavMeshAdded)
        .def("RemoveNavMeshFromList", &AWorldInfo::RemoveNavMeshFromList)
        .def("AddNavMeshToList", &AWorldInfo::AddNavMeshToList)
        .def("Reset", &AWorldInfo::Reset)
        .def("PostBeginPlay", &AWorldInfo::PostBeginPlay)
        .def("PreBeginPlay", &AWorldInfo::PreBeginPlay)
        .def("ThisIsNeverExecuted", &AWorldInfo::ThisIsNeverExecuted)
        .def("eventServerTravel", &AWorldInfo::eventServerTravel)
        .def("GetGameClass", &AWorldInfo::GetGameClass, py::return_value_policy::reference)
        .def("GetAddressURL", &AWorldInfo::GetAddressURL)
        .def("VerifyNavList", &AWorldInfo::VerifyNavList)
        .def("ForceGarbageCollection", &AWorldInfo::ForceGarbageCollection)
        .def("IsPlayInMobilePreview", &AWorldInfo::IsPlayInMobilePreview)
        .def("IsPlayInPreview", &AWorldInfo::IsPlayInPreview)
        .def("IsPlayInEditor", &AWorldInfo::IsPlayInEditor)
        .def("IsConsoleBuild", &AWorldInfo::IsConsoleBuild)
        .def("IsDemoBuild", &AWorldInfo::IsDemoBuild)
        .def("GetLocalURL", &AWorldInfo::GetLocalURL)
        .def("SetLevelRBGravity", &AWorldInfo::SetLevelRBGravity)
        .def("GetAllRootSequences", &AWorldInfo::GetAllRootSequences)
        .def("GetGameSequence", &AWorldInfo::GetGameSequence, py::return_value_policy::reference)
        .def("GetGravityZ", &AWorldInfo::GetGravityZ)
        .def("IsMenuLevel", &AWorldInfo::IsMenuLevel)
        .def("AddOnScreenDebugMessage", &AWorldInfo::AddOnScreenDebugMessage)
        .def("GetNavMeshPathGoalEvaluatorFromCache", &AWorldInfo::GetNavMeshPathGoalEvaluatorFromCache, py::return_value_policy::reference)
        .def("GetNavMeshPathConstraintFromCache", &AWorldInfo::GetNavMeshPathConstraintFromCache, py::return_value_policy::reference)
        .def("ReleaseCachedConstraintsAndEvaluators", &AWorldInfo::ReleaseCachedConstraintsAndEvaluators)
          ;
}