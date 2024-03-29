/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapAudio.hpp>

#include <yordle/data/meta/bin_defs/GenericMapPlaceable.hpp>
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

yordle::data::meta::MapAudio::MapAudio(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::GenericMapPlaceable(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_EventName = prop->cast_prop<yordle::data::prop::string_prop>(705137820u);
    if(ptr_EventName != nullptr) {
        EventName = ptr_EventName->value;
    }

    auto ptr_AudioType = prop->cast_prop<yordle::data::prop::uint32_prop>(1984969617u);
    if(ptr_AudioType != nullptr) {
        AudioType = ptr_AudioType->value;
    }

    auto ptr_startTime = prop->cast_prop<yordle::data::prop::float32_prop>(2322632174u);
    if(ptr_startTime != nullptr) {
        startTime = ptr_startTime->value;
    }

    auto ptr_xdf1b8a47 = prop->cast_prop<yordle::data::prop::float32_prop>(3743124039u);
    if(ptr_xdf1b8a47 != nullptr) {
        xdf1b8a47 = ptr_xdf1b8a47->value;
    }

    auto ptr_x518f49b9 = prop->cast_prop<yordle::data::prop::float32_prop>(1368345017u);
    if(ptr_x518f49b9 != nullptr) {
        x518f49b9 = ptr_x518f49b9->value;
    }
}
