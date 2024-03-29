/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SocialPanelViewController.hpp>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/xcce3468e.hpp>
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

yordle::data::meta::SocialPanelViewController::SocialPanelViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_x7a20b0c8 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2048962760u);
    if(ptr_x7a20b0c8 != nullptr) {
        x7a20b0c8 = ptr_x7a20b0c8->value;
    }

    auto ptr_xebc169a4 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3955321252u);
    if(ptr_xebc169a4 != nullptr) {
        xebc169a4 = ptr_xebc169a4->value;
    }

    auto ptr_x18b07cca = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(414219466u);
    if(ptr_x18b07cca != nullptr) {
        x18b07cca = ptr_x18b07cca->value;
    }

    auto ptr_ViewPaneDefinition = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2330109623u);
    if(ptr_ViewPaneDefinition != nullptr) {
        ViewPaneDefinition = yordle::data::meta::deserialize<yordle::data::meta::ViewPaneDefinition>(ptr_ViewPaneDefinition, 2330109623u);
    }

    auto ptr_xdcddaed5 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3705515733u);
    if(ptr_xdcddaed5 != nullptr) {
        xdcddaed5 = yordle::data::meta::deserialize<yordle::data::meta::xcce3468e>(ptr_xdcddaed5, 3437446798u);
    }

    auto ptr_xd7154637 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3608495671u);
    if(ptr_xd7154637 != nullptr) {
        xd7154637 = ptr_xd7154637->value;
    }

    auto ptr_xd2420273 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3527541363u);
    if(ptr_xd2420273 != nullptr) {
        xd2420273 = ptr_xd2420273->value;
    }
}
