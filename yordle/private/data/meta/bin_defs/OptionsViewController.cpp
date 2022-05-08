/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/OptionsViewController.hpp>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/OptionsTab.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
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

yordle::data::meta::OptionsViewController::OptionsViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_ViewPaneDefinition = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2330109623u);
    if(ptr_ViewPaneDefinition != nullptr) {
        ViewPaneDefinition = yordle::data::meta::deserialize<yordle::data::meta::ViewPaneDefinition>(ptr_ViewPaneDefinition, 2330109623u);
    }

    auto ptr_CloseButtonDefinition = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(893211270u);
    if(ptr_CloseButtonDefinition != nullptr) {
        CloseButtonDefinition = ptr_CloseButtonDefinition->value;
    }

    auto ptr_TabButtonDefinition = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1001273705u);
    if(ptr_TabButtonDefinition != nullptr) {
        TabButtonDefinition = ptr_TabButtonDefinition->value;
    }

    auto ptr_Button1Definition = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2767052001u);
    if(ptr_Button1Definition != nullptr) {
        Button1Definition = ptr_Button1Definition->value;
    }

    auto ptr_Button2Definition = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2129943644u);
    if(ptr_Button2Definition != nullptr) {
        Button2Definition = ptr_Button2Definition->value;
    }

    auto ptr_Tabs = prop->cast_prop<yordle::data::prop::set_prop>(203279661u);
    if(ptr_Tabs != nullptr) {
        for(const auto &set_Tabs_entry : ptr_Tabs->value) {
            auto ptr_Tabs_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_Tabs_entry);
            if(ptr_Tabs_entry != nullptr) {
                Tabs.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::OptionsTab>(2946448300u, ptr_Tabs_entry->value));
            }
        }
    }

    auto ptr_x5a46f90c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1514600716u);
    if(ptr_x5a46f90c != nullptr) {
        x5a46f90c = ptr_x5a46f90c->value;
    }

    auto ptr_LastItemPadding = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3998205451u);
    if(ptr_LastItemPadding != nullptr) {
        LastItemPadding = ptr_LastItemPadding->value;
    }

    auto ptr_x991fa1d6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2568987094u);
    if(ptr_x991fa1d6 != nullptr) {
        x991fa1d6 = ptr_x991fa1d6->value;
    }

    auto ptr_x1a34953e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(439653694u);
    if(ptr_x1a34953e != nullptr) {
        x1a34953e = ptr_x1a34953e->value;
    }

    auto ptr_xca71e7ba = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3396462522u);
    if(ptr_xca71e7ba != nullptr) {
        xca71e7ba = ptr_xca71e7ba->value;
    }

    auto ptr_xc8d5290 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(210588304u);
    if(ptr_xc8d5290 != nullptr) {
        xc8d5290 = ptr_xc8d5290->value;
    }

    auto ptr_xfbed4d38 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4226633016u);
    if(ptr_xfbed4d38 != nullptr) {
        xfbed4d38 = ptr_xfbed4d38->value;
    }

    auto ptr_x4d302530 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1295000880u);
    if(ptr_x4d302530 != nullptr) {
        x4d302530 = ptr_x4d302530->value;
    }
}
