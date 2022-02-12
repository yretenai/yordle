/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HasBuffComparisonData.hpp>

#include <yordle/data/meta/bin_defs/HasBuffData.hpp>
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

yordle::data::meta::HasBuffComparisonData::HasBuffComparisonData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mBuffs = prop->cast_prop<yordle::data::prop::set_prop>(254459326u);
    if(ptr_mBuffs != nullptr) {
        for(const auto &set_mBuffs_entry : ptr_mBuffs->value) {
            auto ptr_mBuffs_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mBuffs_entry);
            if(ptr_mBuffs_entry != nullptr) {
                mBuffs.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::HasBuffData>(ptr_mBuffs_entry, 3836337806u));
            }
        }
    }

    auto ptr_mCompareOp = prop->cast_prop<yordle::data::prop::uint8_prop>(854730536u);
    if(ptr_mCompareOp != nullptr) {
        mCompareOp = ptr_mCompareOp->value;
    }
}