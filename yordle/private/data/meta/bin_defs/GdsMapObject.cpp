/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GdsMapObject.hpp>

#include <yordle/data/meta/bin_defs/GDSMapObjectExtraInfo.hpp>
#include <yordle/data/meta/bin_defs/GenericMapPlaceable.hpp>
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

yordle::data::meta::GdsMapObject::GdsMapObject(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::GenericMapPlaceable(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_boxMin = prop->cast_prop<yordle::data::prop::vector_prop>(3769918886u);
    if(ptr_boxMin != nullptr) {
        boxMin = ptr_boxMin->value;
    }

    auto ptr_boxMax = prop->cast_prop<yordle::data::prop::vector_prop>(4073299124u);
    if(ptr_boxMax != nullptr) {
        boxMax = ptr_boxMax->value;
    }

    auto ptr_type = prop->cast_prop<yordle::data::prop::uint8_prop>(1361572173u);
    if(ptr_type != nullptr) {
        type = ptr_type->value;
    }

    auto ptr_ignoreCollisionOnPlacement = prop->cast_prop<yordle::data::prop::bool_prop>(3241754439u);
    if(ptr_ignoreCollisionOnPlacement != nullptr) {
        ignoreCollisionOnPlacement = ptr_ignoreCollisionOnPlacement->value;
    }

    auto ptr_eyeCandy = prop->cast_prop<yordle::data::prop::bool_prop>(1435159183u);
    if(ptr_eyeCandy != nullptr) {
        eyeCandy = ptr_eyeCandy->value;
    }

    auto ptr_mapObjectSkinID = prop->cast_prop<yordle::data::prop::uint32_prop>(3596253366u);
    if(ptr_mapObjectSkinID != nullptr) {
        mapObjectSkinID = ptr_mapObjectSkinID->value;
    }

    auto ptr_extraInfo = prop->cast_prop<yordle::data::prop::set_prop>(4115267345u);
    if(ptr_extraInfo != nullptr) {
        for(const auto &set_extraInfo_entry : ptr_extraInfo->value) {
            auto ptr_extraInfo_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_extraInfo_entry);
            if(ptr_extraInfo_entry != nullptr) {
                extraInfo.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::GDSMapObjectExtraInfo>(ptr_extraInfo_entry, 1222455122u));
            }
        }
    }
}
