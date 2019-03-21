#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AndGate(py::object m)
{
    py::class_< USeqAct_AndGate,  USequenceAction   >(m, "USeqAct_AndGate")
        .def_readwrite("LinkedOutputFiredStatus", &USeqAct_AndGate::LinkedOutputFiredStatus)
        .def_readwrite("LinkedOutputs", &USeqAct_AndGate::LinkedOutputs)
        .def("StaticClass", &USeqAct_AndGate::StaticClass, py::return_value_policy::reference)
          ;
}