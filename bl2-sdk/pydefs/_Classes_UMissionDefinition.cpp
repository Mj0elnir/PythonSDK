#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionDefinition(py::object m)
{
    py::class_< UMissionDefinition,  UGBXDefinition   >(m, "UMissionDefinition")
        .def_readwrite("VfTable_IIBalancedActor", &UMissionDefinition::VfTable_IIBalancedActor)
        .def_readwrite("VfTable_IIBehaviorProvider", &UMissionDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("VfTable_IIDlcLicensableObject", &UMissionDefinition::VfTable_IIDlcLicensableObject)
        .def_readwrite("MissionName", &UMissionDefinition::MissionName)
        .def_readwrite("MissionDescription", &UMissionDefinition::MissionDescription)
        .def_readwrite("TurnInDescription", &UMissionDefinition::TurnInDescription)
        .def_readwrite("MissionSummary", &UMissionDefinition::MissionSummary)
        .def_readwrite("MissionGiver", &UMissionDefinition::MissionGiver)
        .def_readwrite("MissionTurnInLocation", &UMissionDefinition::MissionTurnInLocation)
        .def_readwrite("TeaserText", &UMissionDefinition::TeaserText)
        .def_readwrite("TravelStation", &UMissionDefinition::TravelStation)
        .def_readwrite("TurnInStation", &UMissionDefinition::TurnInStation)
        .def_readwrite("MissionWeapon", &UMissionDefinition::MissionWeapon)
        .def_readwrite("ObjectiveDependency", &UMissionDefinition::ObjectiveDependency)
        .def_readwrite("Dependencies", &UMissionDefinition::Dependencies)
        .def_readwrite("NextMissionInChain", &UMissionDefinition::NextMissionInChain)
        .def_readwrite("InitialObjectiveSet", &UMissionDefinition::InitialObjectiveSet)
        .def_readwrite("MarketingUnlock", &UMissionDefinition::MarketingUnlock)
        .def_readwrite("BlockedMissions", &UMissionDefinition::BlockedMissions)
        .def_readwrite("StartBlockingSet", &UMissionDefinition::StartBlockingSet)
        .def_readwrite("StopBlockingSet", &UMissionDefinition::StopBlockingSet)
        .def_readwrite("ObjectiveDefs", &UMissionDefinition::ObjectiveDefs)
        .def_readwrite("ObjectiveSetDefs", &UMissionDefinition::ObjectiveSetDefs)
        .def_readwrite("GameStageRegion", &UMissionDefinition::GameStageRegion)
        .def_readwrite("Reward", &UMissionDefinition::Reward)
        .def_readwrite("AlternativeReward", &UMissionDefinition::AlternativeReward)
        .def_readwrite("FailOnLoadObjectiveSet", &UMissionDefinition::FailOnLoadObjectiveSet)
        .def_readwrite("SecondsToComplete", &UMissionDefinition::SecondsToComplete)
        .def_readwrite("DefendMissionSetting", &UMissionDefinition::DefendMissionSetting)
        .def_readwrite("SeasonalAvailabilityTime", &UMissionDefinition::SeasonalAvailabilityTime)
        .def_readwrite("MissionDialogGroup", &UMissionDefinition::MissionDialogGroup)
        .def_readwrite("DialogEvent", &UMissionDefinition::DialogEvent)
        .def_readwrite("DialogTalker", &UMissionDefinition::DialogTalker)
        .def_readwrite("TurnInDialogEvent", &UMissionDefinition::TurnInDialogEvent)
        .def_readwrite("DlcExpansion", &UMissionDefinition::DlcExpansion)
        .def_readwrite("MissionNumber", &UMissionDefinition::MissionNumber)
        .def_readwrite("GameStage", &UMissionDefinition::GameStage)
        .def_readwrite("AwesomeLevel", &UMissionDefinition::AwesomeLevel)
        .def_readwrite("ExpLevel", &UMissionDefinition::ExpLevel)
        .def_readwrite("BehaviorProvider", &UMissionDefinition::BehaviorProvider)
        .def("StaticClass", &UMissionDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetItemRewardPools", &UMissionDefinition::GetItemRewardPools)
        .def("SetBehaviorProviderDefinition", &UMissionDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UMissionDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
        .def("GetDownloadableContentDefinition", &UMissionDefinition::GetDownloadableContentDefinition, py::return_value_policy::reference)
        .def("CanBeFailed", &UMissionDefinition::CanBeFailed)
        .def("GetMissionRewardPresentation", &UMissionDefinition::GetMissionRewardPresentation)
        .def("ShouldGrantAlternateReward", &UMissionDefinition::ShouldGrantAlternateReward)
        .def("GetItemRewardsForPlayer", &UMissionDefinition::GetItemRewardsForPlayer)
        .def("GetExperienceReward", &UMissionDefinition::GetExperienceReward)
        .def("GetOptionalCreditReward", &UMissionDefinition::GetOptionalCreditReward)
        .def("GetCurrencyReward", &UMissionDefinition::GetCurrencyReward)
        .def("GetCurrencyRewardType", &UMissionDefinition::GetCurrencyRewardType)
        .def("GetXPRewardPercentageString", &UMissionDefinition::GetXPRewardPercentageString)
        .def("GetCurrencyRewardString", &UMissionDefinition::GetCurrencyRewardString)
        .def("GetObjectiveIndex", &UMissionDefinition::GetObjectiveIndex)
        .def("GetBalancedActorTypeIdentifier", &UMissionDefinition::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &UMissionDefinition::SetExpLevel)
        .def("SetAwesomeLevel", &UMissionDefinition::SetAwesomeLevel)
        .def("SetGameStage", &UMissionDefinition::SetGameStage)
        .def("GetExpLevelForEquip", &UMissionDefinition::GetExpLevelForEquip)
        .def("GetExpLevel", &UMissionDefinition::GetExpLevel)
        .def("GetAwesomeLevel", &UMissionDefinition::GetAwesomeLevel)
        .def("GetGameStage", &UMissionDefinition::GetGameStage)
          ;
}