#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIDenDefinition(py::object m)
{
    py::class_< UWillowAIDenDefinition,  UAIDefinition   >(m, "UWillowAIDenDefinition")
        .def_readwrite("MinEngagementTime", &UWillowAIDenDefinition::MinEngagementTime)
        .def_readwrite("MinProvokedTime", &UWillowAIDenDefinition::MinProvokedTime)
        .def("StaticClass", &UWillowAIDenDefinition::StaticClass, py::return_value_policy::reference)
          ;
}