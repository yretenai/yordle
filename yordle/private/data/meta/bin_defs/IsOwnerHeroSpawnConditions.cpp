/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/IsOwnerHeroSpawnConditions.hpp>

#include <yordle/data/meta/bin_defs/VFXDefaultSpawnConditionData.hpp>
#include <yordle/data/meta/bin_defs/IsOwnerHeroConditionData.hpp>
#include <yordle/data/meta/bin_defs/IVFXSpawnConditions.hpp>
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

yordle::data::meta::IsOwnerHeroSpawnConditions::IsOwnerHeroSpawnConditions(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IVFXSpawnConditions(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mDefaultVfxData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(785443991u);
    if(ptr_mDefaultVfxData != nullptr) {
        mDefaultVfxData = yordle::data::meta::deserialize<yordle::data::meta::VFXDefaultSpawnConditionData>(ptr_mDefaultVfxData, 922712184u);
    }

    auto ptr_mConditions = prop->cast_prop<yordle::data::prop::set_prop>(721382474u);
    if(ptr_mConditions != nullptr) {
        for(const auto &set_mConditions_entry : ptr_mConditions->value) {
            auto ptr_mConditions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mConditions_entry);
            if(ptr_mConditions_entry != nullptr) {
                mConditions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::IsOwnerHeroConditionData>(ptr_mConditions_entry, 3706207649u));
            }
        }
    }
}
