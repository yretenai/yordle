/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xceab3604.hpp>

#include <yordle/data/meta/bin_defs/x327b06c3.hpp>
#include <yordle/data/meta/bin_defs/MapAction.hpp>
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

yordle::data::meta::xceab3604::xceab3604(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_PropName = prop->cast_prop<yordle::data::prop::string_prop>(1392331355u);
    if(ptr_PropName != nullptr) {
        PropName = ptr_PropName->value;
    }

    auto ptr_xc5bb71b9 = prop->cast_prop<yordle::data::prop::set_prop>(3317395897u);
    if(ptr_xc5bb71b9 != nullptr) {
        for(const auto &set_xc5bb71b9_entry : ptr_xc5bb71b9->value) {
            auto ptr_xc5bb71b9_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xc5bb71b9_entry);
            if(ptr_xc5bb71b9_entry != nullptr) {
                xc5bb71b9.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x327b06c3>(ptr_xc5bb71b9_entry, 846923459u));
            }
        }
    }

    auto ptr_Shuffle = prop->cast_prop<yordle::data::prop::bool_prop>(2030840142u);
    if(ptr_Shuffle != nullptr) {
        Shuffle = ptr_Shuffle->value;
    }
}
