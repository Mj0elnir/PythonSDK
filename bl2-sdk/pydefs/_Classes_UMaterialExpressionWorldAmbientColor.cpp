#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldAmbientColor(py::object m)
{
    py::class_< UMaterialExpressionWorldAmbientColor,  UMaterialExpression   >(m, "UMaterialExpressionWorldAmbientColor")
        .def("StaticClass", &UMaterialExpressionWorldAmbientColor::StaticClass, py::return_value_policy::reference)
          ;
}