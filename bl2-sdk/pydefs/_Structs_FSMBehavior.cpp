#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMBehavior(py::object m)
{
    py::class_< FSMBehavior >(m, "FSMBehavior")
        .def_readwrite("Behaviors", &FSMBehavior::Behaviors)
  ;
}