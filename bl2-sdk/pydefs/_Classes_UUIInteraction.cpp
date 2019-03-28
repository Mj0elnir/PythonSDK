#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIInteraction(py::module &m)
{
    py::class_< UUIInteraction,  UInteraction   >(m, "UUIInteraction")
		.def_static("StaticClass", &UUIInteraction::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FExec", &UUIInteraction::VfTable_FExec)
        .def_readwrite("VfTable_FGlobalDataStoreClientManager", &UUIInteraction::VfTable_FGlobalDataStoreClientManager)
        .def_readwrite("VfTable_FCallbackEventDevice", &UUIInteraction::VfTable_FCallbackEventDevice)
        .def_readwrite("UIManager", &UUIInteraction::UIManager)
        .def_readwrite("UIManagerClass", &UUIInteraction::UIManagerClass)
        .def_readwrite("SceneClientClass", &UUIInteraction::SceneClientClass)
        .def_readwrite("SceneClient", &UUIInteraction::SceneClient)
        .def_readwrite("SupportedDoubleClickKeys", &UUIInteraction::SupportedDoubleClickKeys)
        .def_readwrite("DataStoreManager", &UUIInteraction::DataStoreManager)
        .def_readwrite("UIJoystickDeadZone", &UUIInteraction::UIJoystickDeadZone)
        .def_readwrite("UIAxisMultiplier", &UUIInteraction::UIAxisMultiplier)
        .def_readwrite("AxisRepeatDelay", &UUIInteraction::AxisRepeatDelay)
        .def_readwrite("MouseButtonRepeatDelay", &UUIInteraction::MouseButtonRepeatDelay)
        .def_readwrite("DoubleClickTriggerSeconds", &UUIInteraction::DoubleClickTriggerSeconds)
        .def_readwrite("DoubleClickPixelTolerance", &UUIInteraction::DoubleClickPixelTolerance)
        .def_readwrite("MouseButtonRepeatInfo", &UUIInteraction::MouseButtonRepeatInfo)
        .def_readwrite("ConfiguredAxisEmulationDefinitions", &UUIInteraction::ConfiguredAxisEmulationDefinitions)
        .def("NotifyGameSessionEnded", &UUIInteraction::NotifyGameSessionEnded)
        .def("eventGetNATType", &UUIInteraction::eventGetNATType)
        .def("eventCanCommunicate", &UUIInteraction::eventCanCommunicate)
        .def("GetConnectedGamepadCount", &UUIInteraction::GetConnectedGamepadCount)
        .def("IsGamepadConnected", &UUIInteraction::IsGamepadConnected)
        .def("GetNumGuestsLoggedIn", &UUIInteraction::GetNumGuestsLoggedIn)
        .def("GetLoggedInPlayerCount", &UUIInteraction::GetLoggedInPlayerCount)
        .def("eventIsLoggedIn", &UUIInteraction::eventIsLoggedIn)
        .def("eventHasLinkConnection", &UUIInteraction::eventHasLinkConnection)
        .def("GetLowestLoginStatusOfControllers", &UUIInteraction::GetLowestLoginStatusOfControllers)
        .def("eventGetLoginStatus", &UUIInteraction::eventGetLoginStatus)
        .def("NotifyPlayerRemoved", &UUIInteraction::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UUIInteraction::NotifyPlayerAdded)
        .def("GetLocalPlayer", &UUIInteraction::GetLocalPlayer, py::return_value_policy::reference)
        .def("GetDataStoreClient", &UUIInteraction::GetDataStoreClient, py::return_value_policy::reference)
        .def("GetPlayerControllerId", &UUIInteraction::GetPlayerControllerId)
        .def("GetPlayerIndex", &UUIInteraction::GetPlayerIndex)
        .def("GetPlayerCount", &UUIInteraction::GetPlayerCount)
          ;
}