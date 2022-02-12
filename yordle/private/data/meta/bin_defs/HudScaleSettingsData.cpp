/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HudScaleSettingsData.hpp>

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

yordle::data::meta::HudScaleSettingsData::HudScaleSettingsData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_maximumGlobalScale = prop->cast_prop<yordle::data::prop::float32_prop>(1488544768u);
    if(ptr_maximumGlobalScale != nullptr) {
        maximumGlobalScale = ptr_maximumGlobalScale->value;
    }

    auto ptr_minimumGlobalScale = prop->cast_prop<yordle::data::prop::float32_prop>(67517766u);
    if(ptr_minimumGlobalScale != nullptr) {
        minimumGlobalScale = ptr_minimumGlobalScale->value;
    }

    auto ptr_maximumMinimapScale = prop->cast_prop<yordle::data::prop::float32_prop>(742591506u);
    if(ptr_maximumMinimapScale != nullptr) {
        maximumMinimapScale = ptr_maximumMinimapScale->value;
    }

    auto ptr_minimumMinimapScale = prop->cast_prop<yordle::data::prop::float32_prop>(851421276u);
    if(ptr_minimumMinimapScale != nullptr) {
        minimumMinimapScale = ptr_minimumMinimapScale->value;
    }

    auto ptr_x6b8896b6 = prop->cast_prop<yordle::data::prop::float32_prop>(1804113590u);
    if(ptr_x6b8896b6 != nullptr) {
        x6b8896b6 = ptr_x6b8896b6->value;
    }

    auto ptr_xb565cf40 = prop->cast_prop<yordle::data::prop::float32_prop>(3043348288u);
    if(ptr_xb565cf40 != nullptr) {
        xb565cf40 = ptr_xb565cf40->value;
    }

    auto ptr_maximumPracticeToolScale = prop->cast_prop<yordle::data::prop::float32_prop>(1058706468u);
    if(ptr_maximumPracticeToolScale != nullptr) {
        maximumPracticeToolScale = ptr_maximumPracticeToolScale->value;
    }

    auto ptr_minimumPracticeToolScale = prop->cast_prop<yordle::data::prop::float32_prop>(2642489786u);
    if(ptr_minimumPracticeToolScale != nullptr) {
        minimumPracticeToolScale = ptr_minimumPracticeToolScale->value;
    }

    auto ptr_maximumChatScale = prop->cast_prop<yordle::data::prop::float32_prop>(3569638079u);
    if(ptr_maximumChatScale != nullptr) {
        maximumChatScale = ptr_maximumChatScale->value;
    }

    auto ptr_minimumChatScale = prop->cast_prop<yordle::data::prop::float32_prop>(1949160637u);
    if(ptr_minimumChatScale != nullptr) {
        minimumChatScale = ptr_minimumChatScale->value;
    }
}
