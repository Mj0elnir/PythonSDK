#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDynamicParameter(py::object m)
{
    py::class_< UMaterialExpressionDynamicParameter,  UMaterialExpression   >(m, "UMaterialExpressionDynamicParameter")
        .def_readwrite("ParamNames", &UMaterialExpressionDynamicParameter::ParamNames)
        .def("StaticClass", &UMaterialExpressionDynamicParameter::StaticClass, py::return_value_policy::reference)
          ;
}