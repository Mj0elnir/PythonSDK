#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxForceField(py::module &m)
{
    py::class_< ANxForceField,  AActor   >(m, "ANxForceField")
		.def_static("StaticClass", &ANxForceField::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ExcludeChannel", &ANxForceField::ExcludeChannel)
        .def_readwrite("CollideWithChannels", &ANxForceField::CollideWithChannels)
        .def_readwrite("RBChannel", &ANxForceField::RBChannel)
        .def_readwrite("ForceField", &ANxForceField::ForceField)
        .def_readwrite("ConvexMeshes", &ANxForceField::ConvexMeshes)
        .def_readwrite("ExclusionShapes", &ANxForceField::ExclusionShapes)
        .def_readwrite("ExclusionShapePoses", &ANxForceField::ExclusionShapePoses)
        .def_readwrite("U2NRotation", &ANxForceField::U2NRotation)
        .def_readwrite("SceneIndex", &ANxForceField::SceneIndex)
        .def("OnToggle", &ANxForceField::OnToggle)
        .def("DoInitRBPhys", &ANxForceField::DoInitRBPhys)
          ;
}