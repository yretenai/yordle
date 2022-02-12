/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x7a9e7d89.hpp>

#include <yordle/data/meta/bin_defs/ICastRequirement.hpp>
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

yordle::data::meta::x7a9e7d89::x7a9e7d89(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x55205acb = prop->cast_prop<yordle::data::prop::float32_prop>(1428183755u);
    if(ptr_x55205acb != nullptr) {
        x55205acb = ptr_x55205acb->value;
    }

    auto ptr_x166d5141 = prop->cast_prop<yordle::data::prop::set_prop>(376262977u);
    if(ptr_x166d5141 != nullptr) {
        for(const auto &set_x166d5141_entry : ptr_x166d5141->value) {
            auto ptr_x166d5141_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_x166d5141_entry);
            if(ptr_x166d5141_entry != nullptr) {
                x166d5141.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ICastRequirement>(ptr_x166d5141_entry, 1550969638u));
            }
        }
    }

    auto ptr_x175e6650 = prop->cast_prop<yordle::data::prop::set_prop>(392062544u);
    if(ptr_x175e6650 != nullptr) {
        for(const auto &set_x175e6650_entry : ptr_x175e6650->value) {
            auto ptr_x175e6650_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_x175e6650_entry);
            if(ptr_x175e6650_entry != nullptr) {
                x175e6650.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ICastRequirement>(ptr_x175e6650_entry, 1550969638u));
            }
        }
    }

    auto ptr_xda83e690 = prop->cast_prop<yordle::data::prop::bool_prop>(3666077328u);
    if(ptr_xda83e690 != nullptr) {
        xda83e690 = ptr_xda83e690->value;
    }

    auto ptr_mAffectsTypeOverride = prop->cast_prop<yordle::data::prop::uint32_prop>(2718222602u);
    if(ptr_mAffectsTypeOverride != nullptr) {
        mAffectsTypeOverride = ptr_mAffectsTypeOverride->value;
    }

    auto ptr_mAffectsStatusOverride = prop->cast_prop<yordle::data::prop::uint32_prop>(1181323540u);
    if(ptr_mAffectsStatusOverride != nullptr) {
        mAffectsStatusOverride = ptr_mAffectsStatusOverride->value;
    }
}