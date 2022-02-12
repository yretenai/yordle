/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CCScoreMultipliers.hpp>

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

yordle::data::meta::CCScoreMultipliers::CCScoreMultipliers(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Stun = prop->cast_prop<yordle::data::prop::float32_prop>(3714899745u);
    if(ptr_Stun != nullptr) {
        Stun = ptr_Stun->value;
    }

    auto ptr_Taunt = prop->cast_prop<yordle::data::prop::float32_prop>(3164374115u);
    if(ptr_Taunt != nullptr) {
        Taunt = ptr_Taunt->value;
    }

    auto ptr_fear = prop->cast_prop<yordle::data::prop::float32_prop>(3443430919u);
    if(ptr_fear != nullptr) {
        fear = ptr_fear->value;
    }

    auto ptr_flee = prop->cast_prop<yordle::data::prop::float32_prop>(3756019969u);
    if(ptr_flee != nullptr) {
        flee = ptr_flee->value;
    }

    auto ptr_suppression = prop->cast_prop<yordle::data::prop::float32_prop>(4265819416u);
    if(ptr_suppression != nullptr) {
        suppression = ptr_suppression->value;
    }

    auto ptr_KnockUp = prop->cast_prop<yordle::data::prop::float32_prop>(696045898u);
    if(ptr_KnockUp != nullptr) {
        KnockUp = ptr_KnockUp->value;
    }

    auto ptr_knockback = prop->cast_prop<yordle::data::prop::float32_prop>(3231562936u);
    if(ptr_knockback != nullptr) {
        knockback = ptr_knockback->value;
    }

    auto ptr_polymorph = prop->cast_prop<yordle::data::prop::float32_prop>(3743326195u);
    if(ptr_polymorph != nullptr) {
        polymorph = ptr_polymorph->value;
    }

    auto ptr_Root = prop->cast_prop<yordle::data::prop::float32_prop>(553455173u);
    if(ptr_Root != nullptr) {
        Root = ptr_Root->value;
    }

    auto ptr_silence = prop->cast_prop<yordle::data::prop::float32_prop>(3077804428u);
    if(ptr_silence != nullptr) {
        silence = ptr_silence->value;
    }

    auto ptr_charm = prop->cast_prop<yordle::data::prop::float32_prop>(1604938064u);
    if(ptr_charm != nullptr) {
        charm = ptr_charm->value;
    }

    auto ptr_slow = prop->cast_prop<yordle::data::prop::float32_prop>(1838498488u);
    if(ptr_slow != nullptr) {
        slow = ptr_slow->value;
    }

    auto ptr_AttackSpeedSlow = prop->cast_prop<yordle::data::prop::float32_prop>(1285845805u);
    if(ptr_AttackSpeedSlow != nullptr) {
        AttackSpeedSlow = ptr_AttackSpeedSlow->value;
    }

    auto ptr_blind = prop->cast_prop<yordle::data::prop::float32_prop>(274826164u);
    if(ptr_blind != nullptr) {
        blind = ptr_blind->value;
    }

    auto ptr_disarm = prop->cast_prop<yordle::data::prop::float32_prop>(3024816983u);
    if(ptr_disarm != nullptr) {
        disarm = ptr_disarm->value;
    }

    auto ptr_grounded = prop->cast_prop<yordle::data::prop::float32_prop>(1265902975u);
    if(ptr_grounded != nullptr) {
        grounded = ptr_grounded->value;
    }

    auto ptr_nearsight = prop->cast_prop<yordle::data::prop::float32_prop>(969463844u);
    if(ptr_nearsight != nullptr) {
        nearsight = ptr_nearsight->value;
    }

    auto ptr_drowsy = prop->cast_prop<yordle::data::prop::float32_prop>(2893680069u);
    if(ptr_drowsy != nullptr) {
        drowsy = ptr_drowsy->value;
    }

    auto ptr_asleep = prop->cast_prop<yordle::data::prop::float32_prop>(3773054511u);
    if(ptr_asleep != nullptr) {
        asleep = ptr_asleep->value;
    }
}
