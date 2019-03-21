#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackParticleReplay(py::object m)
{
    py::class_< UInterpTrackParticleReplay,  UInterpTrack   >(m, "UInterpTrackParticleReplay")
        .def_readwrite("TrackKeys", &UInterpTrackParticleReplay::TrackKeys)
        .def("StaticClass", &UInterpTrackParticleReplay::StaticClass, py::return_value_policy::reference)
          ;
}