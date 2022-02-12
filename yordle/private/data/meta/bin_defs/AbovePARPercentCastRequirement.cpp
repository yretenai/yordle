/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AbovePARPercentCastRequirement.hpp>

#include <yordle/data/meta/bin_defs/ICastRequirement.hpp>
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

yordle::data::meta::AbovePARPercentCastRequirement::AbovePARPercentCastRequirement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ICastRequirement(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mPARType = prop->cast_prop<yordle::data::prop::uint8_prop>(506184499u);
    if(ptr_mPARType != nullptr) {
        mPARType = ptr_mPARType->value;
    }

    auto ptr_mCurrentPercentPAR = prop->cast_prop<yordle::data::prop::float32_prop>(1061076085u);
    if(ptr_mCurrentPercentPAR != nullptr) {
        mCurrentPercentPAR = ptr_mCurrentPercentPAR->value;
    }
}
