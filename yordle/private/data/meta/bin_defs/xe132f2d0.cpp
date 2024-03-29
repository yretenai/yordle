/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xe132f2d0.hpp>

#include <yordle/data/meta/bin_defs/TftEffectAmount.hpp>
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

yordle::data::meta::xe132f2d0::xe132f2d0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x1d5932cf = prop->cast_prop<yordle::data::prop::optional_prop>(492384975u);
    if(ptr_x1d5932cf != nullptr) {
        auto ptr_x1d5932cf_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(ptr_x1d5932cf->value);
        if (ptr_x1d5932cf_opt != nullptr) {
            x1d5932cf = ptr_x1d5932cf_opt->value;
        }
    }

    auto ptr_x26e50f8c = prop->cast_prop<yordle::data::prop::uint8_prop>(652545932u);
    if(ptr_x26e50f8c != nullptr) {
        x26e50f8c = ptr_x26e50f8c->value;
    }

    auto ptr_targetStrategy = prop->cast_prop<yordle::data::prop::uint8_prop>(609828125u);
    if(ptr_targetStrategy != nullptr) {
        targetStrategy = ptr_targetStrategy->value;
    }

    auto ptr_buffName = prop->cast_prop<yordle::data::prop::string_prop>(2465532423u);
    if(ptr_buffName != nullptr) {
        buffName = ptr_buffName->value;
    }

    auto ptr_activatedBuffName = prop->cast_prop<yordle::data::prop::string_prop>(590377638u);
    if(ptr_activatedBuffName != nullptr) {
        activatedBuffName = ptr_activatedBuffName->value;
    }

    auto ptr_effectAmounts = prop->cast_prop<yordle::data::prop::set_prop>(3242028337u);
    if(ptr_effectAmounts != nullptr) {
        for(const auto &set_effectAmounts_entry : ptr_effectAmounts->value) {
            auto ptr_effectAmounts_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_effectAmounts_entry);
            if(ptr_effectAmounts_entry != nullptr) {
                effectAmounts.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TftEffectAmount>(ptr_effectAmounts_entry, 1660895988u));
            }
        }
    }
}
