/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa0ce6603
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/xc35fd9a.hpp>
#include <yordle/data/meta/bin_defs/TftMapCharacterList.hpp>
#include <yordle/data/meta/bin_defs/xd6a99b5b.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xc35fd9a
    struct xc35fd9a;
#endif

#ifndef YORDLE_META_DEF_TftMapCharacterList
    struct TftMapCharacterList;
#endif

#ifndef YORDLE_META_DEF_xd6a99b5b
    struct xd6a99b5b;
#endif
    struct YORDLE_EXPORT xa0ce6603 : public bin_class {
        explicit xa0ce6603(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2697881091u;
        }

        std::string x936ed1dd {};
        std::vector<std::shared_ptr<yordle::data::meta::xc35fd9a>> itemLists {};
        std::vector<std::shared_ptr<yordle::data::meta::TftMapCharacterList>> characterLists {};
        std::vector<std::shared_ptr<yordle::data::meta::xd6a99b5b>> xf74504c0 {};
    };
}
#define YORDLE_META_DEF_xa0ce6603
#endif
