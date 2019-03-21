#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddMissionDirectives(py::object m)
{
    py::class_< UBehavior_AddMissionDirectives,  UBehaviorBase   >(m, "UBehavior_AddMissionDirectives")
        .def_readwrite("MissionDirectives", &UBehavior_AddMissionDirectives::MissionDirectives)
        .def("StaticClass", &UBehavior_AddMissionDirectives::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AddMissionDirectives::ApplyBehaviorToContext)
          ;
}