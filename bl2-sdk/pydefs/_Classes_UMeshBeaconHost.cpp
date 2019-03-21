#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeshBeaconHost(py::object m)
{
    py::class_< UMeshBeaconHost,  UObject   >(m, "UMeshBeaconHost")
        .def_readwrite("ClientConnections", &UMeshBeaconHost::ClientConnections)
        .def_readwrite("PendingPlayerConnections", &UMeshBeaconHost::PendingPlayerConnections)
        .def_readwrite("OwningPlayerId", &UMeshBeaconHost::OwningPlayerId)
        .def_readwrite("ConnectionBacklog", &UMeshBeaconHost::ConnectionBacklog)
        .def_readwrite("VfTable_FTickableObject", &UMeshBeacon::VfTable_FTickableObject)
        .def_readwrite("MeshBeaconPort", &UMeshBeacon::MeshBeaconPort)
        .def_readwrite("Socket", &UMeshBeacon::Socket)
        .def_readwrite("HeartbeatTimeout", &UMeshBeacon::HeartbeatTimeout)
        .def_readwrite("ElapsedHeartbeatTime", &UMeshBeacon::ElapsedHeartbeatTime)
        .def_readwrite("BeaconName", &UMeshBeacon::BeaconName)
        .def_readwrite("SocketSendBufferSize", &UMeshBeacon::SocketSendBufferSize)
        .def_readwrite("SocketReceiveBufferSize", &UMeshBeacon::SocketReceiveBufferSize)
        .def_readwrite("MaxBandwidthTestBufferSize", &UMeshBeacon::MaxBandwidthTestBufferSize)
        .def_readwrite("MinBandwidthTestBufferSize", &UMeshBeacon::MinBandwidthTestBufferSize)
        .def_readwrite("MaxBandwidthTestSendTime", &UMeshBeacon::MaxBandwidthTestSendTime)
        .def_readwrite("MaxBandwidthTestReceiveTime", &UMeshBeacon::MaxBandwidthTestReceiveTime)
        .def_readwrite("MaxBandwidthHistoryEntries", &UMeshBeacon::MaxBandwidthHistoryEntries)
        .def("StaticClass", &UMeshBeaconHost::StaticClass, py::return_value_policy::reference)
        .def("OnReceivedClientCreateNewSessionResult", &UMeshBeaconHost::OnReceivedClientCreateNewSessionResult)
        .def("RequestClientCreateNewSession", &UMeshBeaconHost::RequestClientCreateNewSession)
        .def("TellClientsToTravel", &UMeshBeaconHost::TellClientsToTravel)
        .def("OnAllPendingPlayersConnected", &UMeshBeaconHost::OnAllPendingPlayersConnected)
        .def("AllPlayersConnected", &UMeshBeaconHost::AllPlayersConnected)
        .def("GetConnectionIndexForPlayer", &UMeshBeaconHost::GetConnectionIndexForPlayer)
        .def("SetPendingPlayerConnections", &UMeshBeaconHost::SetPendingPlayerConnections)
        .def("OnFinishedBandwidthTest", &UMeshBeaconHost::OnFinishedBandwidthTest)
        .def("OnStartedBandwidthTest", &UMeshBeaconHost::OnStartedBandwidthTest)
        .def("OnReceivedClientConnectionRequest", &UMeshBeaconHost::OnReceivedClientConnectionRequest)
        .def("AllowBandwidthTesting", &UMeshBeaconHost::AllowBandwidthTesting)
        .def("CancelPendingBandwidthTests", &UMeshBeaconHost::CancelPendingBandwidthTests)
        .def("HasPendingBandwidthTest", &UMeshBeaconHost::HasPendingBandwidthTest)
        .def("CancelInProgressBandwidthTests", &UMeshBeaconHost::CancelInProgressBandwidthTests)
        .def("HasInProgressBandwidthTest", &UMeshBeaconHost::HasInProgressBandwidthTest)
        .def("RequestClientBandwidthTest", &UMeshBeaconHost::RequestClientBandwidthTest)
        .def("eventDestroyBeacon", &UMeshBeaconHost::eventDestroyBeacon)
        .def("InitHostBeacon", &UMeshBeaconHost::InitHostBeacon)
          ;
}