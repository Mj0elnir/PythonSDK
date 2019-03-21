#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APointLight(py::object m)
{
    py::class_< APointLight,  ALight   >(m, "APointLight")
        .def("StaticClass", &APointLight::StaticClass, py::return_value_policy::reference)
          ;
}