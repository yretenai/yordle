//
// Created by Lilith on 2021-06-19.
//

#pragma once

#include <map>
#include <memory>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT bin_class {
        explicit bin_class(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) {
            if (prop == nullptr) {
                return;
            }

            _class_hash = prop->class_hash;
        }

        uint32_t _class_hash = 0;

        virtual bool is_type(uint32_t type) {
            return false;
        }
    };
} // namespace yordle::data::meta
