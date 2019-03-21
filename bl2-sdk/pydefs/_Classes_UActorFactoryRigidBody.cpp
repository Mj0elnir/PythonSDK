#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryRigidBody(py::object m)
{
    py::class_< UActorFactoryRigidBody,  UActorFactoryDynamicSM   >(m, "UActorFactoryRigidBody")
        .def_readwrite("InitialVelocity", &UActorFactoryRigidBody::InitialVelocity)
        .def_readwrite("AdditionalVelocity", &UActorFactoryRigidBody::AdditionalVelocity)
        .def_readwrite("InitialAngularVelocity", &UActorFactoryRigidBody::InitialAngularVelocity)
        .def_readwrite("RBChannel", &UActorFactoryRigidBody::RBChannel)
        .def_readwrite("StayUprightTorqueFactor", &UActorFactoryRigidBody::StayUprightTorqueFactor)
        .def_readwrite("StayUprightMaxTorque", &UActorFactoryRigidBody::StayUprightMaxTorque)
        .def("StaticClass", &UActorFactoryRigidBody::StaticClass, py::return_value_policy::reference)
          ;
}