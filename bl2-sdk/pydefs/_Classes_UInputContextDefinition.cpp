#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputContextDefinition(py::object m)
{
    py::class_< UInputContextDefinition,  UGBXDefinition   >(m, "UInputContextDefinition")
        .def_readwrite("InputActions", &UInputContextDefinition::InputActions)
        .def_readwrite("InputSets", &UInputContextDefinition::InputSets)
        .def("StaticClass", &UInputContextDefinition::StaticClass, py::return_value_policy::reference)
        .def("ContainsInputAction", &UInputContextDefinition::ContainsInputAction)
          ;
}