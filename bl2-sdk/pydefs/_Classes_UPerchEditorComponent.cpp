#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPerchEditorComponent(py::object m)
{
    py::class_< UPerchEditorComponent,  UPrimitiveComponent   >(m, "UPerchEditorComponent")
        .def("StaticClass", &UPerchEditorComponent::StaticClass, py::return_value_policy::reference)
          ;
}