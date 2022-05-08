/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xd0217984.hpp>

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

yordle::data::meta::xd0217984::xd0217984(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe9859447 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3917845575u);
    if(ptr_xe9859447 != nullptr) {
        xe9859447 = ptr_xe9859447->value;
    }

    auto ptr_x432547b6 = prop->cast_prop<yordle::data::prop::map_prop>(1126516662u);
    if(ptr_x432547b6 != nullptr) {
        for(const auto &set_x432547b6_pair : ptr_x432547b6->value) {
            auto ptr_x432547b6_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x432547b6_pair.first);
            auto ptr_x432547b6_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x432547b6_pair.second);
            if(ptr_x432547b6_key != nullptr && ptr_x432547b6_value != nullptr) {
                x432547b6.emplace(ptr_x432547b6_key->value, ptr_x432547b6_value->value);
            }
        }
    }
}
