#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCollision(py::object m)
{
    py::class_< UBehavior_ChangeCollision,  UBehaviorBase   >(m, "UBehavior_ChangeCollision")
        .def_readwrite("NewCollisionType", &UBehavior_ChangeCollision::NewCollisionType)
        .def("StaticClass", &UBehavior_ChangeCollision::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCollision::ApplyBehaviorToContext)
          ;
}