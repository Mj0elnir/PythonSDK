#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_PrismaticSetup(py::object m)
{
    py::class_< URB_PrismaticSetup,  URB_ConstraintSetup   >(m, "URB_PrismaticSetup")
        .def("StaticClass", &URB_PrismaticSetup::StaticClass, py::return_value_policy::reference)
          ;
}