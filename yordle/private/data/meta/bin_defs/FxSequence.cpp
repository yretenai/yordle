/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FxSequence.hpp>

#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_defs/xb7471737.hpp>
#include <yordle/data/meta/bin_defs/x78ee723e.hpp>
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

yordle::data::meta::FxSequence::FxSequence(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Actions = prop->cast_prop<yordle::data::prop::unordered_set_prop>(3048556132u);
    if(ptr_Actions != nullptr) {
        for(const auto &set_Actions_entry : ptr_Actions->value) {
            auto ptr_Actions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_Actions_entry);
            if(ptr_Actions_entry != nullptr) {
                Actions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::IFxAction>(ptr_Actions_entry, 3063177560u));
            }
        }
    }

    auto ptr_category = prop->cast_prop<yordle::data::prop::reference_prop>(3475980913u);
    if(ptr_category != nullptr) {
        category = yordle::data::meta::bin_ref<yordle::data::meta::xb7471737>(3074889527u, ptr_category->value);
    }

    auto ptr_xe838bf01 = prop->cast_prop<yordle::data::prop::set_prop>(3896033025u);
    if(ptr_xe838bf01 != nullptr) {
        for(const auto &set_xe838bf01_entry : ptr_xe838bf01->value) {
            auto ptr_xe838bf01_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xe838bf01_entry);
            if(ptr_xe838bf01_entry != nullptr) {
                xe838bf01.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x78ee723e>(ptr_xe838bf01_entry, 2028892734u));
            }
        }
    }
}
