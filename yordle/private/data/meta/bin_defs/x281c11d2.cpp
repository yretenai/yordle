/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x281c11d2.hpp>

#include <yordle/data/meta/bin_defs/x4057a24f.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
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

yordle::data::meta::x281c11d2::x281c11d2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xcac17cff = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3401678079u);
    if(ptr_xcac17cff != nullptr) {
        xcac17cff = ptr_xcac17cff->value;
    }

    auto ptr_x13388437 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(322470967u);
    if(ptr_x13388437 != nullptr) {
        x13388437 = yordle::data::meta::deserialize<yordle::data::meta::x4057a24f>(ptr_x13388437, 1079485007u);
    }

    auto ptr_x2abbee1f = prop->cast_prop<yordle::data::prop::inline_structure_prop>(716959263u);
    if(ptr_x2abbee1f != nullptr) {
        x2abbee1f = yordle::data::meta::deserialize<yordle::data::meta::x4057a24f>(ptr_x2abbee1f, 1079485007u);
    }

    auto ptr_xe095d841 = prop->cast_prop<yordle::data::prop::string_prop>(3767916609u);
    if(ptr_xe095d841 != nullptr) {
        xe095d841 = ptr_xe095d841->value;
    }
}
