#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTeleportReachSpec(py::object m)
{
    py::class_< UTeleportReachSpec,  UReachSpec   >(m, "UTeleportReachSpec")
        .def("StaticClass", &UTeleportReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}