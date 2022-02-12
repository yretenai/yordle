/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapParticle.hpp>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/MapPlaceable.hpp>
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

yordle::data::meta::MapParticle::MapParticle(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapPlaceable(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_system = prop->cast_prop<yordle::data::prop::reference_prop>(1226705564u);
    if(ptr_system != nullptr) {
        system = yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData>(1171098015u, ptr_system->value);
    }

    auto ptr_eyeCandy = prop->cast_prop<yordle::data::prop::bool_prop>(1435159183u);
    if(ptr_eyeCandy != nullptr) {
        eyeCandy = ptr_eyeCandy->value;
    }

    auto ptr_Transitional = prop->cast_prop<yordle::data::prop::bool_prop>(2372739535u);
    if(ptr_Transitional != nullptr) {
        Transitional = ptr_Transitional->value;
    }

    auto ptr_quality = prop->cast_prop<yordle::data::prop::int32_prop>(2597670950u);
    if(ptr_quality != nullptr) {
        quality = ptr_quality->value;
    }

    auto ptr_visibilityMode = prop->cast_prop<yordle::data::prop::uint32_prop>(231165746u);
    if(ptr_visibilityMode != nullptr) {
        visibilityMode = ptr_visibilityMode->value;
    }

    auto ptr_colorModulate = prop->cast_prop<yordle::data::prop::quaternion_prop>(3259422695u);
    if(ptr_colorModulate != nullptr) {
        colorModulate = ptr_colorModulate->value;
    }

    auto ptr_groupName = prop->cast_prop<yordle::data::prop::string_prop>(3504806855u);
    if(ptr_groupName != nullptr) {
        groupName = ptr_groupName->value;
    }

    auto ptr_startDisabled = prop->cast_prop<yordle::data::prop::bool_prop>(1054618511u);
    if(ptr_startDisabled != nullptr) {
        startDisabled = ptr_startDisabled->value;
    }
}