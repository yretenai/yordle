/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xacad2bb8.hpp>

#include <yordle/data/meta/bin_defs/x6df7291a.hpp>
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

yordle::data::meta::xacad2bb8::xacad2bb8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x6df7291a(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_TitleKey = prop->cast_prop<yordle::data::prop::string_prop>(2320850208u);
    if(ptr_TitleKey != nullptr) {
        TitleKey = ptr_TitleKey->value;
    }

    auto ptr_x6e555cab = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1851088043u);
    if(ptr_x6e555cab != nullptr) {
        x6e555cab = ptr_x6e555cab->value;
    }
}
