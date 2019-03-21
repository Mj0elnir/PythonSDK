#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMeshCinematic(py::object m)
{
    py::class_< UActorFactorySkeletalMeshCinematic,  UActorFactorySkeletalMesh   >(m, "UActorFactorySkeletalMeshCinematic")
        .def("StaticClass", &UActorFactorySkeletalMeshCinematic::StaticClass, py::return_value_policy::reference)
          ;
}