/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xdf0a069.hpp>

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

yordle::data::meta::xdf0a069::xdf0a069(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x565b05cb = prop->cast_prop<yordle::data::prop::set_prop>(1448805835u);
    if(ptr_x565b05cb != nullptr) {
        auto index_x565b05cb = 0;
        for(const auto &set_x565b05cb_entry : ptr_x565b05cb->value) {
            auto ptr_x565b05cb_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x565b05cb_entry);
            if(ptr_x565b05cb_entry != nullptr) {
                x565b05cb[index_x565b05cb] = ptr_x565b05cb_entry->value;
            }
            index_x565b05cb++;
        }
    }
}
