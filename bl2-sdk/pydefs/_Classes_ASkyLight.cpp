#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkyLight(py::object m)
{
    py::class_< ASkyLight,  ALight   >(m, "ASkyLight")
        .def("StaticClass", &ASkyLight::StaticClass, py::return_value_policy::reference)
          ;
}