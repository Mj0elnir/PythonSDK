#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UByteProperty(py::object m)
{
    py::class_< UByteProperty,  UProperty   >(m, "UByteProperty")
        .def_readonly("UnknownData00", &UByteProperty::UnknownData00)
        .def("StaticClass", &UByteProperty::StaticClass, py::return_value_policy::reference)
          ;
}