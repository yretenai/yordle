/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x2781ed6b.hpp>

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

yordle::data::meta::x2781ed6b::x2781ed6b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_TitleKey = prop->cast_prop<yordle::data::prop::string_prop>(2320850208u);
    if(ptr_TitleKey != nullptr) {
        TitleKey = ptr_TitleKey->value;
    }

    auto ptr_BodyKey = prop->cast_prop<yordle::data::prop::string_prop>(2280769820u);
    if(ptr_BodyKey != nullptr) {
        BodyKey = ptr_BodyKey->value;
    }
}
