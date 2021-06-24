//
// Created by Lilith on 2021-06-19.
//

#pragma once

#include <functional>
#include <map>
#include <memory>
#include <type_traits>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    using prop_arg = const std::shared_ptr<yordle::data::prop::structure_prop> &;
    using prop_ret = std::shared_ptr<yordle::data::meta::bin_class>;

    class YORDLE_EXPORT bin_dispatch {
    public:
        static std::map<uint32_t, std::function<prop_ret(prop_arg)>> table;

        static void load_table();
    };

    template<typename T>
    typename std::enable_if<std::is_base_of<yordle::data::meta::bin_class, T>::value, std::shared_ptr<T>>::type deserialize(const std::shared_ptr<yordle::data::prop::structure_prop> &prop, uint32_t target_type = 0) {
        if (prop == nullptr || prop->class_hash == 0) {
            return nullptr;
        }

        if (!bin_dispatch::table.contains(prop->class_hash)) {
            return nullptr;
        }

        auto decoded = std::reinterpret_pointer_cast<T>(bin_dispatch::table.at(prop->class_hash)(prop));
        if (target_type == 0) {
            return decoded;
        }

        if (!decoded->is_type(target_type)) {
            return nullptr;
        }
        return decoded;
    }
} // namespace yordle::data::meta
