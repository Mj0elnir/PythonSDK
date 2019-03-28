#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverKillParticles(py::module &m)
{
    py::class_< UParticleModuleEventReceiverKillParticles,  UParticleModuleEventReceiverBase   >(m, "UParticleModuleEventReceiverKillParticles")
		.def_static("StaticClass", &UParticleModuleEventReceiverKillParticles::StaticClass, py::return_value_policy::reference)
          ;
}