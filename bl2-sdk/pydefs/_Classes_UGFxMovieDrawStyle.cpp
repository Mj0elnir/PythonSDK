#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyle(py::object m)
{
    py::class_< UGFxMovieDrawStyle,  UObject   >(m, "UGFxMovieDrawStyle")
        .def_readwrite("Movie", &UGFxMovieDrawStyle::Movie)
        .def_readwrite("TargetActor", &UGFxMovieDrawStyle::TargetActor)
        .def_readonly("UnknownData00", &UGFxMovieDrawStyle::UnknownData00)
        .def("StaticClass", &UGFxMovieDrawStyle::StaticClass, py::return_value_policy::reference)
        .def("GetStyleDebugString", &UGFxMovieDrawStyle::GetStyleDebugString)
          ;
}