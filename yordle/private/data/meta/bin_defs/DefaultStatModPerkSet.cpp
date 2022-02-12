/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DefaultStatModPerkSet.hpp>

#include <yordle/data/meta/bin_defs/Perk.hpp>
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

yordle::data::meta::DefaultStatModPerkSet::DefaultStatModPerkSet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mStyleId = prop->cast_prop<yordle::data::prop::uint32_prop>(3229685720u);
    if(ptr_mStyleId != nullptr) {
        mStyleId = ptr_mStyleId->value;
    }

    auto ptr_mPerks = prop->cast_prop<yordle::data::prop::set_prop>(1170084653u);
    if(ptr_mPerks != nullptr) {
        for(const auto &set_mPerks_entry : ptr_mPerks->value) {
            auto ptr_mPerks_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mPerks_entry);
            if(ptr_mPerks_entry != nullptr) {
                mPerks.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::Perk>(3069197533u, ptr_mPerks_entry->value));
            }
        }
    }
}