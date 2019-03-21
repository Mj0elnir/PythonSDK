#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWaterVolume(py::object m)
{
    py::class_< AWaterVolume,  APhysicsVolume   >(m, "AWaterVolume")
        .def_readwrite("EntrySound", &AWaterVolume::EntrySound)
        .def_readwrite("EntryActor", &AWaterVolume::EntryActor)
        .def_readwrite("ExitSound", &AWaterVolume::ExitSound)
        .def_readwrite("ExitActor", &AWaterVolume::ExitActor)
        .def("StaticClass", &AWaterVolume::StaticClass, py::return_value_policy::reference)
        .def("PlayExitSplash", &AWaterVolume::PlayExitSplash)
        .def("eventUnTouch", &AWaterVolume::eventUnTouch)
        .def("PlayEntrySplash", &AWaterVolume::PlayEntrySplash)
        .def("eventTouch", &AWaterVolume::eventTouch)
          ;
}