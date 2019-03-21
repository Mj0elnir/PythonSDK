#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_MaxDistance(py::object m)
{
    py::class_< UAttackLocation_MaxDistance,  UAttackLocation   >(m, "UAttackLocation_MaxDistance")
        .def_readwrite("MaxDistance", &UAttackLocation_MaxDistance::MaxDistance)
        .def("StaticClass", &UAttackLocation_MaxDistance::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation_MaxDistance::ValidLocation)
          ;
}