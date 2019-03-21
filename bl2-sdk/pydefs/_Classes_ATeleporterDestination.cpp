#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATeleporterDestination(py::object m)
{
    py::class_< ATeleporterDestination,  AActor   >(m, "ATeleporterDestination")
        .def_readwrite("ExitPoints", &ATeleporterDestination::ExitPoints)
        .def_readwrite("ExitPointsCounter", &ATeleporterDestination::ExitPointsCounter)
        .def("StaticClass", &ATeleporterDestination::StaticClass, py::return_value_policy::reference)
        .def("GetNextExitPoint", &ATeleporterDestination::GetNextExitPoint, py::return_value_policy::reference)
        .def("OnToggle", &ATeleporterDestination::OnToggle)
          ;
}