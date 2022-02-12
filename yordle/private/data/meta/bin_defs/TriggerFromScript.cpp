/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TriggerFromScript.hpp>

#include <yordle/data/meta/bin_defs/MissileTriggerSpec.hpp>
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

yordle::data::meta::TriggerFromScript::TriggerFromScript(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileTriggerSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTriggerName = prop->cast_prop<yordle::data::prop::string_prop>(1616616399u);
    if(ptr_mTriggerName != nullptr) {
        mTriggerName = ptr_mTriggerName->value;
    }

    auto ptr_mDelay = prop->cast_prop<yordle::data::prop::float32_prop>(904417079u);
    if(ptr_mDelay != nullptr) {
        mDelay = ptr_mDelay->value;
    }
}