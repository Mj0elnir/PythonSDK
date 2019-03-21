#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowInventoryManager(py::object m)
{
    py::class_< AWillowInventoryManager,  AInventoryManager   >(m, "AWillowInventoryManager")
        .def_readwrite("InventorySlotMax_Misc", &AWillowInventoryManager::InventorySlotMax_Misc)
        .def_readwrite("WeaponReadyMax", &AWillowInventoryManager::WeaponReadyMax)
        .def_readwrite("WeaponReadyMaxBaseValue", &AWillowInventoryManager::WeaponReadyMaxBaseValue)
        .def_readwrite("WeaponReadyMaxModifierStack", &AWillowInventoryManager::WeaponReadyMaxModifierStack)
        .def_readwrite("ItemChain", &AWillowInventoryManager::ItemChain)
        .def_readwrite("Backpack", &AWillowInventoryManager::Backpack)
        .def_readwrite("BackpackInventoryCount", &AWillowInventoryManager::BackpackInventoryCount)
        .def_readwrite("BackpackInventoryBeingEquipped", &AWillowInventoryManager::BackpackInventoryBeingEquipped)
        .def_readwrite("EquippedInventoryGoingToBackpack", &AWillowInventoryManager::EquippedInventoryGoingToBackpack)
        .def_readwrite("EquippedWeaponBeingSwapped", &AWillowInventoryManager::EquippedWeaponBeingSwapped)
        .def_readwrite("OtherEquippedWeaponBeingSwapped", &AWillowInventoryManager::OtherEquippedWeaponBeingSwapped)
        .def_readwrite("BuybackInventory", &AWillowInventoryManager::BuybackInventory)
        .def_readwrite("BlackMarketItemList", &AWillowInventoryManager::BlackMarketItemList)
        .def_readwrite("BlackMarketFeaturedItem", &AWillowInventoryManager::BlackMarketFeaturedItem)
        .def_readwrite("TheBank", &AWillowInventoryManager::TheBank)
        .def_readwrite("TheStash", &AWillowInventoryManager::TheStash)
        .def_readwrite("LastAdjustTime", &AWillowInventoryManager::LastAdjustTime)
        .def_readwrite("LastItemAdjustTime", &AWillowInventoryManager::LastItemAdjustTime)
        .def_readwrite("PendingQuickSlot", &AWillowInventoryManager::PendingQuickSlot)
        .def_readwrite("RecentStuff", &AWillowInventoryManager::RecentStuff)
        .def_readonly("WeaponSwitchSlots", &AWillowInventoryManager::WeaponSwitchSlots)
        .def("StaticClass", &AWillowInventoryManager::StaticClass, py::return_value_policy::reference)
        .def("InternalSetCurrentWeapon", &AWillowInventoryManager::InternalSetCurrentWeapon)
        .def("GetEquippedAnalogue", &AWillowInventoryManager::GetEquippedAnalogue, py::return_value_policy::reference)
        .def("GetBlackMarketFeaturedItem", &AWillowInventoryManager::GetBlackMarketFeaturedItem, py::return_value_policy::reference)
        .def("AddBlackMarketFeaturedItem", &AWillowInventoryManager::AddBlackMarketFeaturedItem)
        .def("GetBlackMarketItemList", &AWillowInventoryManager::GetBlackMarketItemList)
        .def("AddBlackMarketItem", &AWillowInventoryManager::AddBlackMarketItem)
        .def("ClearBlackMarketInventory", &AWillowInventoryManager::ClearBlackMarketInventory)
        .def("ClientRemoveStoredItem", &AWillowInventoryManager::ClientRemoveStoredItem)
        .def("ClientRemoveStoredWeapon", &AWillowInventoryManager::ClientRemoveStoredWeapon)
        .def("ClientStoreItem", &AWillowInventoryManager::ClientStoreItem)
        .def("ClientStoreWeapon", &AWillowInventoryManager::ClientStoreWeapon)
        .def("ClientSetBankSlots", &AWillowInventoryManager::ClientSetBankSlots)
        .def("PrintAllInventory", &AWillowInventoryManager::PrintAllInventory)
        .def("SellAllTrash", &AWillowInventoryManager::SellAllTrash)
        .def("eventRemoveMissionWeapons", &AWillowInventoryManager::eventRemoveMissionWeapons)
        .def("ClientRemoveMissionWeapons", &AWillowInventoryManager::ClientRemoveMissionWeapons)
        .def("ClientWeaponSet", &AWillowInventoryManager::ClientWeaponSet)
        .def("IsInventoryItemInInventory", &AWillowInventoryManager::IsInventoryItemInInventory)
        .def("GetEquippedWeapons", &AWillowInventoryManager::GetEquippedWeapons)
        .def("EquipWeaponFromSlot", &AWillowInventoryManager::EquipWeaponFromSlot)
        .def("RecordItemToInventoryEventForWeapon", &AWillowInventoryManager::RecordItemToInventoryEventForWeapon)
        .def("TranslateWeaponSlotToInventorySlot", &AWillowInventoryManager::TranslateWeaponSlotToInventorySlot)
        .def("SafelySetQuickSlot", &AWillowInventoryManager::SafelySetQuickSlot)
        .def("AssignNextAvailableDefaultQuickSlot", &AWillowInventoryManager::AssignNextAvailableDefaultQuickSlot)
        .def("GetCurrentClassMod", &AWillowInventoryManager::GetCurrentClassMod, py::return_value_policy::reference)
        .def("SortInventory", &AWillowInventoryManager::SortInventory)
        .def("SortItems", &AWillowInventoryManager::SortItems)
        .def("SortWeapons", &AWillowInventoryManager::SortWeapons)
        .def("DiscardInventory", &AWillowInventoryManager::DiscardInventory)
        .def("eventHandlePickupQuery", &AWillowInventoryManager::eventHandlePickupQuery)
        .def("eventCopyInventory", &AWillowInventoryManager::eventCopyInventory)
        .def("FillWeaponSwitchSlots", &AWillowInventoryManager::FillWeaponSwitchSlots)
        .def("NextWeapon", &AWillowInventoryManager::NextWeapon)
        .def("PrevWeapon", &AWillowInventoryManager::PrevWeapon)
        .def("SwitchToBestWeapon", &AWillowInventoryManager::SwitchToBestWeapon)
        .def("ShouldSwitchToBestWeapon", &AWillowInventoryManager::ShouldSwitchToBestWeapon)
        .def("ReloadWeapon", &AWillowInventoryManager::ReloadWeapon)
        .def("ChangedWeapon", &AWillowInventoryManager::ChangedWeapon)
        .def("CancelWeaponChange", &AWillowInventoryManager::CancelWeaponChange)
        .def("ServerPlayerBuyBackInventory", &AWillowInventoryManager::ServerPlayerBuyBackInventory)
        .def("PlayerBuyBackItem", &AWillowInventoryManager::PlayerBuyBackItem)
        .def("ServerPlayerSoldItem", &AWillowInventoryManager::ServerPlayerSoldItem)
        .def("ServerPlayerSoldBackpackItem", &AWillowInventoryManager::ServerPlayerSoldBackpackItem)
        .def("PlayerSoldItem", &AWillowInventoryManager::PlayerSoldItem)
        .def("ServerThrowItemFromBackpack", &AWillowInventoryManager::ServerThrowItemFromBackpack)
        .def("ServerThrowWeaponFromBackpack", &AWillowInventoryManager::ServerThrowWeaponFromBackpack)
        .def("ThrowBackpackInventory", &AWillowInventoryManager::ThrowBackpackInventory)
        .def("ServerReadyWeaponFromBackpack", &AWillowInventoryManager::ServerReadyWeaponFromBackpack)
        .def("ServerReadyItemFromBackpack", &AWillowInventoryManager::ServerReadyItemFromBackpack)
        .def("ReadyBackpackInventory", &AWillowInventoryManager::ReadyBackpackInventory)
        .def("SendEquipLocThingToBackpack", &AWillowInventoryManager::SendEquipLocThingToBackpack)
        .def("SendSlottedThingToBackpack", &AWillowInventoryManager::SendSlottedThingToBackpack)
        .def("ServerSwitchQuickSlot", &AWillowInventoryManager::ServerSwitchQuickSlot)
        .def("SwitchQuickSlot", &AWillowInventoryManager::SwitchQuickSlot)
        .def("GetWeaponInSlot", &AWillowInventoryManager::GetWeaponInSlot, py::return_value_policy::reference)
        .def("OnDroppedInventory", &AWillowInventoryManager::OnDroppedInventory)
        .def("ClientOnDroppedInventory", &AWillowInventoryManager::ClientOnDroppedInventory)
        .def("ClientConditionalIncrementPickupStats", &AWillowInventoryManager::ClientConditionalIncrementPickupStats)
        .def("ServerIncrementItemPickedUpStats", &AWillowInventoryManager::ServerIncrementItemPickedUpStats)
        .def("CheckItemAgainstBackpackInventoryBeingEquipped", &AWillowInventoryManager::CheckItemAgainstBackpackInventoryBeingEquipped)
        .def("ServerIncrementWeaponPickedUpStats", &AWillowInventoryManager::ServerIncrementWeaponPickedUpStats)
        .def("CheckWeaponAgainstEquippedWeaponsBeingSwapped", &AWillowInventoryManager::CheckWeaponAgainstEquippedWeaponsBeingSwapped)
        .def("CheckWeaponAgainstBackpackInventoryBeingEquipped", &AWillowInventoryManager::CheckWeaponAgainstBackpackInventoryBeingEquipped)
        .def("InventoryTransitionInProgress", &AWillowInventoryManager::InventoryTransitionInProgress)
        .def("IncPlayerRarityStat", &AWillowInventoryManager::IncPlayerRarityStat)
        .def("GetMatchedSetRarity", &AWillowInventoryManager::GetMatchedSetRarity)
        .def("OnEquipped", &AWillowInventoryManager::OnEquipped)
        .def("IsRecent", &AWillowInventoryManager::IsRecent)
        .def("RemoveInventoryFromBackpack", &AWillowInventoryManager::RemoveInventoryFromBackpack)
        .def("AddInventoryToBackpack", &AWillowInventoryManager::AddInventoryToBackpack)
        .def("ClientAddItemToBackpack", &AWillowInventoryManager::ClientAddItemToBackpack)
        .def("ClientAddWeaponToBackpack", &AWillowInventoryManager::ClientAddWeaponToBackpack)
        .def("GiveStoredAmmoBeforeGoingToBackpack", &AWillowInventoryManager::GiveStoredAmmoBeforeGoingToBackpack)
        .def("eventAddClientSideInventoryToBackpackInventory", &AWillowInventoryManager::eventAddClientSideInventoryToBackpackInventory)
        .def("AddBackpackItemFromDefinitionData", &AWillowInventoryManager::AddBackpackItemFromDefinitionData)
        .def("AddBackpackWeaponFromDefinitionData", &AWillowInventoryManager::AddBackpackWeaponFromDefinitionData)
        .def("AddBackpackInventory", &AWillowInventoryManager::AddBackpackInventory)
        .def("InternalAddBackpackInventory", &AWillowInventoryManager::InternalAddBackpackInventory)
        .def("InventoryUnreadied", &AWillowInventoryManager::InventoryUnreadied)
        .def("ServerUpdateBackpackInventoryCount", &AWillowInventoryManager::ServerUpdateBackpackInventoryCount)
        .def("UpdateBackpackInventoryCount", &AWillowInventoryManager::UpdateBackpackInventoryCount)
        .def("UpdatePawnGearLikenessComponents", &AWillowInventoryManager::UpdatePawnGearLikenessComponents)
        .def("SetHolsteredWeapon", &AWillowInventoryManager::SetHolsteredWeapon)
        .def("ReplaceHolsteredWeapon", &AWillowInventoryManager::ReplaceHolsteredWeapon)
        .def("FindBestHolsteredWeapon", &AWillowInventoryManager::FindBestHolsteredWeapon, py::return_value_policy::reference)
        .def("InventoryReadied", &AWillowInventoryManager::InventoryReadied)
        .def("RemoveFromInventory", &AWillowInventoryManager::RemoveFromInventory)
        .def("HasRoomInInventoryFor", &AWillowInventoryManager::HasRoomInInventoryFor)
        .def("GetEmptyBackpackSlots", &AWillowInventoryManager::GetEmptyBackpackSlots)
        .def("InventoryShouldBeReadiedWhenEquipped", &AWillowInventoryManager::InventoryShouldBeReadiedWhenEquipped)
        .def("GiveGrenadeToPlayer", &AWillowInventoryManager::GiveGrenadeToPlayer)
        .def("GiveGrenadeToPlayerIfGrenadeMod", &AWillowInventoryManager::GiveGrenadeToPlayerIfGrenadeMod)
        .def("AddInventory", &AWillowInventoryManager::AddInventory)
        .def("GetOwningPlayerController", &AWillowInventoryManager::GetOwningPlayerController, py::return_value_policy::reference)
        .def("eventGetItemList", &AWillowInventoryManager::eventGetItemList)
        .def("eventGetWeaponList", &AWillowInventoryManager::eventGetWeaponList)
        .def("eventUnreadyExcessWeapons", &AWillowInventoryManager::eventUnreadyExcessWeapons)
        .def("SetWeaponReadyMax", &AWillowInventoryManager::SetWeaponReadyMax)
        .def("SetupForPlayer", &AWillowInventoryManager::SetupForPlayer)
        .def("SetupFor", &AWillowInventoryManager::SetupFor)
        .def("eventReplicatedEvent", &AWillowInventoryManager::eventReplicatedEvent)
        .def("GetWeaponReadyMax", &AWillowInventoryManager::GetWeaponReadyMax)
        .def("CountReadiedWeapons", &AWillowInventoryManager::CountReadiedWeapons)
        .def("SetInventoryMaxSize", &AWillowInventoryManager::SetInventoryMaxSize)
        .def("GetUnreadiedInventoryMaxSize", &AWillowInventoryManager::GetUnreadiedInventoryMaxSize)
        .def("CountUnreadiedInventory", &AWillowInventoryManager::CountUnreadiedInventory)
        .def("FindLeastValuableWeapon", &AWillowInventoryManager::FindLeastValuableWeapon, py::return_value_policy::reference)
        .def("FindLeastValuableItem", &AWillowInventoryManager::FindLeastValuableItem, py::return_value_policy::reference)
        .def("ItemActors", &AWillowInventoryManager::ItemActors)
          ;
}