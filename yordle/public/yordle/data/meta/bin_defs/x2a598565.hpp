/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2a598565
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/x24fc182b.hpp>
#include <yordle/data/meta/bin_defs/x64e7b9e1.hpp>
#include <yordle/data/meta/bin_defs/x2373fc78.hpp>
#include <yordle/data/meta/bin_defs/x8f85e859.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x24fc182b
    struct x24fc182b;
#endif

#ifndef YORDLE_META_DEF_x64e7b9e1
    struct x64e7b9e1;
#endif

#ifndef YORDLE_META_DEF_x2373fc78
    struct x2373fc78;
#endif
    struct YORDLE_EXPORT x2a598565 : public x8f85e859 {
        explicit x2a598565(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 710509925u || x8f85e859::is_type(type);
        }

        float xe9e6d319 = 0.0f;
        std::string x18babeb3 {};
        std::string x31be8604 {};
        float xc7b9055a = 0.0f;
        std::string xfc596ba6 {};
        std::string x7ea3e8d8 {};
        std::string x40ee28f8 {};
        std::string x7c67d7e9 {};
        std::string x721f9044 {};
        yordle::data::meta::bin_fnv_hash animationName = 0u;
        yordle::data::meta::bin_fnv_hash x25888758 = 0u;
        float x79f64609 = 10.0f;
        float xdb1cc90a = 10000.0f;
        std::vector<std::shared_ptr<yordle::data::meta::x24fc182b>> x567421af {};
        std::vector<std::shared_ptr<yordle::data::meta::x64e7b9e1>> x20cd725d {};
        std::vector<std::shared_ptr<yordle::data::meta::x2373fc78>> x9fa5a56c {};
    };
}
#define YORDLE_META_DEF_x2a598565
#endif
