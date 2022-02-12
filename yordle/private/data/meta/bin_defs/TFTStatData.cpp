/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTStatData.hpp>

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

yordle::data::meta::TFTStatData::TFTStatData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mName = prop->cast_prop<yordle::data::prop::string_prop>(435142619u);
    if(ptr_mName != nullptr) {
        mName = ptr_mName->value;
    }

    auto ptr_mType = prop->cast_prop<yordle::data::prop::uint32_prop>(2280500912u);
    if(ptr_mType != nullptr) {
        mType = ptr_mType->value;
    }

    auto ptr_mContext = prop->cast_prop<yordle::data::prop::uint32_prop>(4095106763u);
    if(ptr_mContext != nullptr) {
        mContext = ptr_mContext->value;
    }

    auto ptr_mLifetime = prop->cast_prop<yordle::data::prop::uint32_prop>(3878970827u);
    if(ptr_mLifetime != nullptr) {
        mLifetime = ptr_mLifetime->value;
    }

    auto ptr_xf3a339c = prop->cast_prop<yordle::data::prop::int32_prop>(255472540u);
    if(ptr_xf3a339c != nullptr) {
        xf3a339c = ptr_xf3a339c->value;
    }
}
