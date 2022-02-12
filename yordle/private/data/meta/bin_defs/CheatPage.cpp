/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CheatPage.hpp>

#include <yordle/data/meta/bin_defs/Cheat.hpp>
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

yordle::data::meta::CheatPage::CheatPage(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mCheats = prop->cast_prop<yordle::data::prop::set_prop>(2032951844u);
    if(ptr_mCheats != nullptr) {
        for(const auto &set_mCheats_entry : ptr_mCheats->value) {
            auto ptr_mCheats_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mCheats_entry);
            if(ptr_mCheats_entry != nullptr) {
                mCheats.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::Cheat>(2490030924u, ptr_mCheats_entry->value));
            }
        }
    }
}
