#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceFrame(py::object m)
{
    py::class_< USequenceFrame,  USequenceObject   >(m, "USequenceFrame")
        .def_readwrite("SizeX", &USequenceFrame::SizeX)
        .def_readwrite("SizeY", &USequenceFrame::SizeY)
        .def_readwrite("BorderWidth", &USequenceFrame::BorderWidth)
        .def_readwrite("BorderColor", &USequenceFrame::BorderColor)
        .def_readwrite("FillColor", &USequenceFrame::FillColor)
        .def("StaticClass", &USequenceFrame::StaticClass, py::return_value_policy::reference)
          ;
}