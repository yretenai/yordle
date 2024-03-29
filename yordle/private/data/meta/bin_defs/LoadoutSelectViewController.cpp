/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/LoadoutSelectViewController.hpp>

#include <yordle/data/meta/bin_defs/ILoadoutFeatureDataBehavior.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
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

yordle::data::meta::LoadoutSelectViewController::LoadoutSelectViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_ILoadoutFeatureDataBehavior = prop->cast_prop<yordle::data::prop::set_prop>(2293774348u);
    if(ptr_ILoadoutFeatureDataBehavior != nullptr) {
        for(const auto &set_ILoadoutFeatureDataBehavior_entry : ptr_ILoadoutFeatureDataBehavior->value) {
            auto ptr_ILoadoutFeatureDataBehavior_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_ILoadoutFeatureDataBehavior_entry);
            if(ptr_ILoadoutFeatureDataBehavior_entry != nullptr) {
                ILoadoutFeatureDataBehavior.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ILoadoutFeatureDataBehavior>(ptr_ILoadoutFeatureDataBehavior_entry, 2293774348u));
            }
        }
    }

    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }
}
