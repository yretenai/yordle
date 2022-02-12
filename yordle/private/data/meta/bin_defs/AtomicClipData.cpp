/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AtomicClipData.hpp>

#include <yordle/data/meta/bin_defs/AnimationResourceData.hpp>
#include <yordle/data/meta/bin_defs/UpdaterResourceData.hpp>
#include <yordle/data/meta/bin_defs/BlendableClipData.hpp>
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

yordle::data::meta::AtomicClipData::AtomicClipData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BlendableClipData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTickDuration = prop->cast_prop<yordle::data::prop::float32_prop>(423584029u);
    if(ptr_mTickDuration != nullptr) {
        mTickDuration = ptr_mTickDuration->value;
    }

    auto ptr_mAnimationResourceData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3030349134u);
    if(ptr_mAnimationResourceData != nullptr) {
        mAnimationResourceData = yordle::data::meta::deserialize<yordle::data::meta::AnimationResourceData>(ptr_mAnimationResourceData, 2588617117u);
    }

    auto ptr_mUpdaterResourceData = prop->cast_prop<yordle::data::prop::structure_prop>(2524561345u);
    if(ptr_mUpdaterResourceData != nullptr) {
        mUpdaterResourceData = yordle::data::meta::deserialize<yordle::data::meta::UpdaterResourceData>(ptr_mUpdaterResourceData, 1426466346u);
    }
}