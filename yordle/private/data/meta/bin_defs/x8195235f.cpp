/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x8195235f.hpp>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/xfdad6e32.hpp>
#include <yordle/data/meta/bin_defs/x3228d244.hpp>
#include <yordle/data/meta/bin_defs/xb2be4d05.hpp>
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

yordle::data::meta::x8195235f::x8195235f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x8e32bc1e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2385689630u);
    if(ptr_x8e32bc1e != nullptr) {
        x8e32bc1e = ptr_x8e32bc1e->value;
    }

    auto ptr_xafdda85a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2950539354u);
    if(ptr_xafdda85a != nullptr) {
        xafdda85a = ptr_xafdda85a->value;
    }

    auto ptr_MainViewPaneDefinition = prop->cast_prop<yordle::data::prop::structure_prop>(3402876242u);
    if(ptr_MainViewPaneDefinition != nullptr) {
        MainViewPaneDefinition = yordle::data::meta::deserialize<yordle::data::meta::ViewPaneDefinition>(ptr_MainViewPaneDefinition, 2330109623u);
    }

    auto ptr_xd485aee6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3565530854u);
    if(ptr_xd485aee6 != nullptr) {
        xd485aee6 = ptr_xd485aee6->value;
    }

    auto ptr_xfdad6e32 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(4256001586u);
    if(ptr_xfdad6e32 != nullptr) {
        xfdad6e32 = yordle::data::meta::deserialize<yordle::data::meta::xfdad6e32>(ptr_xfdad6e32, 4256001586u);
    }

    auto ptr_x3228d244 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(841536068u);
    if(ptr_x3228d244 != nullptr) {
        x3228d244 = yordle::data::meta::deserialize<yordle::data::meta::x3228d244>(ptr_x3228d244, 841536068u);
    }

    auto ptr_xb2be4d05 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2998816005u);
    if(ptr_xb2be4d05 != nullptr) {
        xb2be4d05 = yordle::data::meta::deserialize<yordle::data::meta::xb2be4d05>(ptr_xb2be4d05, 2998816005u);
    }

    auto ptr_x4cca91ee = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1288344046u);
    if(ptr_x4cca91ee != nullptr) {
        x4cca91ee = ptr_x4cca91ee->value;
    }

    auto ptr_xa43dbb68 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2755509096u);
    if(ptr_xa43dbb68 != nullptr) {
        xa43dbb68 = ptr_xa43dbb68->value;
    }
}
