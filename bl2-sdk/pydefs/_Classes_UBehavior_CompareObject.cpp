#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CompareObject(py::module &m)
{
    py::class_< UBehavior_CompareObject,  UBehaviorBase   >(m, "UBehavior_CompareObject")
		.def_static("StaticClass", &UBehavior_CompareObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ObjectA", &UBehavior_CompareObject::ObjectA)
        .def_readwrite("ObjectB", &UBehavior_CompareObject::ObjectB)
        .def("ApplyBehaviorToContext", &UBehavior_CompareObject::ApplyBehaviorToContext)
          ;
}