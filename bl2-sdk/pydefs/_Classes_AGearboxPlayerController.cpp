#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxPlayerController(py::object m)
{
    py::class_< AGearboxPlayerController,  AGamePlayerController   >(m, "AGearboxPlayerController")
        .def_readwrite("CurrentViewShake", &AGearboxPlayerController::CurrentViewShake)
        .def_readwrite("BaseDamageShake", &AGearboxPlayerController::BaseDamageShake)
        .def_readwrite("ShakeOffset", &AGearboxPlayerController::ShakeOffset)
        .def_readwrite("ShakeRot", &AGearboxPlayerController::ShakeRot)
        .def_readwrite("ShakeFOV", &AGearboxPlayerController::ShakeFOV)
        .def_readwrite("AIDebugCam", &AGearboxPlayerController::AIDebugCam)
        .def_readwrite("PreviousDebugPawn", &AGearboxPlayerController::PreviousDebugPawn)
        .def_readwrite("AIDebugCamClass", &AGearboxPlayerController::AIDebugCamClass)
        .def_readwrite("DamageShakeMagnitudeMultiplier", &AGearboxPlayerController::DamageShakeMagnitudeMultiplier)
        .def_readwrite("DamageShakeMagnitudeMultiplierBaseValue", &AGearboxPlayerController::DamageShakeMagnitudeMultiplierBaseValue)
        .def_readwrite("DamageShakeMagnitudeMultiplierModifierStack", &AGearboxPlayerController::DamageShakeMagnitudeMultiplierModifierStack)
        .def_readwrite("DamageShakeTimeMultiplier", &AGearboxPlayerController::DamageShakeTimeMultiplier)
        .def_readwrite("DamageShakeTimeMultiplierBaseValue", &AGearboxPlayerController::DamageShakeTimeMultiplierBaseValue)
        .def_readwrite("DamageShakeTimeMultiplierModifierStack", &AGearboxPlayerController::DamageShakeTimeMultiplierModifierStack)
        .def_readwrite("LeviathanReplicationChannel", &AGearboxPlayerController::LeviathanReplicationChannel)
        .def_readwrite("PlaySessionGuid", &AGearboxPlayerController::PlaySessionGuid)
        .def_readwrite("SessionBundleNumber", &AGearboxPlayerController::SessionBundleNumber)
        .def_readwrite("CachedProfileSettings", &AGearboxPlayerController::CachedProfileSettings)
        .def("StaticClass", &AGearboxPlayerController::StaticClass, py::return_value_policy::reference)
        .def("RequestTitleStorageFile", &AGearboxPlayerController::RequestTitleStorageFile)
        .def("ShowSparkID", &AGearboxPlayerController::ShowSparkID)
        .def("ShouldCheckRemoteControlCheckbox", &AGearboxPlayerController::ShouldCheckRemoteControlCheckbox)
        .def("DisplayDebugSpark", &AGearboxPlayerController::DisplayDebugSpark)
        .def("AITree", &AGearboxPlayerController::AITree)
        .def("AIToggleTargetViewCones", &AGearboxPlayerController::AIToggleTargetViewCones)
        .def("AIToggleAwarenessZones", &AGearboxPlayerController::AIToggleAwarenessZones)
        .def("AIToggleCombat", &AGearboxPlayerController::AIToggleCombat)
        .def("AIToggleResources", &AGearboxPlayerController::AIToggleResources)
        .def("AIToggleInactiveRules", &AGearboxPlayerController::AIToggleInactiveRules)
        .def("AIToggleRules", &AGearboxPlayerController::AIToggleRules)
        .def("AIToggleFlags", &AGearboxPlayerController::AIToggleFlags)
        .def("AIDebugNextSnapshot", &AGearboxPlayerController::AIDebugNextSnapshot)
        .def("AIDebugPrevSnapshot", &AGearboxPlayerController::AIDebugPrevSnapshot)
        .def("ainext", &AGearboxPlayerController::ainext)
        .def("aiprev", &AGearboxPlayerController::aiprev)
        .def("AINextRule", &AGearboxPlayerController::AINextRule)
        .def("AIPrevRule", &AGearboxPlayerController::AIPrevRule)
        .def("AIDebugSetPawn", &AGearboxPlayerController::AIDebugSetPawn)
        .def("AIDebugSetPawnByName", &AGearboxPlayerController::AIDebugSetPawnByName)
        .def("debugpawn", &AGearboxPlayerController::debugpawn)
        .def("aisetp", &AGearboxPlayerController::aisetp)
        .def("NotifyGameUnPaused", &AGearboxPlayerController::NotifyGameUnPaused)
        .def("NotifyGamePaused", &AGearboxPlayerController::NotifyGamePaused)
        .def("SetSettingsFromProfile", &AGearboxPlayerController::SetSettingsFromProfile)
        .def("GetStorageDeviceID", &AGearboxPlayerController::GetStorageDeviceID)
        .def("SetStorageDeviceID", &AGearboxPlayerController::SetStorageDeviceID)
        .def("NotifyDeviceSelectComplete", &AGearboxPlayerController::NotifyDeviceSelectComplete)
        .def("eventDisplayStorageRemovedMenu", &AGearboxPlayerController::eventDisplayStorageRemovedMenu)
        .def("DisplayProfileRemovedMenu", &AGearboxPlayerController::DisplayProfileRemovedMenu)
        .def("NotifyProfileWriteFromStorageChangeComplete", &AGearboxPlayerController::NotifyProfileWriteFromStorageChangeComplete)
        .def("IsCurrentStorageDeviceValid", &AGearboxPlayerController::IsCurrentStorageDeviceValid)
        .def("NotifyStorageDeviceChange", &AGearboxPlayerController::NotifyStorageDeviceChange)
        .def("eventDestroyOnlineGame", &AGearboxPlayerController::eventDestroyOnlineGame)
        .def("ReturnToTitleScreen", &AGearboxPlayerController::ReturnToTitleScreen)
        .def("GetConnectionFailureNoticeMsg", &AGearboxPlayerController::GetConnectionFailureNoticeMsg)
        .def("GetMainMenuMapName", &AGearboxPlayerController::GetMainMenuMapName)
        .def("NotifyLinkStatusChange", &AGearboxPlayerController::NotifyLinkStatusChange)
        .def("NotifyLoginStatusChange", &AGearboxPlayerController::NotifyLoginStatusChange)
        .def("NotifyLoginChange", &AGearboxPlayerController::NotifyLoginChange)
        .def("OnReadProfileSettingsComplete", &AGearboxPlayerController::OnReadProfileSettingsComplete)
        .def("OnReceivedNewProfile", &AGearboxPlayerController::OnReceivedNewProfile)
        .def("ClearOnlineDelegates", &AGearboxPlayerController::ClearOnlineDelegates)
        .def("RegisterOnlineDelegates", &AGearboxPlayerController::RegisterOnlineDelegates)
        .def("OnProfileWriteComplete", &AGearboxPlayerController::OnProfileWriteComplete)
        .def("HidePS3WritingProfileDialog", &AGearboxPlayerController::HidePS3WritingProfileDialog)
        .def("ShowPS3WritingProfileDialog", &AGearboxPlayerController::ShowPS3WritingProfileDialog)
        .def("eventWriteProfile", &AGearboxPlayerController::eventWriteProfile)
        .def("eventGetProfileSettings", &AGearboxPlayerController::eventGetProfileSettings, py::return_value_policy::reference)
        .def("GetMyControllerId", &AGearboxPlayerController::GetMyControllerId)
        .def("eventReadProfile", &AGearboxPlayerController::eventReadProfile)
        .def("UnregisterPlayerDataStores", &AGearboxPlayerController::UnregisterPlayerDataStores)
        .def("RegisterCustomPlayerDataStores", &AGearboxPlayerController::RegisterCustomPlayerDataStores)
        .def("SetDataStoreStringValue", &AGearboxPlayerController::SetDataStoreStringValue)
        .def("GetDataStoreStringValue", &AGearboxPlayerController::GetDataStoreStringValue)
        .def("eventClientKeepPlayingLoadingMovie", &AGearboxPlayerController::eventClientKeepPlayingLoadingMovie)
        .def("ClientResetCamera", &AGearboxPlayerController::ClientResetCamera)
        .def("eventSpawnPlayerCamera", &AGearboxPlayerController::eventSpawnPlayerCamera)
        .def("eventInitInputSystem", &AGearboxPlayerController::eventInitInputSystem)
        .def("NoTargetAll", &AGearboxPlayerController::NoTargetAll)
        .def("NoTarget", &AGearboxPlayerController::NoTarget)
        .def("GetNoTargetPlayers", &AGearboxPlayerController::GetNoTargetPlayers)
        .def("SetNoTargetPlayers", &AGearboxPlayerController::SetNoTargetPlayers)
        .def("Possess", &AGearboxPlayerController::Possess)
        .def("DontTarget", &AGearboxPlayerController::DontTarget)
        .def("ClientConsoleCommand", &AGearboxPlayerController::ClientConsoleCommand)
        .def("IsPlayerAllowingActiveMoment", &AGearboxPlayerController::IsPlayerAllowingActiveMoment)
        .def("IsActiveMomentRunning", &AGearboxPlayerController::IsActiveMomentRunning)
        .def("ViewShake", &AGearboxPlayerController::ViewShake)
        .def("UpdateShakeRotComponent", &AGearboxPlayerController::UpdateShakeRotComponent)
        .def("CheckShake", &AGearboxPlayerController::CheckShake)
        .def("StopViewShaking", &AGearboxPlayerController::StopViewShaking)
        .def("OnCameraShake", &AGearboxPlayerController::OnCameraShake)
        .def("ShakeView", &AGearboxPlayerController::ShakeView)
        .def("ClientDamageShake", &AGearboxPlayerController::ClientDamageShake)
        .def("ConsoleEcho", &AGearboxPlayerController::ConsoleEcho)
        .def("initialize", &AGearboxPlayerController::initialize)
        .def("PostBeginPlay", &AGearboxPlayerController::PostBeginPlay)
        .def("TryAndSpawnLeviathanChannel", &AGearboxPlayerController::TryAndSpawnLeviathanChannel)
        .def("GenerateNewSessionGuid", &AGearboxPlayerController::GenerateNewSessionGuid)
          ;
}