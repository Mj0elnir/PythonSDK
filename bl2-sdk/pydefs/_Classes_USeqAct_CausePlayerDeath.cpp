#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CausePlayerDeath(py::object m)
{
    py::class_< USeqAct_CausePlayerDeath,  USequenceAction   >(m, "USeqAct_CausePlayerDeath")
        .def("StaticClass", &USeqAct_CausePlayerDeath::StaticClass, py::return_value_policy::reference)
          ;
}