#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavigationPoint_FCheckpointRecord(py::object m)
{
    py::class_< ANavigationPoint_FCheckpointRecord >(m, "ANavigationPoint_FCheckpointRecord")
  ;
}