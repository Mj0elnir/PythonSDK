#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIHitRegionInfoProvider(py::object m)
{
    py::class_< UIHitRegionInfoProvider,  UInterface   >(m, "UIHitRegionInfoProvider")
        .def("StaticClass", &UIHitRegionInfoProvider::StaticClass, py::return_value_policy::reference)
        .def("GetHitRegions", &UIHitRegionInfoProvider::GetHitRegions)
          ;
}