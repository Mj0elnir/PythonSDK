#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLightToggleable(py::object m)
{
    py::class_< ASpotLightToggleable,  AActor   >(m, "ASpotLightToggleable")
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("StaticClass", &ASpotLightToggleable::StaticClass, py::return_value_policy::reference)
        .def("ApplyCheckpointRecord", &ASpotLightToggleable::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ASpotLightToggleable::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ASpotLightToggleable::ShouldSaveForCheckpoint)
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
          ;
}