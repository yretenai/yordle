/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_GDSMapObjectBannerInfo
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/EsportsBannerData.hpp>
#include <yordle/data/meta/bin_defs/GDSMapObjectExtraInfo.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_EsportsBannerData
    struct EsportsBannerData;
#endif
    struct YORDLE_EXPORT GDSMapObjectBannerInfo : public GDSMapObjectExtraInfo {
        explicit GDSMapObjectBannerInfo(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1777761610u || GDSMapObjectExtraInfo::is_type(type);
        }

        yordle::data::meta::bin_ref<yordle::data::meta::EsportsBannerData> BannerData { 761042637 };
    };
}
#define YORDLE_META_DEF_GDSMapObjectBannerInfo
#endif
