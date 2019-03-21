#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RightLowerEyelidLook(py::object m)
{
    py::class_< UWillowSkelControl_RightLowerEyelidLook,  UWillowSkelControl_LowerEyelidLook   >(m, "UWillowSkelControl_RightLowerEyelidLook")
        .def("StaticClass", &UWillowSkelControl_RightLowerEyelidLook::StaticClass, py::return_value_policy::reference)
          ;
}