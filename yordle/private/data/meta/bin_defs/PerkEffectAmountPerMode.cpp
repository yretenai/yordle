/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/PerkEffectAmountPerMode.hpp>

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

yordle::data::meta::PerkEffectAmountPerMode::PerkEffectAmountPerMode(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mEffectAmountPerMode = prop->cast_prop<yordle::data::prop::map_prop>(2562594311u);
    if(ptr_mEffectAmountPerMode != nullptr) {
        for(const auto &set_mEffectAmountPerMode_pair : ptr_mEffectAmountPerMode->value) {
            auto ptr_mEffectAmountPerMode_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mEffectAmountPerMode_pair.first);
            auto ptr_mEffectAmountPerMode_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(set_mEffectAmountPerMode_pair.second);
            if(ptr_mEffectAmountPerMode_key != nullptr && ptr_mEffectAmountPerMode_value != nullptr) {
                mEffectAmountPerMode.emplace(ptr_mEffectAmountPerMode_key->value, ptr_mEffectAmountPerMode_value->value);
            }
        }
    }
}
