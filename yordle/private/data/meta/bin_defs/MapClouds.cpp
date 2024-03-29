/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapClouds.hpp>

#include <yordle/data/meta/bin_defs/MapCloudsLayer.hpp>
#include <yordle/data/meta/bin_defs/MapGraphicsFeature.hpp>
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

yordle::data::meta::MapClouds::MapClouds(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapGraphicsFeature(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_CloudsTexturePath = prop->cast_prop<yordle::data::prop::string_prop>(1664582205u);
    if(ptr_CloudsTexturePath != nullptr) {
        CloudsTexturePath = ptr_CloudsTexturePath->value;
    }

    auto ptr_x64847953 = prop->cast_prop<yordle::data::prop::quaternion_prop>(1686403411u);
    if(ptr_x64847953 != nullptr) {
        x64847953 = ptr_x64847953->value;
    }

    auto ptr_IsEyeCandy = prop->cast_prop<yordle::data::prop::bool_prop>(839153119u);
    if(ptr_IsEyeCandy != nullptr) {
        IsEyeCandy = ptr_IsEyeCandy->value;
    }

    auto ptr_Layers = prop->cast_prop<yordle::data::prop::set_prop>(2411172191u);
    if(ptr_Layers != nullptr) {
        auto index_Layers = 0;
        for(const auto &set_Layers_entry : ptr_Layers->value) {
            auto ptr_Layers_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_Layers_entry);
            if(ptr_Layers_entry != nullptr) {
                Layers[index_Layers] = yordle::data::meta::deserialize<yordle::data::meta::MapCloudsLayer>(ptr_Layers_entry, 769601740u);
            }
            index_Layers++;
        }
    }
}
