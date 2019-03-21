#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorConsumerHandle(py::object m)
{
    py::class_< FBehaviorConsumerHandle >(m, "FBehaviorConsumerHandle")
        .def_readwrite("PID", &FBehaviorConsumerHandle::PID)
  ;
}