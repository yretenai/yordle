/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/PostGameViewController.hpp>

#include <yordle/data/meta/bin_defs/xa89fd289.hpp>
#include <yordle/data/meta/bin_defs/x9a619bbc.hpp>
#include <yordle/data/meta/bin_defs/xebd18932.hpp>
#include <yordle/data/meta/bin_defs/x7a2a7a0d.hpp>
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

yordle::data::meta::PostGameViewController::PostGameViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_x856af76d = prop->cast_prop<yordle::data::prop::set_prop>(2238379885u);
    if(ptr_x856af76d != nullptr) {
        auto index_x856af76d = 0;
        for(const auto &set_x856af76d_entry : ptr_x856af76d->value) {
            auto ptr_x856af76d_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x856af76d_entry);
            if(ptr_x856af76d_entry != nullptr) {
                x856af76d[index_x856af76d] = ptr_x856af76d_entry->value;
            }
            index_x856af76d++;
        }
    }

    auto ptr_x36cd05cf = prop->cast_prop<yordle::data::prop::map_prop>(919406031u);
    if(ptr_x36cd05cf != nullptr) {
        for(const auto &set_x36cd05cf_pair : ptr_x36cd05cf->value) {
            auto ptr_x36cd05cf_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_x36cd05cf_pair.first);
            auto ptr_x36cd05cf_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x36cd05cf_pair.second);
            if(ptr_x36cd05cf_key != nullptr && ptr_x36cd05cf_value != nullptr) {
                x36cd05cf.emplace(ptr_x36cd05cf_key->value, ptr_x36cd05cf_value->value);
            }
        }
    }

    auto ptr_RankText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2661607648u);
    if(ptr_RankText != nullptr) {
        RankText = ptr_RankText->value;
    }

    auto ptr_CurrentExpText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(300223222u);
    if(ptr_CurrentExpText != nullptr) {
        CurrentExpText = ptr_CurrentExpText->value;
    }

    auto ptr_GainedExpText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(853760197u);
    if(ptr_GainedExpText != nullptr) {
        GainedExpText = ptr_GainedExpText->value;
    }

    auto ptr_LostExpText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2253137033u);
    if(ptr_LostExpText != nullptr) {
        LostExpText = ptr_LostExpText->value;
    }

    auto ptr_PlacementTextRight = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1297259667u);
    if(ptr_PlacementTextRight != nullptr) {
        PlacementTextRight = ptr_PlacementTextRight->value;
    }

    auto ptr_ProvisionalTextRight = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2820217180u);
    if(ptr_ProvisionalTextRight != nullptr) {
        ProvisionalTextRight = ptr_ProvisionalTextRight->value;
    }

    auto ptr_BackgroundTexture = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4243122060u);
    if(ptr_BackgroundTexture != nullptr) {
        BackgroundTexture = ptr_BackgroundTexture->value;
    }

    auto ptr_CurrentPlayerHighlight = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2016279161u);
    if(ptr_CurrentPlayerHighlight != nullptr) {
        CurrentPlayerHighlight = ptr_CurrentPlayerHighlight->value;
    }

    auto ptr_xb2aff146 = prop->cast_prop<yordle::data::prop::set_prop>(2997875014u);
    if(ptr_xb2aff146 != nullptr) {
        auto index_xb2aff146 = 0;
        for(const auto &set_xb2aff146_entry : ptr_xb2aff146->value) {
            auto ptr_xb2aff146_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xb2aff146_entry);
            if(ptr_xb2aff146_entry != nullptr) {
                xb2aff146[index_xb2aff146] = ptr_xb2aff146_entry->value;
            }
            index_xb2aff146++;
        }
    }

    auto ptr_x5cf56914 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1559587092u);
    if(ptr_x5cf56914 != nullptr) {
        x5cf56914 = ptr_x5cf56914->value;
    }

    auto ptr_xe09650c0 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3767947456u);
    if(ptr_xe09650c0 != nullptr) {
        xe09650c0 = ptr_xe09650c0->value;
    }

    auto ptr_GainedRatingText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(529274973u);
    if(ptr_GainedRatingText != nullptr) {
        GainedRatingText = ptr_GainedRatingText->value;
    }

    auto ptr_LostRatingText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2295388633u);
    if(ptr_LostRatingText != nullptr) {
        LostRatingText = ptr_LostRatingText->value;
    }

    auto ptr_CurrentRatingText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3674095940u);
    if(ptr_CurrentRatingText != nullptr) {
        CurrentRatingText = ptr_CurrentRatingText->value;
    }

    auto ptr_x8af6ed76 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2331438454u);
    if(ptr_x8af6ed76 != nullptr) {
        x8af6ed76 = ptr_x8af6ed76->value;
    }

    auto ptr_x8ecd9248 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2395837000u);
    if(ptr_x8ecd9248 != nullptr) {
        x8ecd9248 = ptr_x8ecd9248->value;
    }

    auto ptr_x6506aa85 = prop->cast_prop<yordle::data::prop::map_prop>(1694935685u);
    if(ptr_x6506aa85 != nullptr) {
        for(const auto &set_x6506aa85_pair : ptr_x6506aa85->value) {
            auto ptr_x6506aa85_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_x6506aa85_pair.first);
            auto ptr_x6506aa85_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x6506aa85_pair.second);
            if(ptr_x6506aa85_key != nullptr && ptr_x6506aa85_value != nullptr) {
                x6506aa85.emplace(ptr_x6506aa85_key->value, yordle::data::meta::deserialize<yordle::data::meta::xa89fd289>(ptr_x6506aa85_value, 2829046409u));
            }
        }
    }

    auto ptr_x9a619bbc = prop->cast_prop<yordle::data::prop::structure_prop>(2590088124u);
    if(ptr_x9a619bbc != nullptr) {
        x9a619bbc = yordle::data::meta::deserialize<yordle::data::meta::x9a619bbc>(ptr_x9a619bbc, 2590088124u);
    }

    auto ptr_x5d5a384d = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1566193741u);
    if(ptr_x5d5a384d != nullptr) {
        x5d5a384d = ptr_x5d5a384d->value;
    }

    auto ptr_x4893610a = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1217618186u);
    if(ptr_x4893610a != nullptr) {
        x4893610a = yordle::data::meta::deserialize<yordle::data::meta::xebd18932>(ptr_x4893610a, 3956377906u);
    }

    auto ptr_x9ac71105 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2596737285u);
    if(ptr_x9ac71105 != nullptr) {
        x9ac71105 = yordle::data::meta::deserialize<yordle::data::meta::x7a2a7a0d>(ptr_x9ac71105, 2049604109u);
    }
}
