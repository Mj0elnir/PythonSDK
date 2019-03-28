#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearBuilderCustomizationData(py::module &m)
{
    py::class_< FGearBuilderCustomizationData >(m, "FGearBuilderCustomizationData")
        .def_readwrite("SortValue", &FGearBuilderCustomizationData::SortValue)
        .def_readwrite("BalanceDefinition", &FGearBuilderCustomizationData::BalanceDefinition)
  ;
}