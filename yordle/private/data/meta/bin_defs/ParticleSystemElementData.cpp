/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ParticleSystemElementData.hpp>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/BaseElementData.hpp>
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

yordle::data::meta::ParticleSystemElementData::ParticleSystemElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseElementData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mVfxSystem = prop->cast_prop<yordle::data::prop::reference_prop>(992664269u);
    if(ptr_mVfxSystem != nullptr) {
        mVfxSystem = yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData>(1171098015u, ptr_mVfxSystem->value);
    }

    auto ptr_xc47cf6c7 = prop->cast_prop<yordle::data::prop::uint32_prop>(3296523975u);
    if(ptr_xc47cf6c7 != nullptr) {
        xc47cf6c7 = ptr_xc47cf6c7->value;
    }

    auto ptr_x2824440 = prop->cast_prop<yordle::data::prop::bool_prop>(42091584u);
    if(ptr_x2824440 != nullptr) {
        x2824440 = ptr_x2824440->value;
    }

    auto ptr_x94b088ea = prop->cast_prop<yordle::data::prop::bool_prop>(2494597354u);
    if(ptr_x94b088ea != nullptr) {
        x94b088ea = ptr_x94b088ea->value;
    }

    auto ptr_x8ef629c9 = prop->cast_prop<yordle::data::prop::bool_prop>(2398497225u);
    if(ptr_x8ef629c9 != nullptr) {
        x8ef629c9 = ptr_x8ef629c9->value;
    }

    auto ptr_x1a898c7d = prop->cast_prop<yordle::data::prop::map_prop>(445222013u);
    if(ptr_x1a898c7d != nullptr) {
        for(const auto &set_x1a898c7d_pair : ptr_x1a898c7d->value) {
            auto ptr_x1a898c7d_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x1a898c7d_pair.first);
            auto ptr_x1a898c7d_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_x1a898c7d_pair.second);
            if(ptr_x1a898c7d_key != nullptr && ptr_x1a898c7d_value != nullptr) {
                x1a898c7d.emplace(ptr_x1a898c7d_key->value, ptr_x1a898c7d_value->value);
            }
        }
    }
}
