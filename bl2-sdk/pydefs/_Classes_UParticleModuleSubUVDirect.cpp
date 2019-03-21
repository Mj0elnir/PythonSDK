#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVDirect(py::object m)
{
    py::class_< UParticleModuleSubUVDirect,  UParticleModuleSubUVBase   >(m, "UParticleModuleSubUVDirect")
        .def_readwrite("SubUVPosition", &UParticleModuleSubUVDirect::SubUVPosition)
        .def_readwrite("SubUVSize", &UParticleModuleSubUVDirect::SubUVSize)
        .def("StaticClass", &UParticleModuleSubUVDirect::StaticClass, py::return_value_policy::reference)
          ;
}