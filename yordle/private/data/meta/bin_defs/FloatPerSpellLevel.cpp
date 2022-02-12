/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FloatPerSpellLevel.hpp>

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

yordle::data::meta::FloatPerSpellLevel::FloatPerSpellLevel(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mPerLevelValues = prop->cast_prop<yordle::data::prop::set_prop>(4236608981u);
    if(ptr_mPerLevelValues != nullptr) {
        auto index_mPerLevelValues = 0;
        for(const auto &set_mPerLevelValues_entry : ptr_mPerLevelValues->value) {
            auto ptr_mPerLevelValues_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(set_mPerLevelValues_entry);
            if(ptr_mPerLevelValues_entry != nullptr) {
                mPerLevelValues[index_mPerLevelValues] = ptr_mPerLevelValues_entry->value;
            }
            index_mPerLevelValues++;
        }
    }

    auto ptr_mValueType = prop->cast_prop<yordle::data::prop::uint32_prop>(2409216993u);
    if(ptr_mValueType != nullptr) {
        mValueType = ptr_mValueType->value;
    }
}
