/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x868f2575.hpp>

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

yordle::data::meta::x868f2575::x868f2575(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xa46a43a = prop->cast_prop<yordle::data::prop::map_prop>(172401722u);
    if(ptr_xa46a43a != nullptr) {
        for(const auto &set_xa46a43a_pair : ptr_xa46a43a->value) {
            auto ptr_xa46a43a_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_xa46a43a_pair.first);
            auto ptr_xa46a43a_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xa46a43a_pair.second);
            if(ptr_xa46a43a_key != nullptr && ptr_xa46a43a_value != nullptr) {
                xa46a43a.emplace(ptr_xa46a43a_key->value, ptr_xa46a43a_value->value);
            }
        }
    }
}
