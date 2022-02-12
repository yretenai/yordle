/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TftItemComposition.hpp>

#include <yordle/data/meta/bin_defs/TftItemData.hpp>
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

yordle::data::meta::TftItemComposition::TftItemComposition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mComponents = prop->cast_prop<yordle::data::prop::set_prop>(2943176860u);
    if(ptr_mComponents != nullptr) {
        for(const auto &set_mComponents_entry : ptr_mComponents->value) {
            auto ptr_mComponents_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mComponents_entry);
            if(ptr_mComponents_entry != nullptr) {
                mComponents.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TftItemData>(3515269914u, ptr_mComponents_entry->value));
            }
        }
    }
}
