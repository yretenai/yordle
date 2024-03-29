/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SumOfSubPartsCalculationPart.hpp>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
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

yordle::data::meta::SumOfSubPartsCalculationPart::SumOfSubPartsCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IGameCalculationPart(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSubparts = prop->cast_prop<yordle::data::prop::set_prop>(2691091496u);
    if(ptr_mSubparts != nullptr) {
        for(const auto &set_mSubparts_entry : ptr_mSubparts->value) {
            auto ptr_mSubparts_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mSubparts_entry);
            if(ptr_mSubparts_entry != nullptr) {
                mSubparts.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::IGameCalculationPart>(ptr_mSubparts_entry, 3053458126u));
            }
        }
    }
}
