/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xd6a99b5b.hpp>

#include <yordle/data/meta/bin_defs/xb0ca221b.hpp>
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

yordle::data::meta::xd6a99b5b::xd6a99b5b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_traits = prop->cast_prop<yordle::data::prop::set_prop>(2288068616u);
    if(ptr_traits != nullptr) {
        for(const auto &set_traits_entry : ptr_traits->value) {
            auto ptr_traits_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_traits_entry);
            if(ptr_traits_entry != nullptr) {
                traits.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xb0ca221b>(ptr_traits_entry, 2966037019u));
            }
        }
    }
}
