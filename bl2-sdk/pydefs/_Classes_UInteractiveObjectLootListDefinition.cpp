#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInteractiveObjectLootListDefinition(py::object m)
{
    py::class_< UInteractiveObjectLootListDefinition,  UGBXDefinition   >(m, "UInteractiveObjectLootListDefinition")
        .def_readwrite("LootData", &UInteractiveObjectLootListDefinition::LootData)
        .def("StaticClass", &UInteractiveObjectLootListDefinition::StaticClass, py::return_value_policy::reference)
          ;
}