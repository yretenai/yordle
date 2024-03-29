/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SponsoredBanner
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/EsportsBannerData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_EsportsBannerData
    struct EsportsBannerData;
#endif
    struct YORDLE_EXPORT SponsoredBanner : public bin_class {
        explicit SponsoredBanner(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 6610142u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::EsportsBannerData> Banner { 761042637 };
        yordle::data::meta::bin_xx_hash SponsorTexturePath = 0u;
    };
}
#define YORDLE_META_DEF_SponsoredBanner
#endif
