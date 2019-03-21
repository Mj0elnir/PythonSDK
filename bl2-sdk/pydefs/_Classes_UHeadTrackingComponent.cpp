#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHeadTrackingComponent(py::object m)
{
    py::class_< UHeadTrackingComponent,  UActorComponent   >(m, "UHeadTrackingComponent")
        .def_readwrite("TrackControllerName", &UHeadTrackingComponent::TrackControllerName)
        .def_readwrite("LookAtActorRadius", &UHeadTrackingComponent::LookAtActorRadius)
        .def_readwrite("MaxLookAtTime", &UHeadTrackingComponent::MaxLookAtTime)
        .def_readwrite("MinLookAtTime", &UHeadTrackingComponent::MinLookAtTime)
        .def_readwrite("MaxInterestTime", &UHeadTrackingComponent::MaxInterestTime)
        .def_readwrite("ActorClassesToLookAt", &UHeadTrackingComponent::ActorClassesToLookAt)
        .def_readwrite("TargetBoneNames", &UHeadTrackingComponent::TargetBoneNames)
        .def_readonly("UnknownData00", &UHeadTrackingComponent::UnknownData00)
        .def_readwrite("SkeletalMeshComp", &UHeadTrackingComponent::SkeletalMeshComp)
        .def_readwrite("TrackControls", &UHeadTrackingComponent::TrackControls)
        .def_readwrite("RootMeshLocation", &UHeadTrackingComponent::RootMeshLocation)
        .def_readwrite("RootMeshRotation", &UHeadTrackingComponent::RootMeshRotation)
        .def("StaticClass", &UHeadTrackingComponent::StaticClass, py::return_value_policy::reference)
          ;
}