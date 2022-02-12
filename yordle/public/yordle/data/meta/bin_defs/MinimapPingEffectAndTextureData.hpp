/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MinimapPingEffectAndTextureData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/MinimapPingEffectDefinition.hpp>
#include <yordle/data/meta/bin_defs/TextureAndColorData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MinimapPingEffectDefinition
    struct MinimapPingEffectDefinition;
#endif

#ifndef YORDLE_META_DEF_TextureAndColorData
    struct TextureAndColorData;
#endif
    struct YORDLE_EXPORT MinimapPingEffectAndTextureData : public bin_class {
        explicit MinimapPingEffectAndTextureData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2136503545u;
        }

        bool mEnabled = true;
        std::shared_ptr<yordle::data::meta::MinimapPingEffectDefinition> mEffect {};
        std::shared_ptr<yordle::data::meta::TextureAndColorData> mDefault {};
        std::shared_ptr<yordle::data::meta::TextureAndColorData> mOrder {};
        std::shared_ptr<yordle::data::meta::TextureAndColorData> mChaos {};
    };
}
#define YORDLE_META_DEF_MinimapPingEffectAndTextureData
#endif
