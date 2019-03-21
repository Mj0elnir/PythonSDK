#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CompareBool(py::object m)
{
    py::class_< UBehavior_CompareBool,  UBehaviorBase   >(m, "UBehavior_CompareBool")
        .def("StaticClass", &UBehavior_CompareBool::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CompareBool::ApplyBehaviorToContext)
          ;
}