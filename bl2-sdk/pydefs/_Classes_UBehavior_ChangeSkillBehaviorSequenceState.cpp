#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeSkillBehaviorSequenceState(py::object m)
{
    py::class_< UBehavior_ChangeSkillBehaviorSequenceState,  UBehaviorBase   >(m, "UBehavior_ChangeSkillBehaviorSequenceState")
        .def_readwrite("Action", &UBehavior_ChangeSkillBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeSkillBehaviorSequenceState::SequenceName)
        .def_readwrite("SkillDef", &UBehavior_ChangeSkillBehaviorSequenceState::SkillDef)
        .def("StaticClass", &UBehavior_ChangeSkillBehaviorSequenceState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeSkillBehaviorSequenceState::ApplyBehaviorToContext)
          ;
}