/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
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

yordle::data::meta::CatalogEntry::CatalogEntry(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_contentId = prop->cast_prop<yordle::data::prop::string_prop>(1423177679u);
    if(ptr_contentId != nullptr) {
        contentId = ptr_contentId->value;
    }

    auto ptr_itemID = prop->cast_prop<yordle::data::prop::uint32_prop>(331209851u);
    if(ptr_itemID != nullptr) {
        itemID = ptr_itemID->value;
    }

    auto ptr_offerId = prop->cast_prop<yordle::data::prop::string_prop>(1943751208u);
    if(ptr_offerId != nullptr) {
        offerId = ptr_offerId->value;
    }
}