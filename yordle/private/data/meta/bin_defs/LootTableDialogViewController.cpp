/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/LootTableDialogViewController.hpp>

#include <yordle/data/meta/bin_defs/x75259ad3.hpp>
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

yordle::data::meta::LootTableDialogViewController::LootTableDialogViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x75259ad3(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe8b4823e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3904143934u);
    if(ptr_xe8b4823e != nullptr) {
        xe8b4823e = ptr_xe8b4823e->value;
    }

    auto ptr_x8f597852 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2405005394u);
    if(ptr_x8f597852 != nullptr) {
        x8f597852 = ptr_x8f597852->value;
    }
}
