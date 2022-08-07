/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x8082661a.hpp>

#include <yordle/data/meta/bin_defs/x6e03cc25.hpp>
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

yordle::data::meta::x8082661a::x8082661a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xccaadab7 = prop->cast_prop<yordle::data::prop::set_prop>(3433749175u);
    if(ptr_xccaadab7 != nullptr) {
        auto index_xccaadab7 = 0;
        for(const auto &set_xccaadab7_entry : ptr_xccaadab7->value) {
            auto ptr_xccaadab7_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xccaadab7_entry);
            if(ptr_xccaadab7_entry != nullptr) {
                xccaadab7[index_xccaadab7] = yordle::data::meta::deserialize<yordle::data::meta::x6e03cc25>(ptr_xccaadab7_entry, 1845742629u);
            }
            index_xccaadab7++;
        }
    }

    auto ptr_x7f34b6b3 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2134161075u);
    if(ptr_x7f34b6b3 != nullptr) {
        x7f34b6b3 = yordle::data::meta::deserialize<yordle::data::meta::x6e03cc25>(ptr_x7f34b6b3, 1845742629u);
    }

    auto ptr_xf43b8449 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4097541193u);
    if(ptr_xf43b8449 != nullptr) {
        xf43b8449 = ptr_xf43b8449->value;
    }

    auto ptr_enlargeTime = prop->cast_prop<yordle::data::prop::float32_prop>(3259361652u);
    if(ptr_enlargeTime != nullptr) {
        enlargeTime = ptr_enlargeTime->value;
    }

    auto ptr_enlargeSize = prop->cast_prop<yordle::data::prop::float32_prop>(1648765196u);
    if(ptr_enlargeSize != nullptr) {
        enlargeSize = ptr_enlargeSize->value;
    }

    auto ptr_settleTime = prop->cast_prop<yordle::data::prop::float32_prop>(1864079291u);
    if(ptr_settleTime != nullptr) {
        settleTime = ptr_settleTime->value;
    }
}