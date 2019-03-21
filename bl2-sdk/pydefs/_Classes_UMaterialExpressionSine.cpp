#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSine(py::object m)
{
    py::class_< UMaterialExpressionSine,  UMaterialExpression   >(m, "UMaterialExpressionSine")
        .def_readwrite("Input", &UMaterialExpressionSine::Input)
        .def_readwrite("Period", &UMaterialExpressionSine::Period)
        .def("StaticClass", &UMaterialExpressionSine::StaticClass, py::return_value_policy::reference)
          ;
}