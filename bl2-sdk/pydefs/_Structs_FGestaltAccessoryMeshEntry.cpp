#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryMeshEntry(py::object m)
{
    py::class_< FGestaltAccessoryMeshEntry >(m, "FGestaltAccessoryMeshEntry")
        .def_readwrite("MeshName", &FGestaltAccessoryMeshEntry::MeshName)
        .def_readwrite("GestaltAccessoryGroupList", &FGestaltAccessoryMeshEntry::GestaltAccessoryGroupList)
  ;
}