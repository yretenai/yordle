/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xbf11ddc7.hpp>

#include <yordle/data/meta/bin_defs/StaticMaterialDef.hpp>
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

yordle::data::meta::xbf11ddc7::xbf11ddc7(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x1eebe507 = prop->cast_prop<yordle::data::prop::map_prop>(518776071u);
    if(ptr_x1eebe507 != nullptr) {
        for(const auto &set_x1eebe507_pair : ptr_x1eebe507->value) {
            auto ptr_x1eebe507_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_x1eebe507_pair.first);
            auto ptr_x1eebe507_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_x1eebe507_pair.second);
            if(ptr_x1eebe507_key != nullptr && ptr_x1eebe507_value != nullptr) {
                x1eebe507.emplace(ptr_x1eebe507_key->value, yordle::data::meta::bin_ref<yordle::data::meta::StaticMaterialDef>(4288492553u, ptr_x1eebe507_value->value));
            }
        }
    }
}
