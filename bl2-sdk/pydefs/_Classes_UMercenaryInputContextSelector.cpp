#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMercenaryInputContextSelector(py::object m)
{
    py::class_< UMercenaryInputContextSelector,  UDefaultInputContextSelector   >(m, "UMercenaryInputContextSelector")
        .def("StaticClass", &UMercenaryInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UMercenaryInputContextSelector::SelectContext)
          ;
}