/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CompanionData.hpp>

#include <yordle/data/meta/bin_defs/BaseLoadoutData.hpp>
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

yordle::data::meta::CompanionData::CompanionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseLoadoutData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_rarity = prop->cast_prop<yordle::data::prop::uint32_prop>(1266615690u);
    if(ptr_rarity != nullptr) {
        rarity = ptr_rarity->value;
    }

    auto ptr_mCharacter = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1901814039u);
    if(ptr_mCharacter != nullptr) {
        mCharacter = ptr_mCharacter->value;
    }

    auto ptr_mSkinId = prop->cast_prop<yordle::data::prop::uint32_prop>(2831584420u);
    if(ptr_mSkinId != nullptr) {
        mSkinId = ptr_mSkinId->value;
    }

    auto ptr_Level = prop->cast_prop<yordle::data::prop::uint32_prop>(2610554845u);
    if(ptr_Level != nullptr) {
        Level = ptr_Level->value;
    }

    auto ptr_mDisabled = prop->cast_prop<yordle::data::prop::bool_prop>(1460531328u);
    if(ptr_mDisabled != nullptr) {
        mDisabled = ptr_mDisabled->value;
    }

    auto ptr_x65cc10b7 = prop->cast_prop<yordle::data::prop::set_prop>(1707872439u);
    if(ptr_x65cc10b7 != nullptr) {
        for(const auto &set_x65cc10b7_entry : ptr_x65cc10b7->value) {
            auto ptr_x65cc10b7_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_x65cc10b7_entry);
            if(ptr_x65cc10b7_entry != nullptr) {
                x65cc10b7.emplace_back(ptr_x65cc10b7_entry->value);
            }
        }
    }

    auto ptr_xd09f96bd = prop->cast_prop<yordle::data::prop::uint8_prop>(3500119741u);
    if(ptr_xd09f96bd != nullptr) {
        xd09f96bd = ptr_xd09f96bd->value;
    }

    auto ptr_speciesLink = prop->cast_prop<yordle::data::prop::string_prop>(416215309u);
    if(ptr_speciesLink != nullptr) {
        speciesLink = ptr_speciesLink->value;
    }

    auto ptr_mStandaloneCircleIcon = prop->cast_prop<yordle::data::prop::string_prop>(3290732214u);
    if(ptr_mStandaloneCircleIcon != nullptr) {
        mStandaloneCircleIcon = ptr_mStandaloneCircleIcon->value;
    }

    auto ptr_mStandaloneLoadoutsIcon = prop->cast_prop<yordle::data::prop::string_prop>(2243605595u);
    if(ptr_mStandaloneLoadoutsIcon != nullptr) {
        mStandaloneLoadoutsIcon = ptr_mStandaloneLoadoutsIcon->value;
    }

    auto ptr_mStandaloneLoadoutsLargeIcon = prop->cast_prop<yordle::data::prop::string_prop>(2404894612u);
    if(ptr_mStandaloneLoadoutsLargeIcon != nullptr) {
        mStandaloneLoadoutsLargeIcon = ptr_mStandaloneLoadoutsLargeIcon->value;
    }

    auto ptr_mLoadScreen = prop->cast_prop<yordle::data::prop::string_prop>(3501972704u);
    if(ptr_mLoadScreen != nullptr) {
        mLoadScreen = ptr_mLoadScreen->value;
    }
}
