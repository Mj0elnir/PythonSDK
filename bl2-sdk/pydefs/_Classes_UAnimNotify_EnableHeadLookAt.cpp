#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_EnableHeadLookAt(py::object m)
{
    py::class_< UAnimNotify_EnableHeadLookAt,  UAnimNotify   >(m, "UAnimNotify_EnableHeadLookAt")
        .def_readwrite("HeadControlName", &UAnimNotify_EnableHeadLookAt::HeadControlName)
        .def("StaticClass", &UAnimNotify_EnableHeadLookAt::StaticClass, py::return_value_policy::reference)
          ;
}