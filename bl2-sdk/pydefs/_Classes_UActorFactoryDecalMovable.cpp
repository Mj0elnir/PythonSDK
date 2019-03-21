#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDecalMovable(py::object m)
{
    py::class_< UActorFactoryDecalMovable,  UActorFactoryDecal   >(m, "UActorFactoryDecalMovable")
        .def("StaticClass", &UActorFactoryDecalMovable::StaticClass, py::return_value_policy::reference)
          ;
}