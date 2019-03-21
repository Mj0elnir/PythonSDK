#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalParticleEffectData(py::object m)
{
    py::class_< FConditionalParticleEffectData >(m, "FConditionalParticleEffectData")
        .def_readwrite("Expression", &FConditionalParticleEffectData::Expression)
        .def_readwrite("ParticleEffect", &FConditionalParticleEffectData::ParticleEffect)
  ;
}