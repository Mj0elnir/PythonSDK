#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnDemandPackageMarker(py::object m)
{
    py::class_< UWillowOnDemandPackageMarker,  UObject   >(m, "UWillowOnDemandPackageMarker")
        .def("StaticClass", &UWillowOnDemandPackageMarker::StaticClass, py::return_value_policy::reference)
          ;
}