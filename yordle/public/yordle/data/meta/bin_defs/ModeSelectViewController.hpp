/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ModeSelectViewController
#pragma once

#include <memory>
#include <vector>
#include <string>

#include <yordle/data/meta/bin_defs/QueueDisplayData.hpp>
#include <yordle/data/meta/bin_defs/x61767839.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_QueueDisplayData
    struct QueueDisplayData;
#endif

#ifndef YORDLE_META_DEF_x61767839
    struct x61767839;
#endif
    struct YORDLE_EXPORT ModeSelectViewController : public ViewController {
        explicit ModeSelectViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2036227663u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xce6bd23b = 0u;
        yordle::data::meta::bin_fnv_hash x7125e498 = 0u;
        yordle::data::meta::bin_fnv_hash Scene = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::QueueDisplayData>> QueueDisplayData {};
        std::shared_ptr<yordle::data::meta::x61767839> x61767839 {};
        std::string SoundOnActivate {};
        std::string SoundOnDeActivate {};
        std::vector<yordle::data::meta::bin_fnv_hash> x71378d8b {};
    };
}
#define YORDLE_META_DEF_ModeSelectViewController
#endif
