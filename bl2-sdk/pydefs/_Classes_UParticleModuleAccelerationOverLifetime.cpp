#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAccelerationOverLifetime(py::object m)
{
    py::class_< UParticleModuleAccelerationOverLifetime,  UParticleModuleAccelerationBase   >(m, "UParticleModuleAccelerationOverLifetime")
        .def_readwrite("AccelOverLife", &UParticleModuleAccelerationOverLifetime::AccelOverLife)
        .def("StaticClass", &UParticleModuleAccelerationOverLifetime::StaticClass, py::return_value_policy::reference)
          ;
}