/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HasBuffData.hpp>

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

yordle::data::meta::HasBuffData::HasBuffData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mBuffName = prop->cast_prop<yordle::data::prop::string_prop>(38338834u);
    if(ptr_mBuffName != nullptr) {
        mBuffName = ptr_mBuffName->value;
    }

    auto ptr_mFromAnyone = prop->cast_prop<yordle::data::prop::bool_prop>(1715384362u);
    if(ptr_mFromAnyone != nullptr) {
        mFromAnyone = ptr_mFromAnyone->value;
    }

    auto ptr_mFromOwner = prop->cast_prop<yordle::data::prop::bool_prop>(2271474239u);
    if(ptr_mFromOwner != nullptr) {
        mFromOwner = ptr_mFromOwner->value;
    }

    auto ptr_mFromAttacker = prop->cast_prop<yordle::data::prop::bool_prop>(3118580291u);
    if(ptr_mFromAttacker != nullptr) {
        mFromAttacker = ptr_mFromAttacker->value;
    }
}