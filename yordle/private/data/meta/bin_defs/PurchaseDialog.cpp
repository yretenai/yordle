/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/PurchaseDialog.hpp>

#include <yordle/data/meta/bin_defs/x6d8b7fba.hpp>
#include <yordle/data/meta/bin_defs/x75259ad3.hpp>
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

yordle::data::meta::PurchaseDialog::PurchaseDialog(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x75259ad3(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x88f6a038 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2297864248u);
    if(ptr_x88f6a038 != nullptr) {
        x88f6a038 = ptr_x88f6a038->value;
    }

    auto ptr_xb0dd6202 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2967298562u);
    if(ptr_xb0dd6202 != nullptr) {
        xb0dd6202 = ptr_xb0dd6202->value;
    }

    auto ptr_x909d5d3f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2426232127u);
    if(ptr_x909d5d3f != nullptr) {
        x909d5d3f = ptr_x909d5d3f->value;
    }

    auto ptr_x25c805c3 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(633865667u);
    if(ptr_x25c805c3 != nullptr) {
        x25c805c3 = ptr_x25c805c3->value;
    }

    auto ptr_x7061da5 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(117841317u);
    if(ptr_x7061da5 != nullptr) {
        x7061da5 = ptr_x7061da5->value;
    }

    auto ptr_x8dd1da54 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2379340372u);
    if(ptr_x8dd1da54 != nullptr) {
        x8dd1da54 = ptr_x8dd1da54->value;
    }

    auto ptr_x2e6d3c7e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(778910846u);
    if(ptr_x2e6d3c7e != nullptr) {
        x2e6d3c7e = ptr_x2e6d3c7e->value;
    }

    auto ptr_xf42e1d1a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4096662810u);
    if(ptr_xf42e1d1a != nullptr) {
        xf42e1d1a = ptr_xf42e1d1a->value;
    }

    auto ptr_x3591028e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(898695822u);
    if(ptr_x3591028e != nullptr) {
        x3591028e = ptr_x3591028e->value;
    }

    auto ptr_x67c3b51b = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1740879131u);
    if(ptr_x67c3b51b != nullptr) {
        x67c3b51b = yordle::data::meta::deserialize<yordle::data::meta::x6d8b7fba>(ptr_x67c3b51b, 1837858746u);
    }

    auto ptr_x49d6bd37 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1238809911u);
    if(ptr_x49d6bd37 != nullptr) {
        x49d6bd37 = ptr_x49d6bd37->value;
    }

    auto ptr_x2fbbd4d0 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(800838864u);
    if(ptr_x2fbbd4d0 != nullptr) {
        x2fbbd4d0 = ptr_x2fbbd4d0->value;
    }

    auto ptr_x2aa5cb5e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(715508574u);
    if(ptr_x2aa5cb5e != nullptr) {
        x2aa5cb5e = ptr_x2aa5cb5e->value;
    }

    auto ptr_xe338a1da = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3812139482u);
    if(ptr_xe338a1da != nullptr) {
        xe338a1da = ptr_xe338a1da->value;
    }

    auto ptr_x32cd31df = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(852308447u);
    if(ptr_x32cd31df != nullptr) {
        x32cd31df = ptr_x32cd31df->value;
    }

    auto ptr_x6bee5d1e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1810783518u);
    if(ptr_x6bee5d1e != nullptr) {
        x6bee5d1e = ptr_x6bee5d1e->value;
    }

    auto ptr_purchaseButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1457318954u);
    if(ptr_purchaseButton != nullptr) {
        purchaseButton = ptr_purchaseButton->value;
    }

    auto ptr_moreInfoButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(91533656u);
    if(ptr_moreInfoButton != nullptr) {
        moreInfoButton = ptr_moreInfoButton->value;
    }
}