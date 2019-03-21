#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAutoNavMeshPathObstacleUnregister(py::object m)
{
    py::class_< UAutoNavMeshPathObstacleUnregister,  UObject   >(m, "UAutoNavMeshPathObstacleUnregister")
        .def_readwrite("PathObstacleRef", &UAutoNavMeshPathObstacleUnregister::PathObstacleRef)
        .def_readonly("UnknownData00", &UAutoNavMeshPathObstacleUnregister::UnknownData00)
        .def("StaticClass", &UAutoNavMeshPathObstacleUnregister::StaticClass, py::return_value_policy::reference)
          ;
}