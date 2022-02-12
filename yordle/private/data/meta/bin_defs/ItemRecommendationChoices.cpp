/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ItemRecommendationChoices.hpp>

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

yordle::data::meta::ItemRecommendationChoices::ItemRecommendationChoices(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mChoices = prop->cast_prop<yordle::data::prop::set_prop>(766608976u);
    if(ptr_mChoices != nullptr) {
        for(const auto &set_mChoices_entry : ptr_mChoices->value) {
            auto ptr_mChoices_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_mChoices_entry);
            if(ptr_mChoices_entry != nullptr) {
                mChoices.emplace_back(ptr_mChoices_entry->value);
            }
        }
    }
}
