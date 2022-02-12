/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/BuffData.hpp>

#include <yordle/data/meta/bin_defs/VfxSpawnConditions.hpp>
#include <yordle/data/meta/bin_defs/TooltipInstanceBuff.hpp>
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

yordle::data::meta::BuffData::BuffData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mVfxSpawnConditions = prop->cast_prop<yordle::data::prop::set_prop>(2672799421u);
    if(ptr_mVfxSpawnConditions != nullptr) {
        for(const auto &set_mVfxSpawnConditions_entry : ptr_mVfxSpawnConditions->value) {
            auto ptr_mVfxSpawnConditions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mVfxSpawnConditions_entry);
            if(ptr_mVfxSpawnConditions_entry != nullptr) {
                mVfxSpawnConditions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::VfxSpawnConditions>(ptr_mVfxSpawnConditions_entry, 2833994484u));
            }
        }
    }

    auto ptr_mDescription = prop->cast_prop<yordle::data::prop::string_prop>(4059172210u);
    if(ptr_mDescription != nullptr) {
        mDescription = ptr_mDescription->value;
    }

    auto ptr_mTooltipData = prop->cast_prop<yordle::data::prop::structure_prop>(674324571u);
    if(ptr_mTooltipData != nullptr) {
        mTooltipData = yordle::data::meta::deserialize<yordle::data::meta::TooltipInstanceBuff>(ptr_mTooltipData, 1588263926u);
    }

    auto ptr_x62e282aa = prop->cast_prop<yordle::data::prop::bool_prop>(1659011754u);
    if(ptr_x62e282aa != nullptr) {
        x62e282aa = ptr_x62e282aa->value;
    }

    auto ptr_mShowDuration = prop->cast_prop<yordle::data::prop::bool_prop>(3490082433u);
    if(ptr_mShowDuration != nullptr) {
        mShowDuration = ptr_mShowDuration->value;
    }

    auto ptr_xd019c1 = prop->cast_prop<yordle::data::prop::bool_prop>(13638081u);
    if(ptr_xd019c1 != nullptr) {
        xd019c1 = ptr_xd019c1->value;
    }

    auto ptr_mFloatVarsDecimals = prop->cast_prop<yordle::data::prop::set_prop>(439122960u);
    if(ptr_mFloatVarsDecimals != nullptr) {
        auto index_mFloatVarsDecimals = 0;
        for(const auto &set_mFloatVarsDecimals_entry : ptr_mFloatVarsDecimals->value) {
            auto ptr_mFloatVarsDecimals_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::int32_prop>(set_mFloatVarsDecimals_entry);
            if(ptr_mFloatVarsDecimals_entry != nullptr) {
                mFloatVarsDecimals[index_mFloatVarsDecimals] = ptr_mFloatVarsDecimals_entry->value;
            }
            index_mFloatVarsDecimals++;
        }
    }

    auto ptr_mBuffAttributeFlag = prop->cast_prop<yordle::data::prop::uint8_prop>(3621963549u);
    if(ptr_mBuffAttributeFlag != nullptr) {
        mBuffAttributeFlag = ptr_mBuffAttributeFlag->value;
    }
}
