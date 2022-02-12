/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/BannerFlagData.hpp>

#include <yordle/data/meta/bin_defs/SkinMeshDataProperties.hpp>
#include <yordle/data/meta/bin_defs/AnimationGraphData.hpp>
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

yordle::data::meta::BannerFlagData::BannerFlagData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_skinMeshProperties = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1174362372u);
    if(ptr_skinMeshProperties != nullptr) {
        skinMeshProperties = yordle::data::meta::deserialize<yordle::data::meta::SkinMeshDataProperties>(ptr_skinMeshProperties, 1628559524u);
    }

    auto ptr_AnimationGraphData = prop->cast_prop<yordle::data::prop::reference_prop>(4126869447u);
    if(ptr_AnimationGraphData != nullptr) {
        AnimationGraphData = yordle::data::meta::bin_ref<yordle::data::meta::AnimationGraphData>(4126869447u, ptr_AnimationGraphData->value);
    }
}