#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionRotateAboutAxis(py::module &m)
{
    py::class_< UMaterialExpressionRotateAboutAxis,  UMaterialExpression   >(m, "UMaterialExpressionRotateAboutAxis")
		.def_static("StaticClass", &UMaterialExpressionRotateAboutAxis::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NormalizedRotationAxisAndAngle", &UMaterialExpressionRotateAboutAxis::NormalizedRotationAxisAndAngle)
        .def_readwrite("PositionOnAxis", &UMaterialExpressionRotateAboutAxis::PositionOnAxis)
        .def_readwrite("Position", &UMaterialExpressionRotateAboutAxis::Position)
          ;
}