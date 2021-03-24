//
// Created by Lilith on 2021-03-23.
//

#pragma once

#include <nlohmann/json.hpp>
#include <stdexcept>
#include <utility>

#ifndef NLOHMANN_OPT_HELPER
#define NLOHMANN_OPT_HELPER
namespace nlohmann {
    template<typename T>
    struct [[maybe_unused]] adl_serializer<std::shared_ptr<T>> {
        [[maybe_unused]] static void to_json(json &j, const std::shared_ptr<T> &opt) {
            if (!opt) j = nullptr;
            else
                j = *opt;
        }

        [[maybe_unused]] static std::shared_ptr<T> from_json(const json &j) {
            if (j.is_null()) return std::unique_ptr<T>();
            else
                return std::unique_ptr<T>(new T(j.get<T>()));
        }
    };
} // namespace nlohmann
#endif // NLOHMANN_OPT_HELPER

namespace yordle::sieve::models {
    using nlohmann::json;

    template<typename T>
    [[maybe_unused]] inline std::shared_ptr<T> get_optional(const json &j, const char *property) {
        if (j.find(property) != j.end()) {
            return j.at(property).get<std::shared_ptr<T>>();
        }
        return nullptr;
    }
} // namespace yordle::sieve::models
