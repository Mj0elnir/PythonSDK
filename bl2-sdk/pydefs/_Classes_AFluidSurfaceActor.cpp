#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFluidSurfaceActor(py::module &m)
{
    py::class_< AFluidSurfaceActor,  AActor   >(m, "AFluidSurfaceActor")
		.def_static("StaticClass", &AFluidSurfaceActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FluidComponent", &AFluidSurfaceActor::FluidComponent)
        .def_readwrite("ProjectileEntryEffect", &AFluidSurfaceActor::ProjectileEntryEffect)
        .def("eventTouch", &AFluidSurfaceActor::eventTouch)
        .def("eventTakeDamage", &AFluidSurfaceActor::eventTakeDamage)
          ;
}