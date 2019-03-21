#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendTurning(py::object m)
{
    py::class_< UWillowAnimNodeBlendTurning,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendTurning")
        .def_readwrite("TurnTransitionDelay", &UWillowAnimNodeBlendTurning::TurnTransitionDelay)
        .def_readwrite("BlendUpTime", &UWillowAnimNodeBlendTurning::BlendUpTime)
        .def_readwrite("BlendDownTime", &UWillowAnimNodeBlendTurning::BlendDownTime)
        .def_readwrite("PrevAngle", &UWillowAnimNodeBlendTurning::PrevAngle)
        .def_readwrite("PrevDeltaAngle", &UWillowAnimNodeBlendTurning::PrevDeltaAngle)
        .def_readwrite("DeltaAngle", &UWillowAnimNodeBlendTurning::DeltaAngle)
        .def_readwrite("CurrentTurnTransitionDelay", &UWillowAnimNodeBlendTurning::CurrentTurnTransitionDelay)
        .def("StaticClass", &UWillowAnimNodeBlendTurning::StaticClass, py::return_value_policy::reference)
          ;
}