/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x15793a8c.hpp>

#include <yordle/data/meta/bin_defs/x4f3e1bdd.hpp>
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

yordle::data::meta::x15793a8c::x15793a8c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x6d0bc246 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1829487174u);
    if(ptr_x6d0bc246 != nullptr) {
        x6d0bc246 = yordle::data::meta::deserialize<yordle::data::meta::x4f3e1bdd>(ptr_x6d0bc246, 1329470429u);
    }

    auto ptr_xae6149e = prop->cast_prop<yordle::data::prop::inline_structure_prop>(182850718u);
    if(ptr_xae6149e != nullptr) {
        xae6149e = yordle::data::meta::deserialize<yordle::data::meta::x4f3e1bdd>(ptr_xae6149e, 1329470429u);
    }
}