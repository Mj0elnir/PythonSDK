#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSize(py::object m)
{
    py::class_< UParticleModuleSize,  UParticleModuleSizeBase   >(m, "UParticleModuleSize")
        .def_readwrite("StartSize", &UParticleModuleSize::StartSize)
        .def("StaticClass", &UParticleModuleSize::StaticClass, py::return_value_policy::reference)
          ;
}