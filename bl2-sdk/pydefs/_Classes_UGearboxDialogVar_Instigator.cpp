#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Instigator(py::object m)
{
    py::class_< UGearboxDialogVar_Instigator,  UGearboxDialogVariable   >(m, "UGearboxDialogVar_Instigator")
        .def("StaticClass", &UGearboxDialogVar_Instigator::StaticClass, py::return_value_policy::reference)
          ;
}