#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamBase(py::object m)
{
    py::class_< UParticleModuleBeamBase,  UParticleModule   >(m, "UParticleModuleBeamBase")
        .def("StaticClass", &UParticleModuleBeamBase::StaticClass, py::return_value_policy::reference)
          ;
}