#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerNameIdentifierDefinition(py::object m)
{
    py::class_< UPlayerNameIdentifierDefinition,  UGBXDefinition   >(m, "UPlayerNameIdentifierDefinition")
        .def_readwrite("CharacterName", &UPlayerNameIdentifierDefinition::CharacterName)
        .def_readwrite("LocalizedCharacterName", &UPlayerNameIdentifierDefinition::LocalizedCharacterName)
        .def_readwrite("LocalizedCharacterDescription", &UPlayerNameIdentifierDefinition::LocalizedCharacterDescription)
        .def_readwrite("LocalizedActionSkillDescription", &UPlayerNameIdentifierDefinition::LocalizedActionSkillDescription)
        .def_readwrite("LocalizedPreferredWeaponDescription", &UPlayerNameIdentifierDefinition::LocalizedPreferredWeaponDescription)
        .def_readwrite("XlastCharacterIdOffset", &UPlayerNameIdentifierDefinition::XlastCharacterIdOffset)
        .def_readwrite("CharacterClassId", &UPlayerNameIdentifierDefinition::CharacterClassId)
        .def_readwrite("DefaultSaveGame", &UPlayerNameIdentifierDefinition::DefaultSaveGame)
        .def_readwrite("UISortOrder", &UPlayerNameIdentifierDefinition::UISortOrder)
        .def_readwrite("StatusMenuGFxPortrait", &UPlayerNameIdentifierDefinition::StatusMenuGFxPortrait)
        .def_readwrite("PlayerRegistrationPortraitName", &UPlayerNameIdentifierDefinition::PlayerRegistrationPortraitName)
        .def_readwrite("CharacterSelectionGFxMovieId", &UPlayerNameIdentifierDefinition::CharacterSelectionGFxMovieId)
        .def_readwrite("CharacterSelectionGFxMovieVarString", &UPlayerNameIdentifierDefinition::CharacterSelectionGFxMovieVarString)
        .def_readwrite("CharacterIconSwfMovie", &UPlayerNameIdentifierDefinition::CharacterIconSwfMovie)
        .def_readwrite("CoopCharacterIconSwfMovie", &UPlayerNameIdentifierDefinition::CoopCharacterIconSwfMovie)
        .def_readwrite("ScaleformSkillLeftBranchName", &UPlayerNameIdentifierDefinition::ScaleformSkillLeftBranchName)
        .def_readwrite("ScaleformSkillMiddleBranchName", &UPlayerNameIdentifierDefinition::ScaleformSkillMiddleBranchName)
        .def_readwrite("ScaleformSkillRightBranchName", &UPlayerNameIdentifierDefinition::ScaleformSkillRightBranchName)
        .def_readwrite("GFxActionSkillBarPath", &UPlayerNameIdentifierDefinition::GFxActionSkillBarPath)
        .def_readwrite("GFxActionSkillStartPath", &UPlayerNameIdentifierDefinition::GFxActionSkillStartPath)
        .def_readwrite("GFxActionSkillStartString", &UPlayerNameIdentifierDefinition::GFxActionSkillStartString)
        .def_readwrite("GFxActionSkillStartExternalClip", &UPlayerNameIdentifierDefinition::GFxActionSkillStartExternalClip)
        .def_readwrite("GFxActionSkillFadeGotoAndPlayString", &UPlayerNameIdentifierDefinition::GFxActionSkillFadeGotoAndPlayString)
        .def_readwrite("GFxActionSkillFadeString", &UPlayerNameIdentifierDefinition::GFxActionSkillFadeString)
        .def_readwrite("GFxActionSkillPortrait", &UPlayerNameIdentifierDefinition::GFxActionSkillPortrait)
        .def_readwrite("GFxActionSkillTooltipPath", &UPlayerNameIdentifierDefinition::GFxActionSkillTooltipPath)
        .def_readwrite("GFxActionSkillActivateTooltipValue", &UPlayerNameIdentifierDefinition::GFxActionSkillActivateTooltipValue)
        .def_readwrite("GFxActionSkillDisableTooltipValue", &UPlayerNameIdentifierDefinition::GFxActionSkillDisableTooltipValue)
        .def_readwrite("GFxActionSkillTooltipStringPath", &UPlayerNameIdentifierDefinition::GFxActionSkillTooltipStringPath)
        .def_readwrite("GFxActionSkillTooltipString", &UPlayerNameIdentifierDefinition::GFxActionSkillTooltipString)
        .def_readwrite("GFxActionSkillEnablePath", &UPlayerNameIdentifierDefinition::GFxActionSkillEnablePath)
        .def_readwrite("GFxActionSkillEnableValue", &UPlayerNameIdentifierDefinition::GFxActionSkillEnableValue)
        .def_readwrite("GFxActionSkillDisablePath", &UPlayerNameIdentifierDefinition::GFxActionSkillDisablePath)
        .def_readwrite("GFxActionSkillDisableValue", &UPlayerNameIdentifierDefinition::GFxActionSkillDisableValue)
        .def_readwrite("GFxActionSkillGuideHideGotoAndPlayString", &UPlayerNameIdentifierDefinition::GFxActionSkillGuideHideGotoAndPlayString)
        .def_readwrite("GFxActionSkillGuideHideStart", &UPlayerNameIdentifierDefinition::GFxActionSkillGuideHideStart)
        .def_readwrite("GFxActionSkillGuideHideResume", &UPlayerNameIdentifierDefinition::GFxActionSkillGuideHideResume)
        .def("StaticClass", &UPlayerNameIdentifierDefinition::StaticClass, py::return_value_policy::reference)
        .def("eventGetCoopCharacterIconSwfMoviePath", &UPlayerNameIdentifierDefinition::eventGetCoopCharacterIconSwfMoviePath)
        .def("eventGetCharacterIconSwfMoviePath", &UPlayerNameIdentifierDefinition::eventGetCharacterIconSwfMoviePath)
        .def("eventGetPortraitSwfMoviePath", &UPlayerNameIdentifierDefinition::eventGetPortraitSwfMoviePath)
          ;
}