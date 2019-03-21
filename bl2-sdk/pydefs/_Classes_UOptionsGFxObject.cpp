#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOptionsGFxObject(py::object m)
{
    py::class_< UOptionsGFxObject,  UGFxObject   >(m, "UOptionsGFxObject")
        .def("StaticClass", &UOptionsGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetDescription", &UOptionsGFxObject::SetDescription)
        .def("SetTooltips", &UOptionsGFxObject::SetTooltips)
        .def("SetPlayerName", &UOptionsGFxObject::SetPlayerName)
        .def("SetHeader", &UOptionsGFxObject::SetHeader)
        .def("SetAspectRatio", &UOptionsGFxObject::SetAspectRatio)
          ;
}