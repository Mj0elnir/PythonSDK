#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkBaseSoundObject(py::object m)
{
    py::class_< UAkBaseSoundObject,  UObject   >(m, "UAkBaseSoundObject")
        .def("StaticClass", &UAkBaseSoundObject::StaticClass, py::return_value_policy::reference)
          ;
}