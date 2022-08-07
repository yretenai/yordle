/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x9de83409
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x41c73a85.hpp>
#include <yordle/data/meta/bin_defs/xda27cf24.hpp>
#include <yordle/data/meta/bin_defs/x8314a414.hpp>
#include <yordle/data/meta/bin_defs/x7e14fec2.hpp>
#include <yordle/data/meta/bin_defs/x6e9187f0.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x41c73a85
    struct x41c73a85;
#endif

#ifndef YORDLE_META_DEF_xda27cf24
    struct xda27cf24;
#endif

#ifndef YORDLE_META_DEF_x8314a414
    struct x8314a414;
#endif

#ifndef YORDLE_META_DEF_x7e14fec2
    struct x7e14fec2;
#endif

#ifndef YORDLE_META_DEF_x6e9187f0
    struct x6e9187f0;
#endif
    struct YORDLE_EXPORT x9de83409 : public bin_class {
        explicit x9de83409(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2649240585u;
        }

        yordle::data::meta::bin_fnv_hash x363c399 = 0u;
        yordle::data::meta::bin_fnv_hash x136e53a1 = 0u;
        yordle::data::meta::bin_fnv_hash x528183cf = 0u;
        std::shared_ptr<yordle::data::meta::x41c73a85> xaf92c273 {};
        yordle::data::meta::bin_fnv_hash x5ee57c68 = 0u;
        yordle::data::meta::bin_fnv_hash x9384bafc = 0u;
        yordle::data::meta::bin_fnv_hash xbe44b13 = 0u;
        yordle::data::meta::bin_fnv_hash x2ffd049f = 0u;
        yordle::data::meta::bin_fnv_hash x193f7129 = 0u;
        yordle::data::meta::bin_fnv_hash xd8b42783 = 0u;
        yordle::data::meta::bin_fnv_hash xdc31784e = 0u;
        yordle::data::meta::bin_fnv_hash x2956de10 = 0u;
        yordle::data::meta::bin_fnv_hash x20c423da = 0u;
        yordle::data::meta::bin_fnv_hash xf5c5c2fc = 0u;
        std::shared_ptr<yordle::data::meta::xda27cf24> x9dfb5ab7 {};
        std::shared_ptr<yordle::data::meta::xda27cf24> x518f60ff {};
        std::shared_ptr<yordle::data::meta::x8314a414> x87c9dd2d {};
        std::shared_ptr<yordle::data::meta::x8314a414> x789d2ea5 {};
        std::shared_ptr<yordle::data::meta::x7e14fec2> xd2515da0 {};
        std::shared_ptr<yordle::data::meta::x6e9187f0> xe3e5bcc4 {};
        std::shared_ptr<yordle::data::meta::x6e9187f0> xa756b81c {};
    };
}
#define YORDLE_META_DEF_x9de83409
#endif