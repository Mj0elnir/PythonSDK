#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterfaceGearboxCamera(py::module &m)
{
    py::class_< UInterfaceGearboxCamera,  UInterface   >(m, "UInterfaceGearboxCamera")
		.def_static("StaticClass", &UInterfaceGearboxCamera::StaticClass, py::return_value_policy::reference)
        .def("eventFinishCameraLookAt", &UInterfaceGearboxCamera::eventFinishCameraLookAt)
        .def("EnableThirdPersonLookAt", &UInterfaceGearboxCamera::EnableThirdPersonLookAt)
        .def("BeginCameraLookAt", &UInterfaceGearboxCamera::BeginCameraLookAt)
          ;
}