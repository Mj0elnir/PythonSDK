#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBrushComponent(py::module &m)
{
    py::class_< UBrushComponent,  UPrimitiveComponent   >(m, "UBrushComponent")
		.def_static("StaticClass", &UBrushComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Brush", &UBrushComponent::Brush)
        .def_readwrite("BrushAggGeom", &UBrushComponent::BrushAggGeom)
        .def_readwrite("BrushPhysDesc", &UBrushComponent::BrushPhysDesc)
        .def_readwrite("CachedPhysBrushData", &UBrushComponent::CachedPhysBrushData)
        .def_readwrite("CachedPhysBrushDataVersion", &UBrushComponent::CachedPhysBrushDataVersion)
          ;
}