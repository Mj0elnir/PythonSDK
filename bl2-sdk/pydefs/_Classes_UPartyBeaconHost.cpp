#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPartyBeaconHost(py::object m)
{
    py::class_< UPartyBeaconHost,  UObject   >(m, "UPartyBeaconHost")
        .def_readwrite("Clients", &UPartyBeaconHost::Clients)
        .def_readwrite("NumTeams", &UPartyBeaconHost::NumTeams)
        .def_readwrite("NumPlayersPerTeam", &UPartyBeaconHost::NumPlayersPerTeam)
        .def_readwrite("NumReservations", &UPartyBeaconHost::NumReservations)
        .def_readwrite("NumConsumedReservations", &UPartyBeaconHost::NumConsumedReservations)
        .def_readwrite("Reservations", &UPartyBeaconHost::Reservations)
        .def_readwrite("OnlineSessionName", &UPartyBeaconHost::OnlineSessionName)
        .def_readwrite("ConnectionBacklog", &UPartyBeaconHost::ConnectionBacklog)
        .def_readwrite("ForceTeamNum", &UPartyBeaconHost::ForceTeamNum)
        .def_readwrite("ReservedHostTeamNum", &UPartyBeaconHost::ReservedHostTeamNum)
        .def_readwrite("BeaconState", &UPartyBeaconHost::BeaconState)
        .def_readwrite("VfTable_FTickableObject", &UPartyBeacon::VfTable_FTickableObject)
        .def_readwrite("PartyBeaconPort", &UPartyBeacon::PartyBeaconPort)
        .def_readwrite("Socket", &UPartyBeacon::Socket)
        .def_readwrite("HeartbeatTimeout", &UPartyBeacon::HeartbeatTimeout)
        .def_readwrite("ElapsedHeartbeatTime", &UPartyBeacon::ElapsedHeartbeatTime)
        .def_readwrite("BeaconName", &UPartyBeacon::BeaconName)
        .def("StaticClass", &UPartyBeaconHost::StaticClass, py::return_value_policy::reference)
        .def("GetMaxAvailableTeamSize", &UPartyBeaconHost::GetMaxAvailableTeamSize)
        .def("GetPartyLeaders", &UPartyBeaconHost::GetPartyLeaders)
        .def("GetPlayers", &UPartyBeaconHost::GetPlayers)
        .def("AppendReservationSkillsToSearch", &UPartyBeaconHost::AppendReservationSkillsToSearch)
        .def("eventUnregisterParty", &UPartyBeaconHost::eventUnregisterParty)
        .def("eventUnregisterPartyMembers", &UPartyBeaconHost::eventUnregisterPartyMembers)
        .def("eventRegisterPartyMembers", &UPartyBeaconHost::eventRegisterPartyMembers)
        .def("AreReservationsFull", &UPartyBeaconHost::AreReservationsFull)
        .def("TellClientsHostHasCancelled", &UPartyBeaconHost::TellClientsHostHasCancelled)
        .def("TellClientsHostIsReady", &UPartyBeaconHost::TellClientsHostIsReady)
        .def("TellClientsToTravel", &UPartyBeaconHost::TellClientsToTravel)
        .def("eventDestroyBeacon", &UPartyBeaconHost::eventDestroyBeacon)
        .def("OnClientCancellationReceived", &UPartyBeaconHost::OnClientCancellationReceived)
        .def("OnReservationsFull", &UPartyBeaconHost::OnReservationsFull)
        .def("OnReservationChange", &UPartyBeaconHost::OnReservationChange)
        .def("HandlePlayerLogout", &UPartyBeaconHost::HandlePlayerLogout)
        .def("GetExistingReservation", &UPartyBeaconHost::GetExistingReservation)
        .def("UpdatePartyReservationEntry", &UPartyBeaconHost::UpdatePartyReservationEntry)
        .def("AddPartyReservationEntry", &UPartyBeaconHost::AddPartyReservationEntry)
        .def("InitHostBeacon", &UPartyBeaconHost::InitHostBeacon)
        .def("PauseReservationRequests", &UPartyBeaconHost::PauseReservationRequests)
        .def("OnDestroyComplete", &UPartyBeacon::OnDestroyComplete)
          ;
}