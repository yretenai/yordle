/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x6a7b0838.hpp>

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

yordle::data::meta::x6a7b0838::x6a7b0838(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x43b27471 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1135768689u);
    if(ptr_x43b27471 != nullptr) {
        x43b27471 = ptr_x43b27471->value;
    }

    auto ptr_x837c983c = prop->cast_prop<yordle::data::prop::string_prop>(2205980732u);
    if(ptr_x837c983c != nullptr) {
        x837c983c = ptr_x837c983c->value;
    }

    auto ptr_x4b989bcc = prop->cast_prop<yordle::data::prop::string_prop>(1268292556u);
    if(ptr_x4b989bcc != nullptr) {
        x4b989bcc = ptr_x4b989bcc->value;
    }

    auto ptr_x5b98af56 = prop->cast_prop<yordle::data::prop::string_prop>(1536733014u);
    if(ptr_x5b98af56 != nullptr) {
        x5b98af56 = ptr_x5b98af56->value;
    }
}
