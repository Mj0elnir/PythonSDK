#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCameraModifier_CameraShake(py::module &m)
{
    py::class_< UCameraModifier_CameraShake,  UCameraModifier   >(m, "UCameraModifier_CameraShake")
		.def_static("StaticClass", &UCameraModifier_CameraShake::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ActiveShakes", &UCameraModifier_CameraShake::ActiveShakes)
        .def_readwrite("SplitScreenShakeScale", &UCameraModifier_CameraShake::SplitScreenShakeScale)
        .def("ModifyCamera", &UCameraModifier_CameraShake::ModifyCamera)
        .def("UpdateCameraShake", &UCameraModifier_CameraShake::UpdateCameraShake)
        .def("RemoveAllCameraShakes", &UCameraModifier_CameraShake::RemoveAllCameraShakes)
        .def("RemoveCameraShake", &UCameraModifier_CameraShake::RemoveCameraShake)
        .def("AddCameraShake", &UCameraModifier_CameraShake::AddCameraShake)
        .def("InitializeShake", &UCameraModifier_CameraShake::InitializeShake)
        .def("ReinitShake", &UCameraModifier_CameraShake::ReinitShake)
        .def("InitializeOffset", &UCameraModifier_CameraShake::InitializeOffset)
          ;
}