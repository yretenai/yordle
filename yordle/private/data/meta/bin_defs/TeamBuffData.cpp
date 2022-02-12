/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TeamBuffData.hpp>

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

yordle::data::meta::TeamBuffData::TeamBuffData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mBuffName = prop->cast_prop<yordle::data::prop::string_prop>(38338834u);
    if(ptr_mBuffName != nullptr) {
        mBuffName = ptr_mBuffName->value;
    }

    auto ptr_mUiName = prop->cast_prop<yordle::data::prop::string_prop>(3736966593u);
    if(ptr_mUiName != nullptr) {
        mUiName = ptr_mUiName->value;
    }

    auto ptr_x9a53f442 = prop->cast_prop<yordle::data::prop::bool_prop>(2589193282u);
    if(ptr_x9a53f442 != nullptr) {
        x9a53f442 = ptr_x9a53f442->value;
    }
}
