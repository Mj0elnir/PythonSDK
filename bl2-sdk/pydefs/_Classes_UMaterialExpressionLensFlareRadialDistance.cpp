#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareRadialDistance(py::object m)
{
    py::class_< UMaterialExpressionLensFlareRadialDistance,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareRadialDistance")
        .def("StaticClass", &UMaterialExpressionLensFlareRadialDistance::StaticClass, py::return_value_policy::reference)
          ;
}