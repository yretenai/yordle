/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x7992e1ee.hpp>

#include <yordle/data/meta/bin_defs/x1c494c09.hpp>
#include <yordle/data/meta/bin_defs/x9fd8bcfd.hpp>
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

yordle::data::meta::x7992e1ee::x7992e1ee(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x9fd8bcfd(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Location = prop->cast_prop<yordle::data::prop::structure_prop>(200649126u);
    if(ptr_Location != nullptr) {
        Location = yordle::data::meta::deserialize<yordle::data::meta::x1c494c09>(ptr_Location, 474565641u);
    }
}
