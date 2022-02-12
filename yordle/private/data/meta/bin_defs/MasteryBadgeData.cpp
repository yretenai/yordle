/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MasteryBadgeData.hpp>

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

yordle::data::meta::MasteryBadgeData::MasteryBadgeData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(435142619u);
    if(ptr_mName != nullptr) {
        mName = ptr_mName->value;
    }

    auto ptr_mParticleName = prop->cast_prop<yordle::data::prop::string_prop>(4276649273u);
    if(ptr_mParticleName != nullptr) {
        mParticleName = ptr_mParticleName->value;
    }

    auto ptr_mRenderScale = prop->cast_prop<yordle::data::prop::float32_prop>(4176951642u);
    if(ptr_mRenderScale != nullptr) {
        mRenderScale = ptr_mRenderScale->value;
    }

    auto ptr_mVerticalOffset = prop->cast_prop<yordle::data::prop::float32_prop>(499930149u);
    if(ptr_mVerticalOffset != nullptr) {
        mVerticalOffset = ptr_mVerticalOffset->value;
    }

    auto ptr_mSummonerIconId = prop->cast_prop<yordle::data::prop::int32_prop>(1588619876u);
    if(ptr_mSummonerIconId != nullptr) {
        mSummonerIconId = ptr_mSummonerIconId->value;
    }

    auto ptr_mMasteryLevel = prop->cast_prop<yordle::data::prop::uint32_prop>(706044141u);
    if(ptr_mMasteryLevel != nullptr) {
        mMasteryLevel = ptr_mMasteryLevel->value;
    }
}
