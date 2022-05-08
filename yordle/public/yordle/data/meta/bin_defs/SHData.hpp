/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SHData
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT SHData : public bin_class {
        explicit SHData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1813728254u;
        }

        std::array<std::array<float, 3>, 9> bandData { std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }), std::array<float, 3>({ 0.0f, 0.0f, 0.0f }) };
    };
}
#define YORDLE_META_DEF_SHData
#endif
