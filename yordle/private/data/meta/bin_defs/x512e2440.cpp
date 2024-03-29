/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x512e2440.hpp>

#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>
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

yordle::data::meta::x512e2440::x512e2440(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_CatalogEntry = prop->cast_prop<yordle::data::prop::inline_structure_prop>(607049692u);
    if(ptr_CatalogEntry != nullptr) {
        CatalogEntry = yordle::data::meta::deserialize<yordle::data::meta::CatalogEntry>(ptr_CatalogEntry, 607049692u);
    }

    auto ptr_x81f82f1 = prop->cast_prop<yordle::data::prop::string_prop>(136282865u);
    if(ptr_x81f82f1 != nullptr) {
        x81f82f1 = ptr_x81f82f1->value;
    }
}
