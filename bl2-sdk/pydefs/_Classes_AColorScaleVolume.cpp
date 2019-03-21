#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AColorScaleVolume(py::object m)
{
    py::class_< AColorScaleVolume,  AVolume   >(m, "AColorScaleVolume")
        .def_readwrite("ColorScale", &AColorScaleVolume::ColorScale)
        .def_readwrite("InterpTime", &AColorScaleVolume::InterpTime)
        .def("StaticClass", &AColorScaleVolume::StaticClass, py::return_value_policy::reference)
        .def("eventUnTouch", &AColorScaleVolume::eventUnTouch)
        .def("eventTouch", &AColorScaleVolume::eventTouch)
          ;
}