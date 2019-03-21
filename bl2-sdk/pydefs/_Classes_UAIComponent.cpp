#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIComponent(py::object m)
{
    py::class_< UAIComponent,  UActorComponent   >(m, "UAIComponent")
        .def_readwrite("UpdateRate", &UAIComponent::UpdateRate)
        .def_readwrite("AI", &UAIComponent::AI)
        .def_readonly("UnknownData00", &UAIComponent::UnknownData00)
        .def_readwrite("AIDef", &UAIComponent::AIDef)
        .def_readwrite("LastStateUpdateTime", &UAIComponent::LastStateUpdateTime)
        .def_readwrite("CurrentState", &UAIComponent::CurrentState)
        .def_readwrite("ResourceData", &UAIComponent::ResourceData)
        .def_readwrite("CurrentTarget", &UAIComponent::CurrentTarget)
        .def_readwrite("ScriptedTarget", &UAIComponent::ScriptedTarget)
        .def_readwrite("LastTargetUpdateTime", &UAIComponent::LastTargetUpdateTime)
        .def_readwrite("Targets", &UAIComponent::Targets)
        .def_readwrite("TargetingDef", &UAIComponent::TargetingDef)
        .def_readwrite("MindTargetInfoClass", &UAIComponent::MindTargetInfoClass)
        .def_readwrite("Holds", &UAIComponent::Holds)
        .def_readwrite("TargetHolds", &UAIComponent::TargetHolds)
        .def_readwrite("MovementHolds", &UAIComponent::MovementHolds)
        .def_readwrite("DemigodHolds", &UAIComponent::DemigodHolds)
        .def_readwrite("GodHolds", &UAIComponent::GodHolds)
        .def_readwrite("DialogHolds", &UAIComponent::DialogHolds)
        .def("StaticClass", &UAIComponent::StaticClass, py::return_value_policy::reference)
        .def("GetAIRangeTime", &UAIComponent::GetAIRangeTime)
        .def("DrawAITree", &UAIComponent::DrawAITree)
        .def("LogDemigodHolds", &UAIComponent::LogDemigodHolds)
        .def("ReleaseDialog", &UAIComponent::ReleaseDialog)
        .def("HoldDialog", &UAIComponent::HoldDialog)
        .def("DialogOnHold", &UAIComponent::DialogOnHold)
        .def("ReleaseGod", &UAIComponent::ReleaseGod)
        .def("HoldGod", &UAIComponent::HoldGod)
        .def("GodOnHold", &UAIComponent::GodOnHold)
        .def("ReleaseDemigod", &UAIComponent::ReleaseDemigod)
        .def("HoldDemigod", &UAIComponent::HoldDemigod)
        .def("DemigodOnHold", &UAIComponent::DemigodOnHold)
        .def("ReleaseMovement", &UAIComponent::ReleaseMovement)
        .def("HoldMovement", &UAIComponent::HoldMovement)
        .def("MovementOnHold", &UAIComponent::MovementOnHold)
        .def("ReleaseTarget", &UAIComponent::ReleaseTarget)
        .def("HoldTarget", &UAIComponent::HoldTarget)
        .def("TargetOnHold", &UAIComponent::TargetOnHold)
        .def("Release", &UAIComponent::Release)
        .def("Hold", &UAIComponent::Hold)
        .def("OnHold", &UAIComponent::OnHold)
        .def("ForceUpdateTargets", &UAIComponent::ForceUpdateTargets)
        .def("TargetChanged", &UAIComponent::TargetChanged)
        .def("SetTarget", &UAIComponent::SetTarget)
        .def("SetScriptedTarget", &UAIComponent::SetScriptedTarget)
        .def("GetTargetRecordFor", &UAIComponent::GetTargetRecordFor, py::return_value_policy::reference)
        .def("GetTargetRecord", &UAIComponent::GetTargetRecord, py::return_value_policy::reference)
        .def("IsTarget", &UAIComponent::IsTarget)
        .def("GetTarget", &UAIComponent::GetTarget, py::return_value_policy::reference)
        .def("HasTarget", &UAIComponent::HasTarget)
        .def("ShouldRemoveTarget", &UAIComponent::ShouldRemoveTarget)
        .def("TargetRemoved", &UAIComponent::TargetRemoved)
        .def("ForceRemoveTarget", &UAIComponent::ForceRemoveTarget)
        .def("ValidCurrentTarget", &UAIComponent::ValidCurrentTarget)
        .def("ValidTarget", &UAIComponent::ValidTarget)
        .def("PrioritizeTarget", &UAIComponent::PrioritizeTarget)
        .def("CalcTargetInfo", &UAIComponent::CalcTargetInfo)
        .def("ChooseBestTarget", &UAIComponent::ChooseBestTarget)
        .def("InheritTargets", &UAIComponent::InheritTargets)
        .def("RemoveTargets", &UAIComponent::RemoveTargets)
        .def("FindTargets", &UAIComponent::FindTargets)
        .def("GetTargets", &UAIComponent::GetTargets)
        .def("InitializeTargetRecord", &UAIComponent::InitializeTargetRecord)
        .def("NotifyAttackedBy", &UAIComponent::NotifyAttackedBy)
        .def("AddTarget", &UAIComponent::AddTarget, py::return_value_policy::reference)
        .def("GetParentComponent", &UAIComponent::GetParentComponent, py::return_value_policy::reference)
        .def("GetAllegiance", &UAIComponent::GetAllegiance, py::return_value_policy::reference)
        .def("ClearState", &UAIComponent::ClearState)
        .def("ActivateEvent", &UAIComponent::ActivateEvent)
          ;
}