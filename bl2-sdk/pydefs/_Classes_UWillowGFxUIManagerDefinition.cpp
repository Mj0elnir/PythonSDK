#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxUIManagerDefinition(py::object m)
{
    py::class_< UWillowGFxUIManagerDefinition,  UGBXDefinition   >(m, "UWillowGFxUIManagerDefinition")
        .def_readonly("MeshTranslation", &UWillowGFxUIManagerDefinition::MeshTranslation)
        .def_readwrite("MeshRotation", &UWillowGFxUIManagerDefinition::MeshRotation)
        .def_readwrite("ViewOffsetClamp", &UWillowGFxUIManagerDefinition::ViewOffsetClamp)
        .def_readwrite("ViewOffsetScale", &UWillowGFxUIManagerDefinition::ViewOffsetScale)
        .def_readwrite("TextureParameterName", &UWillowGFxUIManagerDefinition::TextureParameterName)
        .def_readwrite("RenderTextureMode", &UWillowGFxUIManagerDefinition::RenderTextureMode)
        .def_readwrite("DialogBoxDefinition", &UWillowGFxUIManagerDefinition::DialogBoxDefinition)
        .def_readwrite("TrainingDialogBoxDefinition", &UWillowGFxUIManagerDefinition::TrainingDialogBoxDefinition)
        .def_readwrite("TrainingDialogBoxDefinition_NoPause", &UWillowGFxUIManagerDefinition::TrainingDialogBoxDefinition_NoPause)
        .def_readwrite("EditDialogBoxDefinition", &UWillowGFxUIManagerDefinition::EditDialogBoxDefinition)
        .def_readwrite("RenderTextureSize", &UWillowGFxUIManagerDefinition::RenderTextureSize)
        .def("StaticClass", &UWillowGFxUIManagerDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetTranslation", &UWillowGFxUIManagerDefinition::GetTranslation)
          ;
}