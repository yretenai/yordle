#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_dispatch.hpp>
#include <yordle/data/property_bin.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    using bin_fnv_hash = uint32_t;
    using bin_xx_hash  = uint64_t;

    template<typename T>
    struct YORDLE_EXPORT bin_ref {
        explicit bin_ref() = default;
        explicit bin_ref(uint32_t expected_type) : type(expected_type) {
        }
        explicit bin_ref(uint32_t expected_type, uint32_t object_key) : type(expected_type), key(object_key) {
        }
        ~bin_ref() = default;

        uint32_t key  = 0;
        uint32_t type = 0;

        template<typename U = T>
        typename std::enable_if<std::is_base_of<yordle::data::meta::bin_class, U>::value, std::shared_ptr<T>>::type get(const yordle::data::property_bin &bin) {
            if (key == 0 || !bin.objects.contains(key)) {
                return nullptr;
            }

            return yordle::data::meta::deserialize<T>(bin.objects.at(key), type);
        }
    };
} // namespace yordle::data::meta
