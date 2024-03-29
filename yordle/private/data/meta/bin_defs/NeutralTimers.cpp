/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/NeutralTimers.hpp>

#include <yordle/data/meta/bin_defs/NeutralTimerData.hpp>
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

yordle::data::meta::NeutralTimers::NeutralTimers(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xca2d9683 = prop->cast_prop<yordle::data::prop::set_prop>(3391985283u);
    if(ptr_xca2d9683 != nullptr) {
        for(const auto &set_xca2d9683_entry : ptr_xca2d9683->value) {
            auto ptr_xca2d9683_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xca2d9683_entry);
            if(ptr_xca2d9683_entry != nullptr) {
                xca2d9683.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::NeutralTimerData>(ptr_xca2d9683_entry, 964506025u));
            }
        }
    }
}
