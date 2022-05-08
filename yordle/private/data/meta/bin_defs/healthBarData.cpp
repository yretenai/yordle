/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/healthBarData.hpp>

#include <yordle/data/meta/bin_defs/xd0217984.hpp>
#include <yordle/data/meta/bin_defs/xbcdc9113.hpp>
#include <yordle/data/meta/bin_defs/xb075814f.hpp>
#include <yordle/data/meta/bin_defs/xad58e686.hpp>
#include <yordle/data/meta/bin_defs/x6172a47c.hpp>
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

yordle::data::meta::healthBarData::healthBarData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_HealthBar = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2785262608u);
    if(ptr_HealthBar != nullptr) {
        HealthBar = yordle::data::meta::deserialize<yordle::data::meta::xd0217984>(ptr_HealthBar, 3491854724u);
    }

    auto ptr_xd20a71a6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3523899814u);
    if(ptr_xd20a71a6 != nullptr) {
        xd20a71a6 = ptr_xd20a71a6->value;
    }

    auto ptr_Backdrop = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2478896375u);
    if(ptr_Backdrop != nullptr) {
        Backdrop = ptr_Backdrop->value;
    }

    auto ptr_xc1615329 = prop->cast_prop<yordle::data::prop::structure_prop>(3244380969u);
    if(ptr_xc1615329 != nullptr) {
        xc1615329 = yordle::data::meta::deserialize<yordle::data::meta::xbcdc9113>(ptr_xc1615329, 3168571667u);
    }

    auto ptr_x472fe83 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(74645123u);
    if(ptr_x472fe83 != nullptr) {
        x472fe83 = ptr_x472fe83->value;
    }

    auto ptr_xa3482ede = prop->cast_prop<yordle::data::prop::structure_prop>(2739416798u);
    if(ptr_xa3482ede != nullptr) {
        xa3482ede = yordle::data::meta::deserialize<yordle::data::meta::xb075814f>(ptr_xa3482ede, 2960490831u);
    }

    auto ptr_fadeData = prop->cast_prop<yordle::data::prop::structure_prop>(3172238683u);
    if(ptr_fadeData != nullptr) {
        fadeData = yordle::data::meta::deserialize<yordle::data::meta::xad58e686>(ptr_fadeData, 2908284550u);
    }

    auto ptr_x2cc9296f = prop->cast_prop<yordle::data::prop::structure_prop>(751380847u);
    if(ptr_x2cc9296f != nullptr) {
        x2cc9296f = yordle::data::meta::deserialize<yordle::data::meta::x6172a47c>(ptr_x2cc9296f, 1634903164u);
    }
}
