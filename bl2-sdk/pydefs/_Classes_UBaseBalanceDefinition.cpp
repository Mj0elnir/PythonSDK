#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBaseBalanceDefinition(py::object m)
{
    py::class_< UBaseBalanceDefinition,  UGBXDefinition   >(m, "UBaseBalanceDefinition")
        .def("StaticClass", &UBaseBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def("ApplyGradeCustomizations", &UBaseBalanceDefinition::ApplyGradeCustomizations)
        .def("DoesSpawnChampion", &UBaseBalanceDefinition::DoesSpawnChampion)
        .def("GetDisplayNameAtGrade", &UBaseBalanceDefinition::GetDisplayNameAtGrade)
        .def("GetSpawnProbabilityModifier", &UBaseBalanceDefinition::GetSpawnProbabilityModifier)
        .def("IsGameStageSupported", &UBaseBalanceDefinition::IsGameStageSupported)
        .def("SelectGradeIndex", &UBaseBalanceDefinition::SelectGradeIndex)
          ;
}