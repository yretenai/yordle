/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xf30734a3.hpp>

#include <yordle/data/meta/bin_defs/x682de9e7.hpp>
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

yordle::data::meta::xf30734a3::xf30734a3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x5d13c4eb = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1561576683u);
    if(ptr_x5d13c4eb != nullptr) {
        x5d13c4eb = ptr_x5d13c4eb->value;
    }

    auto ptr_x2a9bbd14 = prop->cast_prop<yordle::data::prop::set_prop>(714849556u);
    if(ptr_x2a9bbd14 != nullptr) {
        for(const auto &set_x2a9bbd14_entry : ptr_x2a9bbd14->value) {
            auto ptr_x2a9bbd14_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x2a9bbd14_entry);
            if(ptr_x2a9bbd14_entry != nullptr) {
                x2a9bbd14.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x682de9e7>(ptr_x2a9bbd14_entry, 1747839463u));
            }
        }
    }
}
