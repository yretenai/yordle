/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/LobbyViewController.hpp>

#include <yordle/data/meta/bin_defs/xc5976812.hpp>
#include <yordle/data/meta/bin_defs/x45e66b18.hpp>
#include <yordle/data/meta/bin_defs/x407b58d1.hpp>
#include <yordle/data/meta/bin_defs/x5a27978a.hpp>
#include <yordle/data/meta/bin_defs/x75259ad3.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
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

yordle::data::meta::LobbyViewController::LobbyViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x3dc88bb0 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1036553136u);
    if(ptr_x3dc88bb0 != nullptr) {
        x3dc88bb0 = yordle::data::meta::deserialize<yordle::data::meta::xc5976812>(ptr_x3dc88bb0, 3315034130u);
    }

    auto ptr_xa7db6492 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2816173202u);
    if(ptr_xa7db6492 != nullptr) {
        xa7db6492 = yordle::data::meta::deserialize<yordle::data::meta::x45e66b18>(ptr_xa7db6492, 1172728600u);
    }

    auto ptr_xf12be813 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(4046186515u);
    if(ptr_xf12be813 != nullptr) {
        xf12be813 = yordle::data::meta::deserialize<yordle::data::meta::x407b58d1>(ptr_xf12be813, 1081825489u);
    }

    auto ptr_x665a0a9c = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1717176988u);
    if(ptr_x665a0a9c != nullptr) {
        x665a0a9c = yordle::data::meta::deserialize<yordle::data::meta::x5a27978a>(ptr_x665a0a9c, 1512544138u);
    }

    auto ptr_x573e7831 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1463711793u);
    if(ptr_x573e7831 != nullptr) {
        x573e7831 = ptr_x573e7831->value;
    }

    auto ptr_xbd29d956 = prop->cast_prop<yordle::data::prop::map_prop>(3173636438u);
    if(ptr_xbd29d956 != nullptr) {
        for(const auto &set_xbd29d956_pair : ptr_xbd29d956->value) {
            auto ptr_xbd29d956_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::int64_prop>(set_xbd29d956_pair.first);
            auto ptr_xbd29d956_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_xbd29d956_pair.second);
            if(ptr_xbd29d956_key != nullptr && ptr_xbd29d956_value != nullptr) {
                xbd29d956.emplace(ptr_xbd29d956_key->value, ptr_xbd29d956_value->value);
            }
        }
    }

    auto ptr_x1a361782 = prop->cast_prop<yordle::data::prop::string_prop>(439752578u);
    if(ptr_x1a361782 != nullptr) {
        x1a361782 = ptr_x1a361782->value;
    }

    auto ptr_xa38f5021 = prop->cast_prop<yordle::data::prop::string_prop>(2744078369u);
    if(ptr_xa38f5021 != nullptr) {
        xa38f5021 = ptr_xa38f5021->value;
    }

    auto ptr_x72c4914b = prop->cast_prop<yordle::data::prop::string_prop>(1925484875u);
    if(ptr_x72c4914b != nullptr) {
        x72c4914b = ptr_x72c4914b->value;
    }

    auto ptr_xbf51f61a = prop->cast_prop<yordle::data::prop::string_prop>(3209819674u);
    if(ptr_xbf51f61a != nullptr) {
        xbf51f61a = ptr_xbf51f61a->value;
    }

    auto ptr_x671c34c8 = prop->cast_prop<yordle::data::prop::reference_prop>(1729901768u);
    if(ptr_x671c34c8 != nullptr) {
        x671c34c8 = yordle::data::meta::bin_ref<yordle::data::meta::x75259ad3>(1965398739u, ptr_x671c34c8->value);
    }

    auto ptr_xb3e2f60e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3017995790u);
    if(ptr_xb3e2f60e != nullptr) {
        xb3e2f60e = ptr_xb3e2f60e->value;
    }

    auto ptr_ThemeMusicStateGroup = prop->cast_prop<yordle::data::prop::string_prop>(3518751045u);
    if(ptr_ThemeMusicStateGroup != nullptr) {
        ThemeMusicStateGroup = ptr_ThemeMusicStateGroup->value;
    }

    auto ptr_LobbyMusicState = prop->cast_prop<yordle::data::prop::string_prop>(3570395155u);
    if(ptr_LobbyMusicState != nullptr) {
        LobbyMusicState = ptr_LobbyMusicState->value;
    }

    auto ptr_InQueueMusicState = prop->cast_prop<yordle::data::prop::string_prop>(706897365u);
    if(ptr_InQueueMusicState != nullptr) {
        InQueueMusicState = ptr_InQueueMusicState->value;
    }
}
