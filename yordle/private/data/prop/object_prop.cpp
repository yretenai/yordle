//
// Created by Lilith on 2021-06-08.
//

#include <yordle/data/prop/object_prop.hpp>

namespace yordle::data::prop {
    object_prop::object_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t key_hash, uint32_t name_hash) : empty_constructed_prop(buffer, ptr, key_hash, name_hash) {
    }
} // namespace yordle::data::prop
