#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExporter(py::module &m)
{
    py::class_< UExporter,  UObject   >(m, "UExporter")
		.def_static("StaticClass", &UExporter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FormatExtension", &UExporter::FormatExtension)
        .def_readwrite("FormatDescription", &UExporter::FormatDescription)
          ;
}