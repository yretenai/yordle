/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x3196ef58.hpp>

#include <yordle/data/meta/bin_defs/xaba5f12d.hpp>
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

yordle::data::meta::x3196ef58::x3196ef58(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xaba5f12d(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x6d2badf4 = prop->cast_prop<yordle::data::prop::uint8_prop>(1831579124u);
    if(ptr_x6d2badf4 != nullptr) {
        x6d2badf4 = ptr_x6d2badf4->value;
    }

    auto ptr_x316c9fa1 = prop->cast_prop<yordle::data::prop::bool_prop>(829202337u);
    if(ptr_x316c9fa1 != nullptr) {
        x316c9fa1 = ptr_x316c9fa1->value;
    }

    auto ptr_xa82efcbc = prop->cast_prop<yordle::data::prop::point_prop>(2821651644u);
    if(ptr_xa82efcbc != nullptr) {
        xa82efcbc = ptr_xa82efcbc->value;
    }
}
