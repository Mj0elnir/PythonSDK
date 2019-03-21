#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowLeviathanService(py::object m)
{
    py::class_< UWillowLeviathanService,  ULeviathanService   >(m, "UWillowLeviathanService")
        .def_readwrite("VfTable_FTickableObject", &UWillowLeviathanService::VfTable_FTickableObject)
        .def("StaticClass", &UWillowLeviathanService::StaticClass, py::return_value_policy::reference)
        .def("RecordDiagnosticEventForPlayer", &UWillowLeviathanService::RecordDiagnosticEventForPlayer)
        .def("RecordCustomizeCharacterEventForPlayer", &UWillowLeviathanService::RecordCustomizeCharacterEventForPlayer)
        .def("RecordCharacterDeletedEventForPlayer", &UWillowLeviathanService::RecordCharacterDeletedEventForPlayer)
        .def("RecordCharacterCreatedEventForPlayer", &UWillowLeviathanService::RecordCharacterCreatedEventForPlayer)
        .def("RecordCharacterLoadedEventForPlayer", &UWillowLeviathanService::RecordCharacterLoadedEventForPlayer)
        .def("RecordPointsSpentEventForPlayer", &UWillowLeviathanService::RecordPointsSpentEventForPlayer)
        .def("RecordPointsResetEventForPlayer", &UWillowLeviathanService::RecordPointsResetEventForPlayer)
        .def("RecordPointsEarnedEventForPlayer", &UWillowLeviathanService::RecordPointsEarnedEventForPlayer)
        .def("RecordPartnerLeftGameEventForAllPlayers", &UWillowLeviathanService::RecordPartnerLeftGameEventForAllPlayers)
        .def("RecordPartnerLeftGameEventForPlayer", &UWillowLeviathanService::RecordPartnerLeftGameEventForPlayer)
        .def("RecordPartnerJoinedGameEventForAllPlayers", &UWillowLeviathanService::RecordPartnerJoinedGameEventForAllPlayers)
        .def("RecordPartnerJoinedGameEventForPlayer", &UWillowLeviathanService::RecordPartnerJoinedGameEventForPlayer)
        .def("RecordCharacterRevivedEventForPlayer", &UWillowLeviathanService::RecordCharacterRevivedEventForPlayer)
        .def("RecordCharacterKilledEventForPlayer", &UWillowLeviathanService::RecordCharacterKilledEventForPlayer)
        .def("RecordCharacterDownEventForPlayer", &UWillowLeviathanService::RecordCharacterDownEventForPlayer)
        .def("RecordTeleportedToVehicleEventForPlayer", &UWillowLeviathanService::RecordTeleportedToVehicleEventForPlayer)
        .def("RecordDestroyVehicleEventForPlayer", &UWillowLeviathanService::RecordDestroyVehicleEventForPlayer)
        .def("RecordSpawnVehicleEventForPlayer", &UWillowLeviathanService::RecordSpawnVehicleEventForPlayer)
        .def("RecordDeclinedDuelEventForPlayer", &UWillowLeviathanService::RecordDeclinedDuelEventForPlayer)
        .def("RecordDuelEndedEventForPlayer", &UWillowLeviathanService::RecordDuelEndedEventForPlayer)
        .def("RecordMinorActionEventForPlayer", &UWillowLeviathanService::RecordMinorActionEventForPlayer)
        .def("RecordMissionFastForwardEventForPlayer", &UWillowLeviathanService::RecordMissionFastForwardEventForPlayer)
        .def("RecordMissionObjectiveChangedEventForPlayer", &UWillowLeviathanService::RecordMissionObjectiveChangedEventForPlayer)
        .def("RecordMissionObjectiveSetActivatedEventForPlayer", &UWillowLeviathanService::RecordMissionObjectiveSetActivatedEventForPlayer)
        .def("RecordMissionStatusChangedEventForPlayer", &UWillowLeviathanService::RecordMissionStatusChangedEventForPlayer)
        .def("RecordDiscoverLocationEventForPlayer", &UWillowLeviathanService::RecordDiscoverLocationEventForPlayer)
        .def("RecordWieldedWeaponChangedEventForPlayer", &UWillowLeviathanService::RecordWieldedWeaponChangedEventForPlayer)
        .def("RecordBlackMarketUpgradePurchasedEventForPlayer", &UWillowLeviathanService::RecordBlackMarketUpgradePurchasedEventForPlayer)
        .def("RecordItemMovedInInventoryEventForPlayer", &UWillowLeviathanService::RecordItemMovedInInventoryEventForPlayer)
        .def("RecordItemFromInventoryEventForPlayer", &UWillowLeviathanService::RecordItemFromInventoryEventForPlayer)
        .def("RecordItemToInventoryEventForPlayer", &UWillowLeviathanService::RecordItemToInventoryEventForPlayer)
        .def("RecordItemSpawnedEventForAllPlayers", &UWillowLeviathanService::RecordItemSpawnedEventForAllPlayers)
        .def("RecordItemSpawnedEventForPlayer", &UWillowLeviathanService::RecordItemSpawnedEventForPlayer)
        .def("RecordPlayerCharacterGainedLevelEventForPlayer", &UWillowLeviathanService::RecordPlayerCharacterGainedLevelEventForPlayer)
        .def("RecordExperienceGainedEventForPlayer", &UWillowLeviathanService::RecordExperienceGainedEventForPlayer)
        .def("RecordLocationPulseEventForPlayer", &UWillowLeviathanService::RecordLocationPulseEventForPlayer)
        .def("IsLeviathanEnabled", &UWillowLeviathanService::IsLeviathanEnabled)
        .def("PublishEvents", &UWillowLeviathanService::PublishEvents)
        .def("NewPlaySession", &UWillowLeviathanService::NewPlaySession)
          ;
}