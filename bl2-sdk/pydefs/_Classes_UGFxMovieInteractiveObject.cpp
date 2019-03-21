#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieInteractiveObject(py::object m)
{
    py::class_< UGFxMovieInteractiveObject,  UGearboxGFxMovie   >(m, "UGFxMovieInteractiveObject")
        .def("StaticClass", &UGFxMovieInteractiveObject::StaticClass, py::return_value_policy::reference)
          ;
}