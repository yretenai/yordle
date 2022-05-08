/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapThemeMusic.hpp>

#include <yordle/data/meta/bin_defs/MapComponent.hpp>
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

yordle::data::meta::MapThemeMusic::MapThemeMusic(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapComponent(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_LocalThemeMusic = prop->cast_prop<yordle::data::prop::string_prop>(3546830876u);
    if(ptr_LocalThemeMusic != nullptr) {
        LocalThemeMusic = ptr_LocalThemeMusic->value;
    }

    auto ptr_ThemeMusicTransitionEvent = prop->cast_prop<yordle::data::prop::string_prop>(1036822818u);
    if(ptr_ThemeMusicTransitionEvent != nullptr) {
        ThemeMusicTransitionEvent = ptr_ThemeMusicTransitionEvent->value;
    }

    auto ptr_x86a36ce1 = prop->cast_prop<yordle::data::prop::string_prop>(2258857185u);
    if(ptr_x86a36ce1 != nullptr) {
        x86a36ce1 = ptr_x86a36ce1->value;
    }

    auto ptr_xdce1f159 = prop->cast_prop<yordle::data::prop::string_prop>(3705794905u);
    if(ptr_xdce1f159 != nullptr) {
        xdce1f159 = ptr_xdce1f159->value;
    }
}
