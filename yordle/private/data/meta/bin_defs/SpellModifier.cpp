/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SpellModifier.hpp>

#include <yordle/data/meta/bin_defs/RatioConversion.hpp>
#include <yordle/data/meta/bin_defs/x4379a5b2.hpp>
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

yordle::data::meta::SpellModifier::SpellModifier(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mModifierID = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2444616212u);
    if(ptr_mModifierID != nullptr) {
        mModifierID = ptr_mModifierID->value;
    }

    auto ptr_xa9cc2bf6 = prop->cast_prop<yordle::data::prop::uint8_prop>(2848730102u);
    if(ptr_xa9cc2bf6 != nullptr) {
        xa9cc2bf6 = ptr_xa9cc2bf6->value;
    }

    auto ptr_xa47f56d7 = prop->cast_prop<yordle::data::prop::uint8_prop>(2759808727u);
    if(ptr_xa47f56d7 != nullptr) {
        xa47f56d7 = ptr_xa47f56d7->value;
    }

    auto ptr_x5b1192f5 = prop->cast_prop<yordle::data::prop::uint32_prop>(1527878389u);
    if(ptr_x5b1192f5 != nullptr) {
        x5b1192f5 = ptr_x5b1192f5->value;
    }

    auto ptr_x441a3020 = prop->cast_prop<yordle::data::prop::set_prop>(1142566944u);
    if(ptr_x441a3020 != nullptr) {
        for(const auto &set_x441a3020_entry : ptr_x441a3020->value) {
            auto ptr_x441a3020_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x441a3020_entry);
            if(ptr_x441a3020_entry != nullptr) {
                x441a3020.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::RatioConversion>(ptr_x441a3020_entry, 3393100796u));
            }
        }
    }

    auto ptr_xddbea054 = prop->cast_prop<yordle::data::prop::set_prop>(3720257620u);
    if(ptr_xddbea054 != nullptr) {
        for(const auto &set_xddbea054_entry : ptr_xddbea054->value) {
            auto ptr_xddbea054_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xddbea054_entry);
            if(ptr_xddbea054_entry != nullptr) {
                xddbea054.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x4379a5b2>(ptr_xddbea054_entry, 1132045746u));
            }
        }
    }
}