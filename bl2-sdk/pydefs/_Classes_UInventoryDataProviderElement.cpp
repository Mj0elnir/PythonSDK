#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryDataProviderElement(py::object m)
{
    py::class_< UInventoryDataProviderElement,  UGFxObject   >(m, "UInventoryDataProviderElement")
        .def_readwrite("Kind", &UInventoryDataProviderElement::Kind)
        .def_readwrite("LightweightIdx", &UInventoryDataProviderElement::LightweightIdx)
        .def("StaticClass", &UInventoryDataProviderElement::StaticClass, py::return_value_policy::reference)
          ;
}