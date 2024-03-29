/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTBotLoadoutConfiguration.hpp>

#include <yordle/data/meta/bin_defs/TFTCompanionBucket.hpp>
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

yordle::data::meta::TFTBotLoadoutConfiguration::TFTBotLoadoutConfiguration(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xeffbc65c = prop->cast_prop<yordle::data::prop::set_prop>(4026254940u);
    if(ptr_xeffbc65c != nullptr) {
        for(const auto &set_xeffbc65c_entry : ptr_xeffbc65c->value) {
            auto ptr_xeffbc65c_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xeffbc65c_entry);
            if(ptr_xeffbc65c_entry != nullptr) {
                xeffbc65c.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TFTCompanionBucket>(ptr_xeffbc65c_entry, 4009991563u));
            }
        }
    }

    auto ptr_mapSkins = prop->cast_prop<yordle::data::prop::set_prop>(785627485u);
    if(ptr_mapSkins != nullptr) {
        for(const auto &set_mapSkins_entry : ptr_mapSkins->value) {
            auto ptr_mapSkins_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mapSkins_entry);
            if(ptr_mapSkins_entry != nullptr) {
                mapSkins.emplace_back(ptr_mapSkins_entry->value);
            }
        }
    }
}
