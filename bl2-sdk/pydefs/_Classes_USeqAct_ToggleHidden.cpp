#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleHidden(py::object m)
{
    py::class_< USeqAct_ToggleHidden,  USeqAct_Toggle   >(m, "USeqAct_ToggleHidden")
        .def_readwrite("IgnoreBasedClasses", &USeqAct_ToggleHidden::IgnoreBasedClasses)
        .def("StaticClass", &USeqAct_ToggleHidden::StaticClass, py::return_value_policy::reference)
          ;
}