#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_UseBehavior(py::object m)
{
    py::class_< UAnimNotify_UseBehavior,  UAnimNotify   >(m, "UAnimNotify_UseBehavior")
        .def_readwrite("Behaviors", &UAnimNotify_UseBehavior::Behaviors)
        .def_readwrite("InstigatorContextForBehavior", &UAnimNotify_UseBehavior::InstigatorContextForBehavior)
        .def("StaticClass", &UAnimNotify_UseBehavior::StaticClass, py::return_value_policy::reference)
        .def("PreTestNotify", &UAnimNotify_UseBehavior::PreTestNotify)
          ;
}