/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x6172a47c.hpp>

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

yordle::data::meta::x6172a47c::x6172a47c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xa7ec94da = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2817299674u);
    if(ptr_xa7ec94da != nullptr) {
        xa7ec94da = ptr_xa7ec94da->value;
    }

    auto ptr_x4bfee116 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1274994966u);
    if(ptr_x4bfee116 != nullptr) {
        x4bfee116 = ptr_x4bfee116->value;
    }

    auto ptr_xf21bd022 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4061909026u);
    if(ptr_xf21bd022 != nullptr) {
        xf21bd022 = ptr_xf21bd022->value;
    }

    auto ptr_x61b34f70 = prop->cast_prop<yordle::data::prop::structure_prop>(1639141232u);
    if(ptr_x61b34f70 != nullptr) {
        x61b34f70 = yordle::data::meta::deserialize<yordle::data::meta::xd0217984>(ptr_x61b34f70, 3491854724u);
    }

    auto ptr_xe617a5ad = prop->cast_prop<yordle::data::prop::structure_prop>(3860309421u);
    if(ptr_xe617a5ad != nullptr) {
        xe617a5ad = yordle::data::meta::deserialize<yordle::data::meta::xd0217984>(ptr_xe617a5ad, 3491854724u);
    }

    auto ptr_xa6cd436d = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2798469997u);
    if(ptr_xa6cd436d != nullptr) {
        xa6cd436d = ptr_xa6cd436d->value;
    }
}