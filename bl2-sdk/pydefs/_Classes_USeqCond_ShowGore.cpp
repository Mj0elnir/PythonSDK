#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_ShowGore(py::object m)
{
    py::class_< USeqCond_ShowGore,  USequenceCondition   >(m, "USeqCond_ShowGore")
        .def("StaticClass", &USeqCond_ShowGore::StaticClass, py::return_value_policy::reference)
          ;
}