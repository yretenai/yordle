/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x486fc5cf.hpp>

#include <yordle/data/meta/bin_defs/xbce5fa3e.hpp>
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

yordle::data::meta::x486fc5cf::x486fc5cf(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x12f8b50b = prop->cast_prop<yordle::data::prop::set_prop>(318289163u);
    if(ptr_x12f8b50b != nullptr) {
        auto index_x12f8b50b = 0;
        for(const auto &set_x12f8b50b_entry : ptr_x12f8b50b->value) {
            auto ptr_x12f8b50b_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x12f8b50b_entry);
            if(ptr_x12f8b50b_entry != nullptr) {
                x12f8b50b[index_x12f8b50b] = yordle::data::meta::deserialize<yordle::data::meta::xbce5fa3e>(ptr_x12f8b50b_entry, 3169188414u);
            }
            index_x12f8b50b++;
        }
    }
}
