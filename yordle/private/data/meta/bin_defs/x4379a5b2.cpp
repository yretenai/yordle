/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x4379a5b2.hpp>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
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

yordle::data::meta::x4379a5b2::x4379a5b2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x5c92b7f2 = prop->cast_prop<yordle::data::prop::uint8_prop>(1553119218u);
    if(ptr_x5c92b7f2 != nullptr) {
        x5c92b7f2 = ptr_x5c92b7f2->value;
    }

    auto ptr_xaca5b9b4 = prop->cast_prop<yordle::data::prop::uint8_prop>(2896542132u);
    if(ptr_xaca5b9b4 != nullptr) {
        xaca5b9b4 = ptr_xaca5b9b4->value;
    }

    auto ptr_x583da425 = prop->cast_prop<yordle::data::prop::set_prop>(1480434725u);
    if(ptr_x583da425 != nullptr) {
        for(const auto &set_x583da425_entry : ptr_x583da425->value) {
            auto ptr_x583da425_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_x583da425_entry);
            if(ptr_x583da425_entry != nullptr) {
                x583da425.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::IGameCalculationPart>(ptr_x583da425_entry, 3053458126u));
            }
        }
    }
}
