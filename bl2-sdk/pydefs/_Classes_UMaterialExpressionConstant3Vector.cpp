#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant3Vector(py::object m)
{
    py::class_< UMaterialExpressionConstant3Vector,  UMaterialExpression   >(m, "UMaterialExpressionConstant3Vector")
        .def_readwrite("R", &UMaterialExpressionConstant3Vector::R)
        .def_readwrite("G", &UMaterialExpressionConstant3Vector::G)
        .def_readwrite("B", &UMaterialExpressionConstant3Vector::B)
        .def("StaticClass", &UMaterialExpressionConstant3Vector::StaticClass, py::return_value_policy::reference)
          ;
}