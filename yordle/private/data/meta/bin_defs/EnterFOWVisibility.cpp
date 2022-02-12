/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/EnterFOWVisibility.hpp>

#include <yordle/data/meta/bin_defs/MissileVisibilitySpec.hpp>
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

yordle::data::meta::EnterFOWVisibility::EnterFOWVisibility(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileVisibilitySpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mMissileClientExitFOWPrediction = prop->cast_prop<yordle::data::prop::bool_prop>(3068490952u);
    if(ptr_mMissileClientExitFOWPrediction != nullptr) {
        mMissileClientExitFOWPrediction = ptr_mMissileClientExitFOWPrediction->value;
    }

    auto ptr_mMissileClientWaitForTargetUpdateBeforeMissileShow = prop->cast_prop<yordle::data::prop::bool_prop>(2980651371u);
    if(ptr_mMissileClientWaitForTargetUpdateBeforeMissileShow != nullptr) {
        mMissileClientWaitForTargetUpdateBeforeMissileShow = ptr_mMissileClientWaitForTargetUpdateBeforeMissileShow->value;
    }
}
