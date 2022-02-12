/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FontLocaleResolutions
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/FontResolution.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_FontResolution
    struct FontResolution;
#endif
    struct YORDLE_EXPORT FontLocaleResolutions : public bin_class {
        explicit FontLocaleResolutions(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3919875225u;
        }

        std::string localeName = "en_us";
        std::vector<std::shared_ptr<yordle::data::meta::FontResolution>> resolutions {};
    };
}
#define YORDLE_META_DEF_FontLocaleResolutions
#endif
