#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexStaticDestructibleComponent(py::object m)
{
    py::class_< UApexStaticDestructibleComponent,  UApexComponentBase   >(m, "UApexStaticDestructibleComponent")
        .def_readwrite("SleepEnergyThreshold", &UApexStaticDestructibleComponent::SleepEnergyThreshold)
        .def_readwrite("SleepDamping", &UApexStaticDestructibleComponent::SleepDamping)
        .def_readwrite("ApexDestructibleActor", &UApexStaticDestructibleComponent::ApexDestructibleActor)
        .def_readwrite("ApexDestructiblePreview", &UApexStaticDestructibleComponent::ApexDestructiblePreview)
        .def("StaticClass", &UApexStaticDestructibleComponent::StaticClass, py::return_value_policy::reference)
          ;
}