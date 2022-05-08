/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CelebrationViewController
#pragma once

#include <memory>
#include <map>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_defs/xd845a4ab.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xd845a4ab
    struct xd845a4ab;
#endif
    struct YORDLE_EXPORT CelebrationViewController : public ViewController {
        explicit CelebrationViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2069136914u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        std::map<uint32_t, yordle::data::meta::bin_fnv_hash> xcb825566 {};
        std::map<uint32_t, yordle::data::meta::bin_fnv_hash> xd113c306 {};
        yordle::data::meta::bin_fnv_hash x96367645 = 0u;
        yordle::data::meta::bin_fnv_hash x8a86a07b = 0u;
        yordle::data::meta::bin_fnv_hash xbbe2bd79 = 0u;
        yordle::data::meta::bin_fnv_hash x35baf77e = 0u;
        yordle::data::meta::bin_fnv_hash x9cb45f01 = 0u;
        yordle::data::meta::bin_fnv_hash xc9ea2200 = 0u;
        yordle::data::meta::bin_fnv_hash xd6aa82b4 = 0u;
        yordle::data::meta::bin_fnv_hash x7dd4e76 = 0u;
        yordle::data::meta::bin_fnv_hash xe931d410 = 0u;
        yordle::data::meta::bin_fnv_hash xd27028bb = 0u;
        yordle::data::meta::bin_fnv_hash x89590d18 = 0u;
        yordle::data::meta::bin_fnv_hash x2a260f84 = 0u;
        yordle::data::meta::bin_fnv_hash x271fb40d = 0u;
        yordle::data::meta::bin_fnv_hash x5f4b2951 = 0u;
        std::map<uint32_t, yordle::data::meta::bin_fnv_hash> x49ba713c {};
        float x615c3c29 = 0.0;
        std::string x4fe75004 {};
        std::map<uint32_t, std::shared_ptr<yordle::data::meta::xd845a4ab>> x6506aa85 {};
    };
}
#define YORDLE_META_DEF_CelebrationViewController
#endif
