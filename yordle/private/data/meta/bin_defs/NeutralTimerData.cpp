/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/NeutralTimerData.hpp>

#include <yordle/data/meta/bin_defs/NeutralTimerSourceIconData.hpp>
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

yordle::data::meta::NeutralTimerData::NeutralTimerData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTimerKeyName = prop->cast_prop<yordle::data::prop::string_prop>(2215458355u);
    if(ptr_mTimerKeyName != nullptr) {
        mTimerKeyName = ptr_mTimerKeyName->value;
    }

    auto ptr_mTooltip = prop->cast_prop<yordle::data::prop::string_prop>(4288851731u);
    if(ptr_mTooltip != nullptr) {
        mTooltip = ptr_mTooltip->value;
    }

    auto ptr_mTooltipCampName = prop->cast_prop<yordle::data::prop::string_prop>(648165165u);
    if(ptr_mTooltipCampName != nullptr) {
        mTooltipCampName = ptr_mTooltipCampName->value;
    }

    auto ptr_mTooltipRespawn = prop->cast_prop<yordle::data::prop::string_prop>(3490465545u);
    if(ptr_mTooltipRespawn != nullptr) {
        mTooltipRespawn = ptr_mTooltipRespawn->value;
    }

    auto ptr_mTooltipChatNameOrder = prop->cast_prop<yordle::data::prop::string_prop>(3747069382u);
    if(ptr_mTooltipChatNameOrder != nullptr) {
        mTooltipChatNameOrder = ptr_mTooltipChatNameOrder->value;
    }

    auto ptr_mTooltipChatNameChaos = prop->cast_prop<yordle::data::prop::string_prop>(2991278406u);
    if(ptr_mTooltipChatNameChaos != nullptr) {
        mTooltipChatNameChaos = ptr_mTooltipChatNameChaos->value;
    }

    auto ptr_mSourceIcons = prop->cast_prop<yordle::data::prop::map_prop>(1512598209u);
    if(ptr_mSourceIcons != nullptr) {
        for(const auto &set_mSourceIcons_pair : ptr_mSourceIcons->value) {
            auto ptr_mSourceIcons_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mSourceIcons_pair.first);
            auto ptr_mSourceIcons_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mSourceIcons_pair.second);
            if(ptr_mSourceIcons_key != nullptr && ptr_mSourceIcons_value != nullptr) {
                mSourceIcons.emplace(ptr_mSourceIcons_key->value, yordle::data::meta::deserialize<yordle::data::meta::NeutralTimerSourceIconData>(ptr_mSourceIcons_value, 230608261u));
            }
        }
    }
}