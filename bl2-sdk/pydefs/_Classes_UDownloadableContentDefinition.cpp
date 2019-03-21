#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableContentDefinition(py::object m)
{
    py::class_< UDownloadableContentDefinition,  UGBXDefinition   >(m, "UDownloadableContentDefinition")
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadableContentDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageDef", &UDownloadableContentDefinition::PackageDef)
        .def_readwrite("ContentId", &UDownloadableContentDefinition::ContentId)
        .def_readwrite("LicenseMask", &UDownloadableContentDefinition::LicenseMask)
        .def_readwrite("ContentDisplayName", &UDownloadableContentDefinition::ContentDisplayName)
        .def("StaticClass", &UDownloadableContentDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetFullContentId", &UDownloadableContentDefinition::GetFullContentId)
        .def("CanConsume", &UDownloadableContentDefinition::CanConsume)
        .def("IsInstalled", &UDownloadableContentDefinition::IsInstalled)
        .def("IsLicensed", &UDownloadableContentDefinition::IsLicensed)
          ;
}