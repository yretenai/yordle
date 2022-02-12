/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapBakeProperties.hpp>

#include <yordle/data/meta/bin_defs/MapComponent.hpp>
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

yordle::data::meta::MapBakeProperties::MapBakeProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapComponent(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_lightGridSize = prop->cast_prop<yordle::data::prop::uint32_prop>(1184620962u);
    if(ptr_lightGridSize != nullptr) {
        lightGridSize = ptr_lightGridSize->value;
    }

    auto ptr_x22d24a9a = prop->cast_prop<yordle::data::prop::float32_prop>(584207002u);
    if(ptr_x22d24a9a != nullptr) {
        x22d24a9a = ptr_x22d24a9a->value;
    }

    auto ptr_lightGridCharacterFullBrightIntensity = prop->cast_prop<yordle::data::prop::float32_prop>(1550454284u);
    if(ptr_lightGridCharacterFullBrightIntensity != nullptr) {
        lightGridCharacterFullBrightIntensity = ptr_lightGridCharacterFullBrightIntensity->value;
    }

    auto ptr_xea4e5cc8 = prop->cast_prop<yordle::data::prop::float32_prop>(3931004104u);
    if(ptr_xea4e5cc8 != nullptr) {
        xea4e5cc8 = ptr_xea4e5cc8->value;
    }

    auto ptr_x2f3b5471 = prop->cast_prop<yordle::data::prop::float32_prop>(792417393u);
    if(ptr_x2f3b5471 != nullptr) {
        x2f3b5471 = ptr_x2f3b5471->value;
    }

    auto ptr_lightGridFileName = prop->cast_prop<yordle::data::prop::string_prop>(1969336478u);
    if(ptr_lightGridFileName != nullptr) {
        lightGridFileName = ptr_lightGridFileName->value;
    }
}
