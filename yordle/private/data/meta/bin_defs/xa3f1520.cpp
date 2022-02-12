/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xa3f1520.hpp>

#include <yordle/data/meta/bin_defs/xaba5f12d.hpp>
#include <yordle/data/meta/bin_defs/x889fe194.hpp>
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

yordle::data::meta::xa3f1520::xa3f1520(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x889fe194(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xef29baeb = prop->cast_prop<yordle::data::prop::set_prop>(4012489451u);
    if(ptr_xef29baeb != nullptr) {
        for(const auto &set_xef29baeb_entry : ptr_xef29baeb->value) {
            auto ptr_xef29baeb_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_xef29baeb_entry);
            if(ptr_xef29baeb_entry != nullptr) {
                xef29baeb.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xaba5f12d>(ptr_xef29baeb_entry, 2879779117u));
            }
        }
    }

    auto ptr_xee29b958 = prop->cast_prop<yordle::data::prop::set_prop>(3995711832u);
    if(ptr_xee29b958 != nullptr) {
        for(const auto &set_xee29b958_entry : ptr_xee29b958->value) {
            auto ptr_xee29b958_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_xee29b958_entry);
            if(ptr_xee29b958_entry != nullptr) {
                xee29b958.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xaba5f12d>(ptr_xee29b958_entry, 2879779117u));
            }
        }
    }

    auto ptr_xf4cd9851 = prop->cast_prop<yordle::data::prop::uint32_prop>(4107114577u);
    if(ptr_xf4cd9851 != nullptr) {
        xf4cd9851 = ptr_xf4cd9851->value;
    }

    auto ptr_x67b34b53 = prop->cast_prop<yordle::data::prop::float32_prop>(1739803475u);
    if(ptr_x67b34b53 != nullptr) {
        x67b34b53 = ptr_x67b34b53->value;
    }

    auto ptr_x12682a3e = prop->cast_prop<yordle::data::prop::float32_prop>(308816446u);
    if(ptr_x12682a3e != nullptr) {
        x12682a3e = ptr_x12682a3e->value;
    }

    auto ptr_xce79296c = prop->cast_prop<yordle::data::prop::bool_prop>(3464046956u);
    if(ptr_xce79296c != nullptr) {
        xce79296c = ptr_xce79296c->value;
    }

    auto ptr_x9aa349bf = prop->cast_prop<yordle::data::prop::bool_prop>(2594392511u);
    if(ptr_x9aa349bf != nullptr) {
        x9aa349bf = ptr_x9aa349bf->value;
    }
}