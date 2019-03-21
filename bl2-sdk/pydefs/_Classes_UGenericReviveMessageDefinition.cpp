#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGenericReviveMessageDefinition(py::object m)
{
    py::class_< UGenericReviveMessageDefinition,  UGBXDefinition   >(m, "UGenericReviveMessageDefinition")
        .def_readwrite("Message_Self", &UGenericReviveMessageDefinition::Message_Self)
        .def_readwrite("Message_Other", &UGenericReviveMessageDefinition::Message_Other)
        .def("StaticClass", &UGenericReviveMessageDefinition::StaticClass, py::return_value_policy::reference)
          ;
}