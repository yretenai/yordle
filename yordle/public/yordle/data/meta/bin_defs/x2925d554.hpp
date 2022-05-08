/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2925d554
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xfa29db11.hpp>
#include <yordle/data/meta/bin_defs/xff5d83bd.hpp>
#include <yordle/data/meta/bin_defs/healthBarData.hpp>
#include <yordle/data/meta/bin_defs/x1bca1a5e.hpp>
#include <yordle/data/meta/bin_defs/xd63809d8.hpp>
#include <yordle/data/meta/bin_defs/x20664115.hpp>
#include <yordle/data/meta/bin_defs/xf2906c54.hpp>
#include <yordle/data/meta/bin_defs/x32c5fd80.hpp>
#include <yordle/data/meta/bin_defs/x696a421b.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xfa29db11
    struct xfa29db11;
#endif

#ifndef YORDLE_META_DEF_xff5d83bd
    struct xff5d83bd;
#endif

#ifndef YORDLE_META_DEF_healthBarData
    struct healthBarData;
#endif

#ifndef YORDLE_META_DEF_x1bca1a5e
    struct x1bca1a5e;
#endif

#ifndef YORDLE_META_DEF_xd63809d8
    struct xd63809d8;
#endif

#ifndef YORDLE_META_DEF_x20664115
    struct x20664115;
#endif

#ifndef YORDLE_META_DEF_xf2906c54
    struct xf2906c54;
#endif

#ifndef YORDLE_META_DEF_x32c5fd80
    struct x32c5fd80;
#endif

#ifndef YORDLE_META_DEF_x696a421b
    struct x696a421b;
#endif
    struct YORDLE_EXPORT x2925d554 : public bin_class {
        explicit x2925d554(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 690345300u;
        }

        yordle::data::meta::bin_fnv_hash Group = 0u;
        std::shared_ptr<yordle::data::meta::xfa29db11> Portrait {};
        yordle::data::meta::bin_fnv_hash HitRegion = 0u;
        std::shared_ptr<yordle::data::meta::xff5d83bd> Level {};
        std::shared_ptr<yordle::data::meta::healthBarData> x186be64c {};
        std::shared_ptr<yordle::data::meta::x1bca1a5e> x6af15179 {};
        std::shared_ptr<yordle::data::meta::xd63809d8> x118ddd7c {};
        std::shared_ptr<yordle::data::meta::x20664115> x23e0221e {};
        std::shared_ptr<yordle::data::meta::xf2906c54> x1bd647e2 {};
        std::shared_ptr<yordle::data::meta::x32c5fd80> xe6e3afce {};
        std::shared_ptr<yordle::data::meta::x696a421b> xe76d6f1b {};
        yordle::data::meta::bin_fnv_hash xe4fe1a24 = 0u;
        yordle::data::meta::bin_fnv_hash x594995e5 = 0u;
    };
}
#define YORDLE_META_DEF_x2925d554
#endif
