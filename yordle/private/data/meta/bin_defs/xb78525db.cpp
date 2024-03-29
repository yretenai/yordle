/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xb78525db.hpp>

#include <yordle/data/meta/bin_defs/x222410ce.hpp>
#include <yordle/data/meta/bin_defs/x1b1243af.hpp>
#include <yordle/data/meta/bin_defs/x86f7132e.hpp>
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

yordle::data::meta::xb78525db::xb78525db(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xa48e3ad9 = prop->cast_prop<yordle::data::prop::set_prop>(2760784601u);
    if(ptr_xa48e3ad9 != nullptr) {
        auto index_xa48e3ad9 = 0;
        for(const auto &set_xa48e3ad9_entry : ptr_xa48e3ad9->value) {
            auto ptr_xa48e3ad9_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xa48e3ad9_entry);
            if(ptr_xa48e3ad9_entry != nullptr) {
                xa48e3ad9[index_xa48e3ad9] = yordle::data::meta::deserialize<yordle::data::meta::x222410ce>(ptr_xa48e3ad9_entry, 572788942u);
            }
            index_xa48e3ad9++;
        }
    }

    auto ptr_x6a4675e9 = prop->cast_prop<yordle::data::prop::structure_prop>(1783002601u);
    if(ptr_x6a4675e9 != nullptr) {
        x6a4675e9 = yordle::data::meta::deserialize<yordle::data::meta::x1b1243af>(ptr_x6a4675e9, 454181807u);
    }

    auto ptr_x6c2c1d94 = prop->cast_prop<yordle::data::prop::structure_prop>(1814830484u);
    if(ptr_x6c2c1d94 != nullptr) {
        x6c2c1d94 = yordle::data::meta::deserialize<yordle::data::meta::x86f7132e>(ptr_x6c2c1d94, 2264339246u);
    }

    auto ptr_xe8dcc7f6 = prop->cast_prop<yordle::data::prop::set_prop>(3906783222u);
    if(ptr_xe8dcc7f6 != nullptr) {
        auto index_xe8dcc7f6 = 0;
        for(const auto &set_xe8dcc7f6_entry : ptr_xe8dcc7f6->value) {
            auto ptr_xe8dcc7f6_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xe8dcc7f6_entry);
            if(ptr_xe8dcc7f6_entry != nullptr) {
                xe8dcc7f6[index_xe8dcc7f6] = yordle::data::meta::deserialize<yordle::data::meta::x222410ce>(ptr_xe8dcc7f6_entry, 572788942u);
            }
            index_xe8dcc7f6++;
        }
    }

    auto ptr_Passive = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2807896158u);
    if(ptr_Passive != nullptr) {
        Passive = yordle::data::meta::deserialize<yordle::data::meta::x222410ce>(ptr_Passive, 572788942u);
    }

    auto ptr_x1cf64a20 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(485902880u);
    if(ptr_x1cf64a20 != nullptr) {
        x1cf64a20 = ptr_x1cf64a20->value;
    }
}
