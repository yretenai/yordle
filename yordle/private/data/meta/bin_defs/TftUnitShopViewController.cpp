/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TftUnitShopViewController.hpp>

#include <yordle/data/meta/bin_defs/x4c7c2212.hpp>
#include <yordle/data/meta/bin_defs/x54d18cd8.hpp>
#include <yordle/data/meta/bin_defs/x6df7291a.hpp>
#include <yordle/data/meta/bin_defs/x55cb8ac2.hpp>
#include <yordle/data/meta/bin_defs/x486fc5cf.hpp>
#include <yordle/data/meta/bin_defs/x2781ed6b.hpp>
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

yordle::data::meta::TftUnitShopViewController::TftUnitShopViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x7061734c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1885434700u);
    if(ptr_x7061734c != nullptr) {
        x7061734c = ptr_x7061734c->value;
    }

    auto ptr_x6b10b242 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1796256322u);
    if(ptr_x6b10b242 != nullptr) {
        x6b10b242 = ptr_x6b10b242->value;
    }

    auto ptr_xfab5fd6f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4206230895u);
    if(ptr_xfab5fd6f != nullptr) {
        xfab5fd6f = ptr_xfab5fd6f->value;
    }

    auto ptr_x18292501 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(405349633u);
    if(ptr_x18292501 != nullptr) {
        x18292501 = yordle::data::meta::deserialize<yordle::data::meta::x4c7c2212>(ptr_x18292501, 1283203602u);
    }

    auto ptr_xb6e30812 = prop->cast_prop<yordle::data::prop::set_prop>(3068332050u);
    if(ptr_xb6e30812 != nullptr) {
        auto index_xb6e30812 = 0;
        for(const auto &set_xb6e30812_entry : ptr_xb6e30812->value) {
            auto ptr_xb6e30812_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xb6e30812_entry);
            if(ptr_xb6e30812_entry != nullptr) {
                xb6e30812[index_xb6e30812] = ptr_xb6e30812_entry->value;
            }
            index_xb6e30812++;
        }
    }

    auto ptr_x6a7a42c9 = prop->cast_prop<yordle::data::prop::set_prop>(1786397385u);
    if(ptr_x6a7a42c9 != nullptr) {
        auto index_x6a7a42c9 = 0;
        for(const auto &set_x6a7a42c9_entry : ptr_x6a7a42c9->value) {
            auto ptr_x6a7a42c9_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x6a7a42c9_entry);
            if(ptr_x6a7a42c9_entry != nullptr) {
                x6a7a42c9[index_x6a7a42c9] = ptr_x6a7a42c9_entry->value;
            }
            index_x6a7a42c9++;
        }
    }

    auto ptr_xcfe62cb0 = prop->cast_prop<yordle::data::prop::set_prop>(3487968432u);
    if(ptr_xcfe62cb0 != nullptr) {
        auto index_xcfe62cb0 = 0;
        for(const auto &set_xcfe62cb0_entry : ptr_xcfe62cb0->value) {
            auto ptr_xcfe62cb0_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xcfe62cb0_entry);
            if(ptr_xcfe62cb0_entry != nullptr) {
                xcfe62cb0[index_xcfe62cb0] = ptr_xcfe62cb0_entry->value;
            }
            index_xcfe62cb0++;
        }
    }

    auto ptr_xbb192022 = prop->cast_prop<yordle::data::prop::set_prop>(3138986018u);
    if(ptr_xbb192022 != nullptr) {
        auto index_xbb192022 = 0;
        for(const auto &set_xbb192022_entry : ptr_xbb192022->value) {
            auto ptr_xbb192022_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xbb192022_entry);
            if(ptr_xbb192022_entry != nullptr) {
                xbb192022[index_xbb192022] = ptr_xbb192022_entry->value;
            }
            index_xbb192022++;
        }
    }

    auto ptr_x977c6308 = prop->cast_prop<yordle::data::prop::set_prop>(2541511432u);
    if(ptr_x977c6308 != nullptr) {
        auto index_x977c6308 = 0;
        for(const auto &set_x977c6308_entry : ptr_x977c6308->value) {
            auto ptr_x977c6308_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x977c6308_entry);
            if(ptr_x977c6308_entry != nullptr) {
                x977c6308[index_x977c6308] = ptr_x977c6308_entry->value;
            }
            index_x977c6308++;
        }
    }

    auto ptr_x33a69e1a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(866557466u);
    if(ptr_x33a69e1a != nullptr) {
        x33a69e1a = ptr_x33a69e1a->value;
    }

    auto ptr_xc95004b8 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3377464504u);
    if(ptr_xc95004b8 != nullptr) {
        xc95004b8 = ptr_xc95004b8->value;
    }

    auto ptr_xa97c9fd = prop->cast_prop<yordle::data::prop::set_prop>(177719805u);
    if(ptr_xa97c9fd != nullptr) {
        auto index_xa97c9fd = 0;
        for(const auto &set_xa97c9fd_entry : ptr_xa97c9fd->value) {
            auto ptr_xa97c9fd_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xa97c9fd_entry);
            if(ptr_xa97c9fd_entry != nullptr) {
                xa97c9fd[index_xa97c9fd] = ptr_xa97c9fd_entry->value;
            }
            index_xa97c9fd++;
        }
    }

    auto ptr_xa0ae7cfa = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2695789818u);
    if(ptr_xa0ae7cfa != nullptr) {
        xa0ae7cfa = ptr_xa0ae7cfa->value;
    }

    auto ptr_xccfbfa84 = prop->cast_prop<yordle::data::prop::set_prop>(3439065732u);
    if(ptr_xccfbfa84 != nullptr) {
        auto index_xccfbfa84 = 0;
        for(const auto &set_xccfbfa84_entry : ptr_xccfbfa84->value) {
            auto ptr_xccfbfa84_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xccfbfa84_entry);
            if(ptr_xccfbfa84_entry != nullptr) {
                xccfbfa84[index_xccfbfa84] = ptr_xccfbfa84_entry->value;
            }
            index_xccfbfa84++;
        }
    }

    auto ptr_xc43a3d1f = prop->cast_prop<yordle::data::prop::float32_prop>(3292151071u);
    if(ptr_xc43a3d1f != nullptr) {
        xc43a3d1f = ptr_xc43a3d1f->value;
    }

    auto ptr_x5445088b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1413810315u);
    if(ptr_x5445088b != nullptr) {
        x5445088b = ptr_x5445088b->value;
    }

    auto ptr_ToggleShopButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1142025085u);
    if(ptr_ToggleShopButton != nullptr) {
        ToggleShopButton = ptr_ToggleShopButton->value;
    }

    auto ptr_x6dbdfe81 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1841168001u);
    if(ptr_x6dbdfe81 != nullptr) {
        x6dbdfe81 = ptr_x6dbdfe81->value;
    }

    auto ptr_xe2261286 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3794145926u);
    if(ptr_xe2261286 != nullptr) {
        xe2261286 = ptr_xe2261286->value;
    }

    auto ptr_xf1c81e39 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4056423993u);
    if(ptr_xf1c81e39 != nullptr) {
        xf1c81e39 = ptr_xf1c81e39->value;
    }

    auto ptr_LockButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2142289162u);
    if(ptr_LockButton != nullptr) {
        LockButton = ptr_LockButton->value;
    }

    auto ptr_x92759f4a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2457182026u);
    if(ptr_x92759f4a != nullptr) {
        x92759f4a = ptr_x92759f4a->value;
    }

    auto ptr_BuyExpButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(20691162u);
    if(ptr_BuyExpButton != nullptr) {
        BuyExpButton = ptr_BuyExpButton->value;
    }

    auto ptr_x6ce5ac3f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1826991167u);
    if(ptr_x6ce5ac3f != nullptr) {
        x6ce5ac3f = ptr_x6ce5ac3f->value;
    }

    auto ptr_xd032c23a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3492987450u);
    if(ptr_xd032c23a != nullptr) {
        xd032c23a = ptr_xd032c23a->value;
    }

    auto ptr_x8c3b367 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(147043175u);
    if(ptr_x8c3b367 != nullptr) {
        x8c3b367 = yordle::data::meta::deserialize<yordle::data::meta::x54d18cd8>(ptr_x8c3b367, 1423019224u);
    }

    auto ptr_RerollButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2401000787u);
    if(ptr_RerollButton != nullptr) {
        RerollButton = ptr_RerollButton->value;
    }

    auto ptr_x9c75b4da = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2624959706u);
    if(ptr_x9c75b4da != nullptr) {
        x9c75b4da = ptr_x9c75b4da->value;
    }

    auto ptr_x25e415d7 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(635704791u);
    if(ptr_x25e415d7 != nullptr) {
        x25e415d7 = ptr_x25e415d7->value;
    }

    auto ptr_x47e60f32 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1206259506u);
    if(ptr_x47e60f32 != nullptr) {
        x47e60f32 = ptr_x47e60f32->value;
    }

    auto ptr_x1da67a89 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(497449609u);
    if(ptr_x1da67a89 != nullptr) {
        x1da67a89 = ptr_x1da67a89->value;
    }

    auto ptr_x6df7291a = prop->cast_prop<yordle::data::prop::structure_prop>(1844914458u);
    if(ptr_x6df7291a != nullptr) {
        x6df7291a = yordle::data::meta::deserialize<yordle::data::meta::x6df7291a>(ptr_x6df7291a, 1844914458u);
    }

    auto ptr_x233388c5 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(590579909u);
    if(ptr_x233388c5 != nullptr) {
        x233388c5 = ptr_x233388c5->value;
    }

    auto ptr_x83ee348a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2213426314u);
    if(ptr_x83ee348a != nullptr) {
        x83ee348a = ptr_x83ee348a->value;
    }

    auto ptr_x5069540f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1349080079u);
    if(ptr_x5069540f != nullptr) {
        x5069540f = ptr_x5069540f->value;
    }

    auto ptr_xf7d3bbbd = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4157848509u);
    if(ptr_xf7d3bbbd != nullptr) {
        xf7d3bbbd = ptr_xf7d3bbbd->value;
    }

    auto ptr_x5ff2047e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1609696382u);
    if(ptr_x5ff2047e != nullptr) {
        x5ff2047e = ptr_x5ff2047e->value;
    }

    auto ptr_x2497226b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(613884523u);
    if(ptr_x2497226b != nullptr) {
        x2497226b = ptr_x2497226b->value;
    }

    auto ptr_xd674f84f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3597989967u);
    if(ptr_xd674f84f != nullptr) {
        xd674f84f = ptr_xd674f84f->value;
    }

    auto ptr_xf4cd79d5 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4107106773u);
    if(ptr_xf4cd79d5 != nullptr) {
        xf4cd79d5 = ptr_xf4cd79d5->value;
    }

    auto ptr_x9f1d2b34 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2669488948u);
    if(ptr_x9f1d2b34 != nullptr) {
        x9f1d2b34 = ptr_x9f1d2b34->value;
    }

    auto ptr_x56f2ddad = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1458757037u);
    if(ptr_x56f2ddad != nullptr) {
        x56f2ddad = yordle::data::meta::deserialize<yordle::data::meta::x55cb8ac2>(ptr_x56f2ddad, 1439402690u);
    }

    auto ptr_xa12187a0 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2703329184u);
    if(ptr_xa12187a0 != nullptr) {
        xa12187a0 = ptr_xa12187a0->value;
    }

    auto ptr_x3dec71de = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1038905822u);
    if(ptr_x3dec71de != nullptr) {
        x3dec71de = yordle::data::meta::deserialize<yordle::data::meta::x486fc5cf>(ptr_x3dec71de, 1215284687u);
    }

    auto ptr_x2781ed6b = prop->cast_prop<yordle::data::prop::map_prop>(662826347u);
    if(ptr_x2781ed6b != nullptr) {
        for(const auto &set_x2781ed6b_pair : ptr_x2781ed6b->value) {
            auto ptr_x2781ed6b_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_x2781ed6b_pair.first);
            auto ptr_x2781ed6b_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x2781ed6b_pair.second);
            if(ptr_x2781ed6b_key != nullptr && ptr_x2781ed6b_value != nullptr) {
                x2781ed6b.emplace(ptr_x2781ed6b_key->value, yordle::data::meta::deserialize<yordle::data::meta::x2781ed6b>(ptr_x2781ed6b_value, 662826347u));
            }
        }
    }
}
