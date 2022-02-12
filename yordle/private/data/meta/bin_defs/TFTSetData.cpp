/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTSetData.hpp>

#include <yordle/data/meta/bin_defs/MapCharacterList.hpp>
#include <yordle/data/meta/bin_defs/TFTItemList.hpp>
#include <yordle/data/meta/bin_defs/TftTraitList.hpp>
#include <yordle/data/meta/bin_defs/x369a22b9.hpp>
#include <yordle/data/meta/bin_defs/xf260c3ae.hpp>
#include <yordle/data/meta/bin_defs/TFTUnitUpgradeData.hpp>
#include <yordle/data/meta/bin_defs/GameModeConstant.hpp>
#include <yordle/data/meta/bin_defs/TFTStageData.hpp>
#include <yordle/data/meta/bin_defs/ScriptDataObjectList.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

yordle::data::meta::TFTSetData::TFTSetData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_TftGameType = prop->cast_prop<yordle::data::prop::uint32_prop>(2833009347u);
    if(ptr_TftGameType != nullptr) {
        TftGameType = ptr_TftGameType->value;
    }

    auto ptr_number = prop->cast_prop<yordle::data::prop::uint32_prop>(467038368u);
    if(ptr_number != nullptr) {
        number = ptr_number->value;
    }

    auto ptr_Mutator = prop->cast_prop<yordle::data::prop::string_prop>(3473488713u);
    if(ptr_Mutator != nullptr) {
        Mutator = ptr_Mutator->value;
    }

    auto ptr_DebugCharacterLists = prop->cast_prop<yordle::data::prop::set_prop>(1919625892u);
    if(ptr_DebugCharacterLists != nullptr) {
        for(const auto &set_DebugCharacterLists_entry : ptr_DebugCharacterLists->value) {
            auto ptr_DebugCharacterLists_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_DebugCharacterLists_entry);
            if(ptr_DebugCharacterLists_entry != nullptr) {
                DebugCharacterLists.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::MapCharacterList>(199060396u, ptr_DebugCharacterLists_entry->value));
            }
        }
    }

    auto ptr_characterLists = prop->cast_prop<yordle::data::prop::set_prop>(137362161u);
    if(ptr_characterLists != nullptr) {
        for(const auto &set_characterLists_entry : ptr_characterLists->value) {
            auto ptr_characterLists_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_characterLists_entry);
            if(ptr_characterLists_entry != nullptr) {
                characterLists.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::MapCharacterList>(199060396u, ptr_characterLists_entry->value));
            }
        }
    }

    auto ptr_itemLists = prop->cast_prop<yordle::data::prop::set_prop>(1298046227u);
    if(ptr_itemLists != nullptr) {
        for(const auto &set_itemLists_entry : ptr_itemLists->value) {
            auto ptr_itemLists_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_itemLists_entry);
            if(ptr_itemLists_entry != nullptr) {
                itemLists.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TFTItemList>(2541164198u, ptr_itemLists_entry->value));
            }
        }
    }

    auto ptr_xf74504c0 = prop->cast_prop<yordle::data::prop::set_prop>(4148495552u);
    if(ptr_xf74504c0 != nullptr) {
        for(const auto &set_xf74504c0_entry : ptr_xf74504c0->value) {
            auto ptr_xf74504c0_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_xf74504c0_entry);
            if(ptr_xf74504c0_entry != nullptr) {
                xf74504c0.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TftTraitList>(1539106983u, ptr_xf74504c0_entry->value));
            }
        }
    }

    auto ptr_x90183782 = prop->cast_prop<yordle::data::prop::set_prop>(2417506178u);
    if(ptr_x90183782 != nullptr) {
        for(const auto &set_x90183782_entry : ptr_x90183782->value) {
            auto ptr_x90183782_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_x90183782_entry);
            if(ptr_x90183782_entry != nullptr) {
                x90183782.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::x369a22b9>(916071097u, ptr_x90183782_entry->value));
            }
        }
    }

    auto ptr_DropRateTables = prop->cast_prop<yordle::data::prop::map_prop>(721831827u);
    if(ptr_DropRateTables != nullptr) {
        for(const auto &set_DropRateTables_pair : ptr_DropRateTables->value) {
            auto ptr_DropRateTables_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_DropRateTables_pair.first);
            auto ptr_DropRateTables_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_DropRateTables_pair.second);
            if(ptr_DropRateTables_key != nullptr && ptr_DropRateTables_value != nullptr) {
                DropRateTables.emplace(ptr_DropRateTables_key->value, yordle::data::meta::bin_ref<yordle::data::meta::xf260c3ae>(4066427822u, ptr_DropRateTables_value->value));
            }
        }
    }

    auto ptr_UnitUpgrades = prop->cast_prop<yordle::data::prop::set_prop>(1739760738u);
    if(ptr_UnitUpgrades != nullptr) {
        for(const auto &set_UnitUpgrades_entry : ptr_UnitUpgrades->value) {
            auto ptr_UnitUpgrades_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_UnitUpgrades_entry);
            if(ptr_UnitUpgrades_entry != nullptr) {
                UnitUpgrades.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TFTUnitUpgradeData>(1963259073u, ptr_UnitUpgrades_entry->value));
            }
        }
    }

    auto ptr_ScriptData = prop->cast_prop<yordle::data::prop::map_prop>(3528691290u);
    if(ptr_ScriptData != nullptr) {
        for(const auto &set_ScriptData_pair : ptr_ScriptData->value) {
            auto ptr_ScriptData_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_ScriptData_pair.first);
            auto ptr_ScriptData_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_ScriptData_pair.second);
            if(ptr_ScriptData_key != nullptr && ptr_ScriptData_value != nullptr) {
                ScriptData.emplace(ptr_ScriptData_key->value, yordle::data::meta::deserialize<yordle::data::meta::GameModeConstant>(ptr_ScriptData_value, 1670770484u));
            }
        }
    }

    auto ptr_stages = prop->cast_prop<yordle::data::prop::set_prop>(77660666u);
    if(ptr_stages != nullptr) {
        for(const auto &set_stages_entry : ptr_stages->value) {
            auto ptr_stages_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_stages_entry);
            if(ptr_stages_entry != nullptr) {
                stages.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TFTStageData>(ptr_stages_entry, 4147633913u));
            }
        }
    }

    auto ptr_ScriptDataObjectLists = prop->cast_prop<yordle::data::prop::set_prop>(2288422058u);
    if(ptr_ScriptDataObjectLists != nullptr) {
        for(const auto &set_ScriptDataObjectLists_entry : ptr_ScriptDataObjectLists->value) {
            auto ptr_ScriptDataObjectLists_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_ScriptDataObjectLists_entry);
            if(ptr_ScriptDataObjectLists_entry != nullptr) {
                ScriptDataObjectLists.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::ScriptDataObjectList>(3171701405u, ptr_ScriptDataObjectLists_entry->value));
            }
        }
    }

    auto ptr_VfxResourceResolver = prop->cast_prop<yordle::data::prop::reference_prop>(2679170533u);
    if(ptr_VfxResourceResolver != nullptr) {
        VfxResourceResolver = yordle::data::meta::bin_ref<yordle::data::meta::ResourceResolver>(4013559603u, ptr_VfxResourceResolver->value);
    }

    auto ptr_x4e40838e = prop->cast_prop<yordle::data::prop::uint32_prop>(1312850830u);
    if(ptr_x4e40838e != nullptr) {
        x4e40838e = ptr_x4e40838e->value;
    }
}
