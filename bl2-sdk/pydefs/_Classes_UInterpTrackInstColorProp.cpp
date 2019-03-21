#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorProp(py::object m)
{
    py::class_< UInterpTrackInstColorProp,  UInterpTrackInst   >(m, "UInterpTrackInstColorProp")
        .def_readwrite("ColorProp", &UInterpTrackInstColorProp::ColorProp)
        .def_readwrite("ResetColor", &UInterpTrackInstColorProp::ResetColor)
        .def_readwrite("PropertyUpdateCallback", &UInterpTrackInstProperty::PropertyUpdateCallback)
        .def_readwrite("PropertyOuterObjectInst", &UInterpTrackInstProperty::PropertyOuterObjectInst)
        .def("StaticClass", &UInterpTrackInstColorProp::StaticClass, py::return_value_policy::reference)
          ;
}