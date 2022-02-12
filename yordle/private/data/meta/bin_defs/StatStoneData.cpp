/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/StatStoneData.hpp>

#include <yordle/data/meta/bin_defs/StatStoneEventToTrack.hpp>
#include <yordle/data/meta/bin_defs/StatStoneCategory.hpp>
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

yordle::data::meta::StatStoneData::StatStoneData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseLoadoutData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_EventsToTrack = prop->cast_prop<yordle::data::prop::set_prop>(2415261508u);
    if(ptr_EventsToTrack != nullptr) {
        for(const auto &set_EventsToTrack_entry : ptr_EventsToTrack->value) {
            auto ptr_EventsToTrack_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_EventsToTrack_entry);
            if(ptr_EventsToTrack_entry != nullptr) {
                EventsToTrack.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::StatStoneEventToTrack>(ptr_EventsToTrack_entry, 4146948500u));
            }
        }
    }

    auto ptr_category = prop->cast_prop<yordle::data::prop::reference_prop>(3475980913u);
    if(ptr_category != nullptr) {
        category = yordle::data::meta::bin_ref<yordle::data::meta::StatStoneCategory>(3156432820u, ptr_category->value);
    }

    auto ptr_xfb2a56ef = prop->cast_prop<yordle::data::prop::uint32_prop>(4213855983u);
    if(ptr_xfb2a56ef != nullptr) {
        xfb2a56ef = ptr_xfb2a56ef->value;
    }

    auto ptr_x286fc9c3 = prop->cast_prop<yordle::data::prop::uint32_prop>(678414787u);
    if(ptr_x286fc9c3 != nullptr) {
        x286fc9c3 = ptr_x286fc9c3->value;
    }

    auto ptr_Milestones = prop->cast_prop<yordle::data::prop::set_prop>(1401290250u);
    if(ptr_Milestones != nullptr) {
        for(const auto &set_Milestones_entry : ptr_Milestones->value) {
            auto ptr_Milestones_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint64_prop>(set_Milestones_entry);
            if(ptr_Milestones_entry != nullptr) {
                Milestones.emplace_back(ptr_Milestones_entry->value);
            }
        }
    }

    auto ptr_EpicStatStone = prop->cast_prop<yordle::data::prop::bool_prop>(1475661895u);
    if(ptr_EpicStatStone != nullptr) {
        EpicStatStone = ptr_EpicStatStone->value;
    }

    auto ptr_TriggeredFromScript = prop->cast_prop<yordle::data::prop::bool_prop>(2094353733u);
    if(ptr_TriggeredFromScript != nullptr) {
        TriggeredFromScript = ptr_TriggeredFromScript->value;
    }

    auto ptr_IsRetired = prop->cast_prop<yordle::data::prop::bool_prop>(487172646u);
    if(ptr_IsRetired != nullptr) {
        IsRetired = ptr_IsRetired->value;
    }

    auto ptr_trackingType = prop->cast_prop<yordle::data::prop::uint8_prop>(868103188u);
    if(ptr_trackingType != nullptr) {
        trackingType = ptr_trackingType->value;
    }

    auto ptr_stoneName = prop->cast_prop<yordle::data::prop::string_prop>(2007295361u);
    if(ptr_stoneName != nullptr) {
        stoneName = ptr_stoneName->value;
    }

    auto ptr_x92bd18ab = prop->cast_prop<yordle::data::prop::bool_prop>(2461866155u);
    if(ptr_x92bd18ab != nullptr) {
        x92bd18ab = ptr_x92bd18ab->value;
    }
}
