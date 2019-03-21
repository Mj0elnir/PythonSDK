#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILevelChallengeObject(py::object m)
{
    py::class_< UILevelChallengeObject,  UInterface   >(m, "UILevelChallengeObject")
        .def("StaticClass", &UILevelChallengeObject::StaticClass, py::return_value_policy::reference)
        .def("SetOverrideProgressNumber", &UILevelChallengeObject::SetOverrideProgressNumber)
        .def("SetOverrideAssociatedChallenge", &UILevelChallengeObject::SetOverrideAssociatedChallenge)
        .def("GetProgressNumber", &UILevelChallengeObject::GetProgressNumber)
        .def("GetAssociatedChallenge", &UILevelChallengeObject::GetAssociatedChallenge, py::return_value_policy::reference)
          ;
}