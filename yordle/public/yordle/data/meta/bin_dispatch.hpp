//
// Created by Lilith on 2021-06-19.
//

#pragma once

#include <functional>
#include <map>
#include <memory>
#include <type_traits>

#include <yordle/data/meta/bin_class.hpp>

namespace yordle::data::meta {
    extern std::map<uint32_t, std::function<std::shared_ptr<yordle::data::meta::bin_class>(std::shared_ptr<yordle::data::prop::structure_prop> &)>> dispatch_table;

    template<typename T>
    typename std::enable_if<std::is_base_of<yordle::data::meta::bin_class, T>::value, std::shared_ptr<T>>::type deserialize(std::shared_ptr<yordle::data::prop::structure_prop> &prop, uint32_t target_type) {
        if (prop == nullptr || prop->class_hash == 0) {
            return nullptr;
        }

        if (!dispatch_table.contains(prop->class_hash)) {
            return nullptr;
        }

        auto decoded = dispatch_table[prop->class_hash](prop);
        if (!decoded->is_type(target_type)) {
            return nullptr;
        }
        return decoded;
    }
} // namespace yordle::data::meta
