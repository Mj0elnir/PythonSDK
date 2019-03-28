#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLensFlareElement(py::module &m)
{
    py::class_< FLensFlareElement >(m, "FLensFlareElement")
        .def_readwrite("ElementName", &FLensFlareElement::ElementName)
        .def_readwrite("RayDistance", &FLensFlareElement::RayDistance)
        .def_readwrite("Size", &FLensFlareElement::Size)
        .def_readwrite("LFMaterials", &FLensFlareElement::LFMaterials)
        .def_readwrite("LFMaterialIndex", &FLensFlareElement::LFMaterialIndex)
        .def_readwrite("Scaling", &FLensFlareElement::Scaling)
        .def_readwrite("AxisScaling", &FLensFlareElement::AxisScaling)
        .def_readwrite("Rotation", &FLensFlareElement::Rotation)
        .def_readwrite("Color", &FLensFlareElement::Color)
        .def_readwrite("Alpha", &FLensFlareElement::Alpha)
        .def_readwrite("Offset", &FLensFlareElement::Offset)
        .def_readwrite("DistMap_Scale", &FLensFlareElement::DistMap_Scale)
        .def_readwrite("DistMap_Color", &FLensFlareElement::DistMap_Color)
        .def_readwrite("DistMap_Alpha", &FLensFlareElement::DistMap_Alpha)
  ;
}