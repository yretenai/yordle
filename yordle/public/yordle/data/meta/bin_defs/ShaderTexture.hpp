/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ShaderTexture
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ShaderTexture : public bin_class {
        explicit ShaderTexture(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 835838499u;
        }

        std::string name {};
        std::string defaultTexturePath {};
    };
}
#define YORDLE_META_DEF_ShaderTexture
#endif