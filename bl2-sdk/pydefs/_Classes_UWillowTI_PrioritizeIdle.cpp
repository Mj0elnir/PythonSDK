#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeIdle(py::object m)
{
    py::class_< UWillowTI_PrioritizeIdle,  UTI_Prioritize   >(m, "UWillowTI_PrioritizeIdle")
        .def_readwrite("MaxAICurrentlyTargeting", &UWillowTI_PrioritizeIdle::MaxAICurrentlyTargeting)
        .def("StaticClass", &UWillowTI_PrioritizeIdle::StaticClass, py::return_value_policy::reference)
          ;
}