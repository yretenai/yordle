/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTItemList.hpp>

#include <yordle/data/meta/bin_defs/TftItemData.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
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

yordle::data::meta::TFTItemList::TFTItemList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mItems = prop->cast_prop<yordle::data::prop::unordered_set_prop>(2972511644u);
    if(ptr_mItems != nullptr) {
        for(const auto &set_mItems_entry : ptr_mItems->value) {
            auto ptr_mItems_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mItems_entry);
            if(ptr_mItems_entry != nullptr) {
                mItems.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TftItemData>(3515269914u, ptr_mItems_entry->value));
            }
        }
    }

    auto ptr_VfxResourceResolver = prop->cast_prop<yordle::data::prop::reference_prop>(2679170533u);
    if(ptr_VfxResourceResolver != nullptr) {
        VfxResourceResolver = yordle::data::meta::bin_ref<yordle::data::meta::ResourceResolver>(4013559603u, ptr_VfxResourceResolver->value);
    }
}
