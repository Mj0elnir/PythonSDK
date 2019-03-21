#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_QueuePersonalEcho(py::object m)
{
    py::class_< UBehavior_QueuePersonalEcho,  UBehaviorBase   >(m, "UBehavior_QueuePersonalEcho")
        .def_readwrite("PersonalEchoTag", &UBehavior_QueuePersonalEcho::PersonalEchoTag)
        .def_readwrite("DialogGroup", &UBehavior_QueuePersonalEcho::DialogGroup)
        .def("StaticClass", &UBehavior_QueuePersonalEcho::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_QueuePersonalEcho::ApplyBehaviorToContext)
          ;
}