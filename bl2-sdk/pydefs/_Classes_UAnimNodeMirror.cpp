#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeMirror(py::object m)
{
    py::class_< UAnimNodeMirror,  UAnimNodeBlendBase   >(m, "UAnimNodeMirror")
        .def("StaticClass", &UAnimNodeMirror::StaticClass, py::return_value_policy::reference)
          ;
}