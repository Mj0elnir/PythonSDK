#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFade(py::module &m)
{
    py::class_< UInterpTrackFade,  UInterpTrackFloatBase   >(m, "UInterpTrackFade")
		.def_static("StaticClass", &UInterpTrackFade::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FadeColor", &UInterpTrackFade::FadeColor)
          ;
}