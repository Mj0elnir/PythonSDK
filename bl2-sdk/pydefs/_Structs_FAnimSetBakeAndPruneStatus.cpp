#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSetBakeAndPruneStatus(py::object m)
{
    py::class_< FAnimSetBakeAndPruneStatus >(m, "FAnimSetBakeAndPruneStatus")
        .def_readwrite("AnimSetName", &FAnimSetBakeAndPruneStatus::AnimSetName)
  ;
}