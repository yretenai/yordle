/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xdbaa8263.hpp>

#include <yordle/data/meta/bin_defs/x2925d554.hpp>
#include <yordle/data/meta/bin_defs/xadd14edd.hpp>
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

yordle::data::meta::xdbaa8263::xdbaa8263(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xd20a71a6 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3523899814u);
    if(ptr_xd20a71a6 != nullptr) {
        xd20a71a6 = yordle::data::meta::deserialize<yordle::data::meta::x2925d554>(ptr_xd20a71a6, 690345300u);
    }

    auto ptr_xb7e43ad3 = prop->cast_prop<yordle::data::prop::structure_prop>(3085187795u);
    if(ptr_xb7e43ad3 != nullptr) {
        xb7e43ad3 = yordle::data::meta::deserialize<yordle::data::meta::xadd14edd>(ptr_xb7e43ad3, 2916175581u);
    }
}
