#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponsRestriction(py::object m)
{
    py::class_< UBehavior_WeaponsRestriction,  UBehaviorBase   >(m, "UBehavior_WeaponsRestriction")
        .def("StaticClass", &UBehavior_WeaponsRestriction::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_WeaponsRestriction::ApplyBehaviorToContext)
          ;
}