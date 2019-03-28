#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationData(py::module &m)
{
    py::class_< UCustomizationData,  UGBXDefinition   >(m, "UCustomizationData")
		.def_static("StaticClass", &UCustomizationData::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyDefinition", &UCustomizationData::MyDefinition)
        .def_readwrite("PickupMesh", &UCustomizationData::PickupMesh)
        .def_readwrite("PickupFlagIcon", &UCustomizationData::PickupFlagIcon)
        .def_readwrite("NumReferencers", &UCustomizationData::NumReferencers)
        .def("ApplyCustomizationToInstanceDataSet", &UCustomizationData::ApplyCustomizationToInstanceDataSet)
        .def("ApplyCustomization", &UCustomizationData::ApplyCustomization)
        .def("ApplyCustomizationToDataSets", &UCustomizationData::ApplyCustomizationToDataSets)
          ;
}