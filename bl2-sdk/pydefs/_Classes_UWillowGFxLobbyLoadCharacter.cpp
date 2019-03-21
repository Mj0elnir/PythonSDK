#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxLobbyLoadCharacter(py::object m)
{
    py::class_< UWillowGFxLobbyLoadCharacter,  UWillowGFxMovie   >(m, "UWillowGFxLobbyLoadCharacter")
        .def_readwrite("LoadCharacterLobby", &UWillowGFxLobbyLoadCharacter::LoadCharacterLobby)
        .def_readwrite("DisplayedCharacterDataList", &UWillowGFxLobbyLoadCharacter::DisplayedCharacterDataList)
        .def_readwrite("SaveGameHelper", &UWillowGFxLobbyLoadCharacter::SaveGameHelper)
        .def_readwrite("DefaultNewCharacterList", &UWillowGFxLobbyLoadCharacter::DefaultNewCharacterList)
        .def_readwrite("MostRecentLoadInfo", &UWillowGFxLobbyLoadCharacter::MostRecentLoadInfo)
        .def_readwrite("LoadingCharacterDlg", &UWillowGFxLobbyLoadCharacter::LoadingCharacterDlg)
        .def_readwrite("Platform", &UWillowGFxLobbyLoadCharacter::Platform)
        .def_readwrite("CachedSaveGame", &UWillowGFxLobbyLoadCharacter::CachedSaveGame)
        .def_readwrite("AvailableSlots", &UWillowGFxLobbyLoadCharacter::AvailableSlots)
        .def_readwrite("TopSlotDataIndex", &UWillowGFxLobbyLoadCharacter::TopSlotDataIndex)
        .def_readwrite("SelectedDataIndex", &UWillowGFxLobbyLoadCharacter::SelectedDataIndex)
        .def_readwrite("LastActionTime", &UWillowGFxLobbyLoadCharacter::LastActionTime)
        .def_readwrite("LastDeletedPlayedTime", &UWillowGFxLobbyLoadCharacter::LastDeletedPlayedTime)
        .def_readwrite("LastDeletedLevel", &UWillowGFxLobbyLoadCharacter::LastDeletedLevel)
        .def_readwrite("LastDeletedGuid", &UWillowGFxLobbyLoadCharacter::LastDeletedGuid)
        .def_readwrite("LastClickedDataIndex", &UWillowGFxLobbyLoadCharacter::LastClickedDataIndex)
        .def("StaticClass", &UWillowGFxLobbyLoadCharacter::StaticClass, py::return_value_policy::reference)
        .def("OnTick", &UWillowGFxLobbyLoadCharacter::OnTick)
        .def("SetTickInterval", &UWillowGFxLobbyLoadCharacter::SetTickInterval)
        .def("CanShowStorageSelector", &UWillowGFxLobbyLoadCharacter::CanShowStorageSelector)
        .def("StorageDeviceChanged", &UWillowGFxLobbyLoadCharacter::StorageDeviceChanged)
        .def("HideLoadingSavedGameDialog", &UWillowGFxLobbyLoadCharacter::HideLoadingSavedGameDialog)
        .def("ShowLoadingSavedGameDialog", &UWillowGFxLobbyLoadCharacter::ShowLoadingSavedGameDialog)
        .def("NotifyLoadGameStarted", &UWillowGFxLobbyLoadCharacter::NotifyLoadGameStarted)
        .def("PS3_CheckForSaveList", &UWillowGFxLobbyLoadCharacter::PS3_CheckForSaveList)
        .def("PS3_CheckForLoadGame", &UWillowGFxLobbyLoadCharacter::PS3_CheckForLoadGame)
        .def("PS3_BeginLoadGame", &UWillowGFxLobbyLoadCharacter::PS3_BeginLoadGame)
        .def("FinishConditionalLoadGame", &UWillowGFxLobbyLoadCharacter::FinishConditionalLoadGame)
        .def("ConditionalLoadGame", &UWillowGFxLobbyLoadCharacter::ConditionalLoadGame)
        .def("StripSavePath", &UWillowGFxLobbyLoadCharacter::StripSavePath)
        .def("FinishLoadGame", &UWillowGFxLobbyLoadCharacter::FinishLoadGame)
        .def("GetSaveList", &UWillowGFxLobbyLoadCharacter::GetSaveList)
        .def("DeviceSelectionDone", &UWillowGFxLobbyLoadCharacter::DeviceSelectionDone)
        .def("SetupCharacterMenu", &UWillowGFxLobbyLoadCharacter::SetupCharacterMenu)
        .def("SetTipText", &UWillowGFxLobbyLoadCharacter::SetTipText)
        .def("OnPurchaseCanceled", &UWillowGFxLobbyLoadCharacter::OnPurchaseCanceled)
        .def("MarketplaceDownloadComplete", &UWillowGFxLobbyLoadCharacter::MarketplaceDownloadComplete)
        .def("OnPurchaseRequest", &UWillowGFxLobbyLoadCharacter::OnPurchaseRequest)
        .def("OnSlotClicked", &UWillowGFxLobbyLoadCharacter::OnSlotClicked)
        .def("FocusOn", &UWillowGFxLobbyLoadCharacter::FocusOn)
        .def("OnDeleteEnded", &UWillowGFxLobbyLoadCharacter::OnDeleteEnded)
        .def("OnDeleteStarted", &UWillowGFxLobbyLoadCharacter::OnDeleteStarted)
        .def("TryDeleteSelectedCharacter", &UWillowGFxLobbyLoadCharacter::TryDeleteSelectedCharacter)
        .def("ScrollDown", &UWillowGFxLobbyLoadCharacter::ScrollDown)
        .def("ScrollUp", &UWillowGFxLobbyLoadCharacter::ScrollUp)
        .def("RefreshCharacterList", &UWillowGFxLobbyLoadCharacter::RefreshCharacterList)
        .def("SetListSelection", &UWillowGFxLobbyLoadCharacter::SetListSelection)
        .def("SavesUpdated", &UWillowGFxLobbyLoadCharacter::SavesUpdated)
        .def("ResolvePlaythrough", &UWillowGFxLobbyLoadCharacter::ResolvePlaythrough)
        .def("HandleInputKey", &UWillowGFxLobbyLoadCharacter::HandleInputKey)
        .def("BeginClose", &UWillowGFxLobbyLoadCharacter::BeginClose)
        .def("eventOnClose", &UWillowGFxLobbyLoadCharacter::eventOnClose)
        .def("extLoadCharacterLobbyReady", &UWillowGFxLobbyLoadCharacter::extLoadCharacterLobbyReady)
        .def("eventStart", &UWillowGFxLobbyLoadCharacter::eventStart)
        .def("OnCloseNoLoad", &UWillowGFxLobbyLoadCharacter::OnCloseNoLoad)
        .def("OnLoadGame", &UWillowGFxLobbyLoadCharacter::OnLoadGame)
          ;
}