#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AHeightFog(py::object m)
{
    py::class_< AHeightFog,  AInfo   >(m, "AHeightFog")
        .def_readwrite("Component", &AHeightFog::Component)
        .def("StaticClass", &AHeightFog::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AHeightFog::OnToggle)
        .def("eventReplicatedEvent", &AHeightFog::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AHeightFog::eventPostBeginPlay)
          ;
}