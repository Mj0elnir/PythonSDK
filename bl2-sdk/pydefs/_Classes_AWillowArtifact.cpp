#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowArtifact(py::object m)
{
    py::class_< AWillowArtifact,  AWillowEquipAbleItem   >(m, "AWillowArtifact")
        .def("StaticClass", &AWillowArtifact::StaticClass, py::return_value_policy::reference)
        .def("GetItemCardTopSectionString", &AWillowArtifact::GetItemCardTopSectionString)
        .def("GetAttributePresentationOverride", &AWillowArtifact::GetAttributePresentationOverride, py::return_value_policy::reference)
        .def("SetElementalFrame", &AWillowArtifact::SetElementalFrame)
        .def("ValidateDefinitions", &AWillowArtifact::ValidateDefinitions)
        .def("GetEquippedStat", &AWillowArtifact::GetEquippedStat)
        .def("eventGetEquipmentLocation", &AWillowArtifact::eventGetEquipmentLocation)
          ;
}