#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGearLikenessConsumer(py::object m)
{
    py::class_< UIGearLikenessConsumer,  UInterface   >(m, "UIGearLikenessConsumer")
        .def("StaticClass", &UIGearLikenessConsumer::StaticClass, py::return_value_policy::reference)
        .def("ShouldRefreshLikenessOf", &UIGearLikenessConsumer::ShouldRefreshLikenessOf)
        .def("AssumeLikenessOf", &UIGearLikenessConsumer::AssumeLikenessOf)
          ;
}