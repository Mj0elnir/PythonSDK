#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PrepareSavedMapChange(py::object m)
{
    py::class_< UWillowSeqAct_PrepareSavedMapChange,  USeqAct_PrepareMapChange   >(m, "UWillowSeqAct_PrepareSavedMapChange")
        .def("StaticClass", &UWillowSeqAct_PrepareSavedMapChange::StaticClass, py::return_value_policy::reference)
          ;
}