#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQueuedActivationInfo(py::object m)
{
    py::class_< FQueuedActivationInfo >(m, "FQueuedActivationInfo")
        .def_readwrite("ActivatedEvent", &FQueuedActivationInfo::ActivatedEvent)
        .def_readwrite("InOriginator", &FQueuedActivationInfo::InOriginator)
        .def_readwrite("InInstigator", &FQueuedActivationInfo::InInstigator)
        .def_readwrite("ActivateIndices", &FQueuedActivationInfo::ActivateIndices)
  ;
}