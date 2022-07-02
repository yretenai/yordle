/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/LoadoutArenaSkinInfoPanel.hpp>

#include <yordle/data/meta/bin_defs/ILoadoutInfoPanel.hpp>
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

yordle::data::meta::LoadoutArenaSkinInfoPanel::LoadoutArenaSkinInfoPanel(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ILoadoutInfoPanel(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_ItemIcon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3708628627u);
    if(ptr_ItemIcon != nullptr) {
        ItemIcon = ptr_ItemIcon->value;
    }

    auto ptr_xd2605dd4 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3529530836u);
    if(ptr_xd2605dd4 != nullptr) {
        xd2605dd4 = ptr_xd2605dd4->value;
    }

    auto ptr_x66229a1c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1713543708u);
    if(ptr_x66229a1c != nullptr) {
        x66229a1c = ptr_x66229a1c->value;
    }

    auto ptr_x96867f27 = prop->cast_prop<yordle::data::prop::set_prop>(2525396775u);
    if(ptr_x96867f27 != nullptr) {
        auto index_x96867f27 = 0;
        for(const auto &set_x96867f27_entry : ptr_x96867f27->value) {
            auto ptr_x96867f27_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x96867f27_entry);
            if(ptr_x96867f27_entry != nullptr) {
                x96867f27[index_x96867f27] = ptr_x96867f27_entry->value;
            }
            index_x96867f27++;
        }
    }
}
