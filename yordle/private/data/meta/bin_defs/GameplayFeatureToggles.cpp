/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GameplayFeatureToggles.hpp>

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

yordle::data::meta::GameplayFeatureToggles::GameplayFeatureToggles(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_NewActorStuckPathfinding = prop->cast_prop<yordle::data::prop::bool_prop>(689679626u);
    if(ptr_NewActorStuckPathfinding != nullptr) {
        NewActorStuckPathfinding = ptr_NewActorStuckPathfinding->value;
    }

    auto ptr_fowCastRayAccurate = prop->cast_prop<yordle::data::prop::bool_prop>(1316620882u);
    if(ptr_fowCastRayAccurate != nullptr) {
        fowCastRayAccurate = ptr_fowCastRayAccurate->value;
    }

    auto ptr_disableSpellLevelMinimumProtections = prop->cast_prop<yordle::data::prop::bool_prop>(1700882399u);
    if(ptr_disableSpellLevelMinimumProtections != nullptr) {
        disableSpellLevelMinimumProtections = ptr_disableSpellLevelMinimumProtections->value;
    }

    auto ptr_IndividualItemVisibility = prop->cast_prop<yordle::data::prop::bool_prop>(3146339973u);
    if(ptr_IndividualItemVisibility != nullptr) {
        IndividualItemVisibility = ptr_IndividualItemVisibility->value;
    }

    auto ptr_AFKDetection2 = prop->cast_prop<yordle::data::prop::bool_prop>(3829795124u);
    if(ptr_AFKDetection2 != nullptr) {
        AFKDetection2 = ptr_AFKDetection2->value;
    }
}
