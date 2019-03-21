#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttributeEffectBehavior(py::object m)
{
    py::class_< UIAttributeEffectBehavior,  UInterface   >(m, "UIAttributeEffectBehavior")
        .def("StaticClass", &UIAttributeEffectBehavior::StaticClass, py::return_value_policy::reference)
          ;
}