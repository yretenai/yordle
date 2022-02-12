/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ByCharLevelInterpolationCalculationPart.hpp>

#include <yordle/data/meta/bin_defs/IGameCalculationPartByCharLevel.hpp>
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

yordle::data::meta::ByCharLevelInterpolationCalculationPart::ByCharLevelInterpolationCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IGameCalculationPartByCharLevel(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mStartValue = prop->cast_prop<yordle::data::prop::float32_prop>(3496752989u);
    if(ptr_mStartValue != nullptr) {
        mStartValue = ptr_mStartValue->value;
    }

    auto ptr_mEndValue = prop->cast_prop<yordle::data::prop::float32_prop>(483910946u);
    if(ptr_mEndValue != nullptr) {
        mEndValue = ptr_mEndValue->value;
    }

    auto ptr_x7fe8e3b3 = prop->cast_prop<yordle::data::prop::bool_prop>(2145969075u);
    if(ptr_x7fe8e3b3 != nullptr) {
        x7fe8e3b3 = ptr_x7fe8e3b3->value;
    }

    auto ptr_xa331f6bf = prop->cast_prop<yordle::data::prop::bool_prop>(2737960639u);
    if(ptr_xa331f6bf != nullptr) {
        xa331f6bf = ptr_xa331f6bf->value;
    }
}