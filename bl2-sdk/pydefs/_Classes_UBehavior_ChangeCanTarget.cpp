#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCanTarget(py::module &m)
{
    py::class_< UBehavior_ChangeCanTarget,  UBehaviorBase   >(m, "UBehavior_ChangeCanTarget")
		.def_static("StaticClass", &UBehavior_ChangeCanTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ChangeStatus", &UBehavior_ChangeCanTarget::ChangeStatus)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCanTarget::ApplyBehaviorToContext)
          ;
}