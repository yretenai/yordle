/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xead1b379.hpp>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
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

yordle::data::meta::xead1b379::xead1b379(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xfb403eda = prop->cast_prop<yordle::data::prop::map_prop>(4215291610u);
    if(ptr_xfb403eda != nullptr) {
        for(const auto &set_xfb403eda_pair : ptr_xfb403eda->value) {
            auto ptr_xfb403eda_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_xfb403eda_pair.first);
            auto ptr_xfb403eda_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_xfb403eda_pair.second);
            if(ptr_xfb403eda_key != nullptr && ptr_xfb403eda_value != nullptr) {
                xfb403eda.emplace(ptr_xfb403eda_key->value, yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData>(1171098015u, ptr_xfb403eda_value->value));
            }
        }
    }
}