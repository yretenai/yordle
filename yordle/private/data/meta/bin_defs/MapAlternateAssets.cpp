/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapAlternateAssets.hpp>

#include <yordle/data/meta/bin_defs/MapAlternateAsset.hpp>
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

yordle::data::meta::MapAlternateAssets::MapAlternateAssets(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mAlternateAssets = prop->cast_prop<yordle::data::prop::set_prop>(3351283947u);
    if(ptr_mAlternateAssets != nullptr) {
        for(const auto &set_mAlternateAssets_entry : ptr_mAlternateAssets->value) {
            auto ptr_mAlternateAssets_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mAlternateAssets_entry);
            if(ptr_mAlternateAssets_entry != nullptr) {
                mAlternateAssets.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::MapAlternateAsset>(ptr_mAlternateAssets_entry, 3846963535u));
            }
        }
    }
}
