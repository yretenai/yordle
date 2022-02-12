/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ItemDataAvailability.hpp>

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

yordle::data::meta::ItemDataAvailability::ItemDataAvailability(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mInStore = prop->cast_prop<yordle::data::prop::bool_prop>(1568493488u);
    if(ptr_mInStore != nullptr) {
        mInStore = ptr_mInStore->value;
    }

    auto ptr_mForceLoad = prop->cast_prop<yordle::data::prop::bool_prop>(781700779u);
    if(ptr_mForceLoad != nullptr) {
        mForceLoad = ptr_mForceLoad->value;
    }

    auto ptr_mHidefromAll = prop->cast_prop<yordle::data::prop::bool_prop>(1831013931u);
    if(ptr_mHidefromAll != nullptr) {
        mHidefromAll = ptr_mHidefromAll->value;
    }
}
