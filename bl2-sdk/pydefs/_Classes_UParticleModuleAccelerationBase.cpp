#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAccelerationBase(py::module &m)
{
    py::class_< UParticleModuleAccelerationBase,  UParticleModule   >(m, "UParticleModuleAccelerationBase")
		.def_static("StaticClass", &UParticleModuleAccelerationBase::StaticClass, py::return_value_policy::reference)
          ;
}