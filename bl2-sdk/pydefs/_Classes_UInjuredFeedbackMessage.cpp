#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInjuredFeedbackMessage(py::module &m)
{
    py::class_< UInjuredFeedbackMessage,  UWillowLocalMessage   >(m, "UInjuredFeedbackMessage")
		.def_static("StaticClass", &UInjuredFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SecondWind", &UInjuredFeedbackMessage::SecondWind)
        .def("GetString", &UInjuredFeedbackMessage::GetString)
          ;
}