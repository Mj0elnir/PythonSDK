#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLensFlareSourceDistance(py::object m)
{
    py::class_< UMaterialExpressionLensFlareSourceDistance,  UMaterialExpression   >(m, "UMaterialExpressionLensFlareSourceDistance")
        .def("StaticClass", &UMaterialExpressionLensFlareSourceDistance::StaticClass, py::return_value_policy::reference)
          ;
}