/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x6526fc8.hpp>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
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

yordle::data::meta::x6526fc8::x6526fc8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xdffc8083 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3757867139u);
    if(ptr_xdffc8083 != nullptr) {
        xdffc8083 = ptr_xdffc8083->value;
    }

    auto ptr_x72f09a8 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(120523176u);
    if(ptr_x72f09a8 != nullptr) {
        x72f09a8 = ptr_x72f09a8->value;
    }

    auto ptr_x63a11585 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1671501189u);
    if(ptr_x63a11585 != nullptr) {
        x63a11585 = ptr_x63a11585->value;
    }

    auto ptr_xdfe897e0 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3756562400u);
    if(ptr_xdfe897e0 != nullptr) {
        xdfe897e0 = ptr_xdfe897e0->value;
    }

    auto ptr_x2789b379 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(663335801u);
    if(ptr_x2789b379 != nullptr) {
        x2789b379 = ptr_x2789b379->value;
    }

    auto ptr_xf5013cfa = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4110499066u);
    if(ptr_xf5013cfa != nullptr) {
        xf5013cfa = ptr_xf5013cfa->value;
    }

    auto ptr_x7eddbbc1 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2128460737u);
    if(ptr_x7eddbbc1 != nullptr) {
        x7eddbbc1 = ptr_x7eddbbc1->value;
    }

    auto ptr_ViewPaneDefinition = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2330109623u);
    if(ptr_ViewPaneDefinition != nullptr) {
        ViewPaneDefinition = yordle::data::meta::deserialize<yordle::data::meta::ViewPaneDefinition>(ptr_ViewPaneDefinition, 2330109623u);
    }

    auto ptr_x6bb10f7a = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1806765946u);
    if(ptr_x6bb10f7a != nullptr) {
        x6bb10f7a = yordle::data::meta::deserialize<yordle::data::meta::ViewPaneDefinition>(ptr_x6bb10f7a, 2330109623u);
    }
}
