/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CensoredImage
#pragma once

#include <memory>
#include <string>
#include <map>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT CensoredImage : public bin_class {
        explicit CensoredImage(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3496109055u;
        }

        std::string image {};
        std::map<yordle::data::meta::bin_fnv_hash, std::string> UncensoredImages {};
    };
}
#define YORDLE_META_DEF_CensoredImage
#endif