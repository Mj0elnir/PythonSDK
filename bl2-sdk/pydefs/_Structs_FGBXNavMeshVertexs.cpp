#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshVertex(py::object m)
{
    py::class_< FGBXNavMeshVertex,  FVector   >(m, "FGBXNavMeshVertex")
  ;
}