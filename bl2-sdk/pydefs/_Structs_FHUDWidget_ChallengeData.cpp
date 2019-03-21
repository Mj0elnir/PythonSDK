#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHUDWidget_ChallengeData(py::object m)
{
    py::class_< FHUDWidget_ChallengeData >(m, "FHUDWidget_ChallengeData")
        .def_readwrite("Challenge", &FHUDWidget_ChallengeData::Challenge)
        .def_readwrite("LevelIndex", &FHUDWidget_ChallengeData::LevelIndex)
        .def_readwrite("ConditionIndex", &FHUDWidget_ChallengeData::ConditionIndex)
        .def_readwrite("CurrStatVal", &FHUDWidget_ChallengeData::CurrStatVal)
        .def_readwrite("GoalStatVal", &FHUDWidget_ChallengeData::GoalStatVal)
  ;
}