#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorVariableValueUnion_Mirror(py::object m)
{
    py::class_< FBehaviorVariableValueUnion_Mirror >(m, "FBehaviorVariableValueUnion_Mirror")
        .def_readwrite("Data", &FBehaviorVariableValueUnion_Mirror::Data)
  ;
}