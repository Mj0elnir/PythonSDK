#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectiveStatusData(py::object m)
{
    py::class_< FObjectiveStatusData >(m, "FObjectiveStatusData")
        .def_readwrite("Objectives", &FObjectiveStatusData::Objectives)
  ;
}