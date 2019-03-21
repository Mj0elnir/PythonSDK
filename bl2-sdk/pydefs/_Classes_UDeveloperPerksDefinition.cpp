#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDeveloperPerksDefinition(py::object m)
{
    py::class_< UDeveloperPerksDefinition,  UGBXDefinition   >(m, "UDeveloperPerksDefinition")
        .def_readwrite("DeveloperInfo", &UDeveloperPerksDefinition::DeveloperInfo)
        .def_readwrite("PerkInfo", &UDeveloperPerksDefinition::PerkInfo)
        .def_readwrite("DeveloperCustomizationUnlocks", &UDeveloperPerksDefinition::DeveloperCustomizationUnlocks)
        .def_readwrite("PatchedPerkInfo", &UDeveloperPerksDefinition::PatchedPerkInfo)
        .def("StaticClass", &UDeveloperPerksDefinition::StaticClass, py::return_value_policy::reference)
        .def("CheckUnlockGamerpics", &UDeveloperPerksDefinition::CheckUnlockGamerpics)
        .def("IsDeveloper", &UDeveloperPerksDefinition::IsDeveloper)
        .def("IsValidPlatform", &UDeveloperPerksDefinition::IsValidPlatform)
        .def("CheckForButtonChain", &UDeveloperPerksDefinition::CheckForButtonChain)
        .def("PopulatePatchedPerkInfo", &UDeveloperPerksDefinition::PopulatePatchedPerkInfo)
          ;
}