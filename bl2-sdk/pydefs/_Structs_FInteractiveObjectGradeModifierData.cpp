#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInteractiveObjectGradeModifierData(py::object m)
{
    py::class_< FInteractiveObjectGradeModifierData >(m, "FInteractiveObjectGradeModifierData")
        .def_readwrite("CustomInteractiveObject", &FInteractiveObjectGradeModifierData::CustomInteractiveObject)
        .def_readwrite("DisplayName", &FInteractiveObjectGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FInteractiveObjectGradeModifierData::ExpLevel)
        .def_readwrite("IncludedCustomLootLists", &FInteractiveObjectGradeModifierData::IncludedCustomLootLists)
        .def_readwrite("CustomLoot", &FInteractiveObjectGradeModifierData::CustomLoot)
  ;
}