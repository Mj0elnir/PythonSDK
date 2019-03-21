#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointPreviewComponent(py::object m)
{
    py::class_< UWillowPopulationPointPreviewComponent,  UWillowPreviewComponent   >(m, "UWillowPopulationPointPreviewComponent")
        .def_readwrite("PointDef", &UWillowPopulationPointPreviewComponent::PointDef)
        .def("StaticClass", &UWillowPopulationPointPreviewComponent::StaticClass, py::return_value_policy::reference)
          ;
}