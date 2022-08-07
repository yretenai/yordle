/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x3228d244.hpp>

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

yordle::data::meta::x3228d244::x3228d244(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Group = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1605967500u);
    if(ptr_Group != nullptr) {
        Group = ptr_Group->value;
    }

    auto ptr_Icon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3862959600u);
    if(ptr_Icon != nullptr) {
        Icon = ptr_Icon->value;
    }

    auto ptr_xa66cbd45 = prop->cast_prop<yordle::data::prop::set_prop>(2792144197u);
    if(ptr_xa66cbd45 != nullptr) {
        auto index_xa66cbd45 = 0;
        for(const auto &set_xa66cbd45_entry : ptr_xa66cbd45->value) {
            auto ptr_xa66cbd45_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xa66cbd45_entry);
            if(ptr_xa66cbd45_entry != nullptr) {
                xa66cbd45[index_xa66cbd45] = ptr_xa66cbd45_entry->value;
            }
            index_xa66cbd45++;
        }
    }

    auto ptr_x488ea6f4 = prop->cast_prop<yordle::data::prop::set_prop>(1217308404u);
    if(ptr_x488ea6f4 != nullptr) {
        auto index_x488ea6f4 = 0;
        for(const auto &set_x488ea6f4_entry : ptr_x488ea6f4->value) {
            auto ptr_x488ea6f4_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x488ea6f4_entry);
            if(ptr_x488ea6f4_entry != nullptr) {
                x488ea6f4[index_x488ea6f4] = ptr_x488ea6f4_entry->value;
            }
            index_x488ea6f4++;
        }
    }

    auto ptr_xf1608144 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4049633604u);
    if(ptr_xf1608144 != nullptr) {
        xf1608144 = ptr_xf1608144->value;
    }
}