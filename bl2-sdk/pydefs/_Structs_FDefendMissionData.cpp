#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDefendMissionData(py::object m)
{
    py::class_< FDefendMissionData >(m, "FDefendMissionData")
        .def_readwrite("Objective", &FDefendMissionData::Objective)
        .def_readwrite("Target", &FDefendMissionData::Target)
        .def_readonly("UnknownData00", &FDefendMissionData::UnknownData00)
  ;
}