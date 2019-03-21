#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ToggleCinematicModeAffectsAll(py::object m)
{
    py::class_< UWillowSeqAct_ToggleCinematicModeAffectsAll,  USequenceAction   >(m, "UWillowSeqAct_ToggleCinematicModeAffectsAll")
        .def("StaticClass", &UWillowSeqAct_ToggleCinematicModeAffectsAll::StaticClass, py::return_value_policy::reference)
          ;
}