/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x5059f9b6.hpp>

#include <yordle/data/meta/bin_defs/xbaddec44.hpp>
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

yordle::data::meta::x5059f9b6::x5059f9b6(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xce58156a = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3461879146u);
    if(ptr_xce58156a != nullptr) {
        xce58156a = yordle::data::meta::deserialize<yordle::data::meta::xbaddec44>(ptr_xce58156a, 3135106116u);
    }

    auto ptr_x67126180 = prop->cast_prop<yordle::data::prop::set_prop>(1729257856u);
    if(ptr_x67126180 != nullptr) {
        auto index_x67126180 = 0;
        for(const auto &set_x67126180_entry : ptr_x67126180->value) {
            auto ptr_x67126180_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x67126180_entry);
            if(ptr_x67126180_entry != nullptr) {
                x67126180[index_x67126180] = ptr_x67126180_entry->value;
            }
            index_x67126180++;
        }
    }

    auto ptr_x7f3b5da6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2134597030u);
    if(ptr_x7f3b5da6 != nullptr) {
        x7f3b5da6 = ptr_x7f3b5da6->value;
    }

    auto ptr_xcf8df2c8 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3482186440u);
    if(ptr_xcf8df2c8 != nullptr) {
        xcf8df2c8 = ptr_xcf8df2c8->value;
    }
}
