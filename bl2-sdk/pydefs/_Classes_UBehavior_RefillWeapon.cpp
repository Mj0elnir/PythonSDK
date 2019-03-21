#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RefillWeapon(py::object m)
{
    py::class_< UBehavior_RefillWeapon,  UBehaviorBase   >(m, "UBehavior_RefillWeapon")
        .def("StaticClass", &UBehavior_RefillWeapon::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RefillWeapon::ApplyBehaviorToContext)
          ;
}