/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxShape
#pragma once

#include <memory>
#include <vector>
#include <array>

#include <yordle/data/meta/bin_defs/ValueVector3.hpp>
#include <yordle/data/meta/bin_defs/ValueFloat.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ValueVector3
    struct ValueVector3;
#endif

#ifndef YORDLE_META_DEF_ValueFloat
    struct ValueFloat;
#endif
    struct YORDLE_EXPORT VfxShape : public bin_class {
        explicit VfxShape(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2010092456u;
        }

        std::shared_ptr<yordle::data::meta::ValueVector3> birthTranslation {};
        std::shared_ptr<yordle::data::meta::ValueVector3> emitOffset {};
        std::vector<std::shared_ptr<yordle::data::meta::ValueFloat>> emitRotationAngles {};
        std::vector<std::array<float, 3>> emitRotationAxes {};
    };
}
#define YORDLE_META_DEF_VfxShape
#endif
