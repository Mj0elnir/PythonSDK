#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeNearbyTarget(py::module &m)
{
    py::class_< UTargetIteratorPrioritizeNearbyTarget,  UTI_Prioritize   >(m, "UTargetIteratorPrioritizeNearbyTarget")
		.def_static("StaticClass", &UTargetIteratorPrioritizeNearbyTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxDistance", &UTargetIteratorPrioritizeNearbyTarget::MaxDistance)
          ;
}