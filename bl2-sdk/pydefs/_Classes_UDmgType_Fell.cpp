#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Fell(py::object m)
{
    py::class_< UDmgType_Fell,  UDamageType   >(m, "UDmgType_Fell")
        .def("StaticClass", &UDmgType_Fell::StaticClass, py::return_value_policy::reference)
          ;
}