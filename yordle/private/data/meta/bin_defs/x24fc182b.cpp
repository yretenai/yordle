/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x24fc182b.hpp>

#include <yordle/data/meta/bin_defs/xa24429bf.hpp>
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

yordle::data::meta::x24fc182b::x24fc182b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xa24429bf(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x6495fab8 = prop->cast_prop<yordle::data::prop::string_prop>(1687550648u);
    if(ptr_x6495fab8 != nullptr) {
        x6495fab8 = ptr_x6495fab8->value;
    }

    auto ptr_xa6e81102 = prop->cast_prop<yordle::data::prop::string_prop>(2800226562u);
    if(ptr_xa6e81102 != nullptr) {
        xa6e81102 = ptr_xa6e81102->value;
    }
}
