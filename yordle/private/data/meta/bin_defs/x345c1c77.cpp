/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x345c1c77.hpp>

#include <yordle/data/meta/bin_defs/IconElementData.hpp>
#include <yordle/data/meta/bin_defs/x89fa8d1c.hpp>
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

yordle::data::meta::x345c1c77::x345c1c77(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x89fa8d1c(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x76ef64de = prop->cast_prop<yordle::data::prop::reference_prop>(1995400414u);
    if(ptr_x76ef64de != nullptr) {
        x76ef64de = yordle::data::meta::bin_ref<yordle::data::meta::IconElementData>(1005588128u, ptr_x76ef64de->value);
    }
}
