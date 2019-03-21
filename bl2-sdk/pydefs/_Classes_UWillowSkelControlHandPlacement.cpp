#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControlHandPlacement(py::object m)
{
    py::class_< UWillowSkelControlHandPlacement,  USkelControlLimb   >(m, "UWillowSkelControlHandPlacement")
        .def_readwrite("TargetRef", &UWillowSkelControlHandPlacement::TargetRef)
        .def_readwrite("TargetAttachmentName", &UWillowSkelControlHandPlacement::TargetAttachmentName)
        .def("StaticClass", &UWillowSkelControlHandPlacement::StaticClass, py::return_value_policy::reference)
          ;
}