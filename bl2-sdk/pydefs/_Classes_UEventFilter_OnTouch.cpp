#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEventFilter_OnTouch(py::object m)
{
    py::class_< UEventFilter_OnTouch,  UBehaviorEventFilterBase   >(m, "UEventFilter_OnTouch")
        .def("StaticClass", &UEventFilter_OnTouch::StaticClass, py::return_value_policy::reference)
        .def("eventAllowedToRunThisEvent", &UEventFilter_OnTouch::eventAllowedToRunThisEvent)
        .def("PassesAllegianceTests", &UEventFilter_OnTouch::PassesAllegianceTests)
          ;
}