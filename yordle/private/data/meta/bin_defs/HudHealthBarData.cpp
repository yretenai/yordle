/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HudHealthBarData.hpp>

#include <yordle/data/meta/bin_defs/HudHealthBarBurstData.hpp>
#include <yordle/data/meta/bin_defs/HudHealthBarBurstHealData.hpp>
#include <yordle/data/meta/bin_defs/HudHealthBarProgressiveTickData.hpp>
#include <yordle/data/meta/bin_defs/HudHealthBarFadeData.hpp>
#include <yordle/data/meta/bin_defs/HudHealthBarDefenseModifierData.hpp>
#include <yordle/data/meta/bin_defs/HudHealthBarDefenseIconData.hpp>
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

yordle::data::meta::HudHealthBarData::HudHealthBarData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_burstData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1020358993u);
    if(ptr_burstData != nullptr) {
        burstData = yordle::data::meta::deserialize<yordle::data::meta::HudHealthBarBurstData>(ptr_burstData, 234651109u);
    }

    auto ptr_towerBurstData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1629775744u);
    if(ptr_towerBurstData != nullptr) {
        towerBurstData = yordle::data::meta::deserialize<yordle::data::meta::HudHealthBarBurstData>(ptr_towerBurstData, 234651109u);
    }

    auto ptr_burstHealData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(845477647u);
    if(ptr_burstHealData != nullptr) {
        burstHealData = yordle::data::meta::deserialize<yordle::data::meta::HudHealthBarBurstHealData>(ptr_burstHealData, 4246198531u);
    }

    auto ptr_championProgressiveTickData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(586300972u);
    if(ptr_championProgressiveTickData != nullptr) {
        championProgressiveTickData = yordle::data::meta::deserialize<yordle::data::meta::HudHealthBarProgressiveTickData>(ptr_championProgressiveTickData, 503820853u);
    }

    auto ptr_fadeData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3172238683u);
    if(ptr_fadeData != nullptr) {
        fadeData = yordle::data::meta::deserialize<yordle::data::meta::HudHealthBarFadeData>(ptr_fadeData, 1035555423u);
    }

    auto ptr_defenseModifierData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1710916258u);
    if(ptr_defenseModifierData != nullptr) {
        defenseModifierData = yordle::data::meta::deserialize<yordle::data::meta::HudHealthBarDefenseModifierData>(ptr_defenseModifierData, 749793326u);
    }

    auto ptr_defenseIconData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1198396770u);
    if(ptr_defenseIconData != nullptr) {
        defenseIconData = yordle::data::meta::deserialize<yordle::data::meta::HudHealthBarDefenseIconData>(ptr_defenseIconData, 937928230u);
    }

    auto ptr_untargetableAlpha = prop->cast_prop<yordle::data::prop::float32_prop>(2553509753u);
    if(ptr_untargetableAlpha != nullptr) {
        untargetableAlpha = ptr_untargetableAlpha->value;
    }

    auto ptr_resurrectingAlpha = prop->cast_prop<yordle::data::prop::float32_prop>(1157731036u);
    if(ptr_resurrectingAlpha != nullptr) {
        resurrectingAlpha = ptr_resurrectingAlpha->value;
    }
}
