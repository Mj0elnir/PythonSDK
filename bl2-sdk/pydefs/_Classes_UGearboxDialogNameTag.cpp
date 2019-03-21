#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogNameTag(py::object m)
{
    py::class_< UGearboxDialogNameTag,  UGBXDefinition   >(m, "UGearboxDialogNameTag")
        .def_readwrite("NameTag", &UGearboxDialogNameTag::NameTag)
        .def_readwrite("ParentTag", &UGearboxDialogNameTag::ParentTag)
        .def("StaticClass", &UGearboxDialogNameTag::StaticClass, py::return_value_policy::reference)
          ;
}