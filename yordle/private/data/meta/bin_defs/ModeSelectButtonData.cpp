/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ModeSelectButtonData.hpp>

#include <yordle/data/meta/bin_defs/x63394a54.hpp>
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

yordle::data::meta::ModeSelectButtonData::ModeSelectButtonData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_queueId = prop->cast_prop<yordle::data::prop::int64_prop>(3917022501u);
    if(ptr_queueId != nullptr) {
        queueId = ptr_queueId->value;
    }

    auto ptr_xc256041d = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3260417053u);
    if(ptr_xc256041d != nullptr) {
        xc256041d = yordle::data::meta::deserialize<yordle::data::meta::x63394a54>(ptr_xc256041d, 1664698964u);
    }
}
