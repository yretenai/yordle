/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xbbb1fd0a
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xbbb1fd0a : public bin_class {
        explicit xbbb1fd0a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3149004042u;
        }

        float x52a7b84e = 5.0;
        float x9e4677fa = 2700.0;
        uint8_t x77414c = 100u;
    };
}
#define YORDLE_META_DEF_xbbb1fd0a
#endif
