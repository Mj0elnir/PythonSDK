#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInteractiveObjectGameStageGradeWeightData(py::object m)
{
    py::class_< FInteractiveObjectGameStageGradeWeightData,  FGameStageGradeWeightData   >(m, "FInteractiveObjectGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FInteractiveObjectGameStageGradeWeightData::GradeModifiers)
  ;
}