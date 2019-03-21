#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPlayerInput(py::object m)
{
    py::class_< UWillowPlayerInput,  UPlayerInput   >(m, "UWillowPlayerInput")
        .def_readwrite("DebugBindOverrideKeyName", &UWillowPlayerInput::DebugBindOverrideKeyName)
        .def_readwrite("ButtonHoldEventTime", &UWillowPlayerInput::ButtonHoldEventTime)
        .def_readwrite("LastDuckTime", &UWillowPlayerInput::LastDuckTime)
        .def_readwrite("ForcedDoubleClick", &UWillowPlayerInput::ForcedDoubleClick)
        .def_readwrite("RunWalkTransitionThreshold", &UWillowPlayerInput::RunWalkTransitionThreshold)
        .def_readwrite("TimeSinceLastMovement", &UWillowPlayerInput::TimeSinceLastMovement)
        .def_readwrite("CurrentInputContextName", &UWillowPlayerInput::CurrentInputContextName)
        .def_readwrite("CurrentInputContexts", &UWillowPlayerInput::CurrentInputContexts)
        .def_readwrite("Axes", &UWillowPlayerInput::Axes)
        .def_readonly("UnknownData00", &UWillowPlayerInput::UnknownData00)
        .def_readwrite("DeviceLookAxes", &UWillowPlayerInput::DeviceLookAxes)
        .def_readwrite("Buttons", &UWillowPlayerInput::Buttons)
        .def_readonly("UnknownData01", &UWillowPlayerInput::UnknownData01)
        .def_readwrite("LatentButtons", &UWillowPlayerInput::LatentButtons)
        .def_readonly("UnknownData02", &UWillowPlayerInput::UnknownData02)
        .def_readwrite("PreSwitchAvailableActions", &UWillowPlayerInput::PreSwitchAvailableActions)
        .def_readwrite("ControllerSensitivityX", &UWillowPlayerInput::ControllerSensitivityX)
        .def_readwrite("ControllerSensitivityY", &UWillowPlayerInput::ControllerSensitivityY)
        .def_readwrite("ControllerPresetIndex", &UWillowPlayerInput::ControllerPresetIndex)
        .def_readwrite("KeyRebindings", &UWillowPlayerInput::KeyRebindings)
        .def_readwrite("ControllerRebindings", &UWillowPlayerInput::ControllerRebindings)
        .def_readwrite("EndCrouchOnNextForwardMovement", &UWillowPlayerInput::EndCrouchOnNextForwardMovement)
        .def("StaticClass", &UWillowPlayerInput::StaticClass, py::return_value_policy::reference)
        .def("ReleasedEndDuck", &UWillowPlayerInput::ReleasedEndDuck)
        .def("PressedEndDuck", &UWillowPlayerInput::PressedEndDuck)
        .def("ToggleViewAccel", &UWillowPlayerInput::ToggleViewAccel)
        .def("SetControllerSensitivityY", &UWillowPlayerInput::SetControllerSensitivityY)
        .def("SetControllerSensitivityX", &UWillowPlayerInput::SetControllerSensitivityX)
        .def("SetControllerSensitivity", &UWillowPlayerInput::SetControllerSensitivity)
        .def("CheckForDoubleClickMove", &UWillowPlayerInput::CheckForDoubleClickMove)
        .def("Jump", &UWillowPlayerInput::Jump)
        .def("DuckReleased", &UWillowPlayerInput::DuckReleased)
        .def("DuckPressed", &UWillowPlayerInput::DuckPressed)
        .def("SprintReleased", &UWillowPlayerInput::SprintReleased)
        .def("SprintPressed", &UWillowPlayerInput::SprintPressed)
        .def("TradePressed", &UWillowPlayerInput::TradePressed)
        .def("ReviveReleased", &UWillowPlayerInput::ReviveReleased)
        .def("RevivePressed", &UWillowPlayerInput::RevivePressed)
        .def("eventPlayerInput", &UWillowPlayerInput::eventPlayerInput)
        .def("IsReviveHeld", &UWillowPlayerInput::IsReviveHeld)
        .def("InputAllowsSprint", &UWillowPlayerInput::InputAllowsSprint)
        .def("SetCurrentContextType", &UWillowPlayerInput::SetCurrentContextType)
        .def("SetInputContext", &UWillowPlayerInput::SetInputContext)
        .def("PostChangeInputContext", &UWillowPlayerInput::PostChangeInputContext)
        .def("PreChangeInputContext", &UWillowPlayerInput::PreChangeInputContext)
        .def("UpdateLatentButtons", &UWillowPlayerInput::UpdateLatentButtons)
        .def("PostProcessInput", &UWillowPlayerInput::PostProcessInput)
        .def("PreProcessInput", &UWillowPlayerInput::PreProcessInput)
        .def("InitInputSystem", &UWillowPlayerInput::InitInputSystem)
        .def("ProcessDeviceLookAxes", &UWillowPlayerInput::ProcessDeviceLookAxes)
        .def("IsActionAvailable", &UWillowPlayerInput::IsActionAvailable)
        .def("DecodeButton", &UWillowPlayerInput::DecodeButton)
        .def("SetControllerRebindings", &UWillowPlayerInput::SetControllerRebindings)
        .def("SetKeyRebindings", &UWillowPlayerInput::SetKeyRebindings)
        .def("WriteColumnText", &UWillowPlayerInput::WriteColumnText)
        .def("ReleasePressedButtons", &UWillowPlayerInput::ReleasePressedButtons)
        .def("ResetButtonState", &UWillowPlayerInput::ResetButtonState)
        .def("GetKeyForAction", &UWillowPlayerInput::GetKeyForAction)
        .def("SetupInputDevices", &UWillowPlayerInput::SetupInputDevices)
          ;
}