/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x34270fce.hpp>

#include <yordle/data/meta/bin_defs/xcff0bd42.hpp>
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

yordle::data::meta::x34270fce::x34270fce(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x62580dd4 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1649937876u);
    if(ptr_x62580dd4 != nullptr) {
        x62580dd4 = yordle::data::meta::deserialize<yordle::data::meta::xcff0bd42>(ptr_x62580dd4, 3488660802u);
    }

    auto ptr_xcac17cff = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3401678079u);
    if(ptr_xcac17cff != nullptr) {
        xcac17cff = ptr_xcac17cff->value;
    }

    auto ptr_xd829fd95 = prop->cast_prop<yordle::data::prop::uint32_prop>(3626630549u);
    if(ptr_xd829fd95 != nullptr) {
        xd829fd95 = ptr_xd829fd95->value;
    }
}
