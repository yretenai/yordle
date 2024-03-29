/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TftItemData.hpp>

#include <yordle/data/meta/bin_defs/TftItemData.hpp>
#include <yordle/data/meta/bin_defs/TftItemComposition.hpp>
#include <yordle/data/meta/bin_defs/TftEffectAmount.hpp>
#include <yordle/data/meta/bin_defs/TftTraitData.hpp>
#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

yordle::data::meta::TftItemData::TftItemData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Mid = prop->cast_prop<yordle::data::prop::int32_prop>(3280944101u);
    if(ptr_Mid != nullptr) {
        Mid = ptr_Mid->value;
    }

    auto ptr_mName = prop->cast_prop<yordle::data::prop::string_prop>(435142619u);
    if(ptr_mName != nullptr) {
        mName = ptr_mName->value;
    }

    auto ptr_mBuffName = prop->cast_prop<yordle::data::prop::string_prop>(38338834u);
    if(ptr_mBuffName != nullptr) {
        mBuffName = ptr_mBuffName->value;
    }

    auto ptr_xe75b0636 = prop->cast_prop<yordle::data::prop::uint8_prop>(3881502262u);
    if(ptr_xe75b0636 != nullptr) {
        xe75b0636 = ptr_xe75b0636->value;
    }

    auto ptr_mComposition = prop->cast_prop<yordle::data::prop::set_prop>(2340665994u);
    if(ptr_mComposition != nullptr) {
        for(const auto &set_mComposition_entry : ptr_mComposition->value) {
            auto ptr_mComposition_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mComposition_entry);
            if(ptr_mComposition_entry != nullptr) {
                mComposition.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TftItemData>(3515269914u, ptr_mComposition_entry->value));
            }
        }
    }

    auto ptr_xa3ac84d8 = prop->cast_prop<yordle::data::prop::set_prop>(2745992408u);
    if(ptr_xa3ac84d8 != nullptr) {
        for(const auto &set_xa3ac84d8_entry : ptr_xa3ac84d8->value) {
            auto ptr_xa3ac84d8_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xa3ac84d8_entry);
            if(ptr_xa3ac84d8_entry != nullptr) {
                xa3ac84d8.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TftItemComposition>(ptr_xa3ac84d8_entry, 1707263328u));
            }
        }
    }

    auto ptr_xe98b297e = prop->cast_prop<yordle::data::prop::set_prop>(3918211454u);
    if(ptr_xe98b297e != nullptr) {
        for(const auto &set_xe98b297e_entry : ptr_xe98b297e->value) {
            auto ptr_xe98b297e_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_xe98b297e_entry);
            if(ptr_xe98b297e_entry != nullptr) {
                xe98b297e.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TftItemData>(3515269914u, ptr_xe98b297e_entry->value));
            }
        }
    }

    auto ptr_effectAmounts = prop->cast_prop<yordle::data::prop::set_prop>(3242028337u);
    if(ptr_effectAmounts != nullptr) {
        for(const auto &set_effectAmounts_entry : ptr_effectAmounts->value) {
            auto ptr_effectAmounts_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_effectAmounts_entry);
            if(ptr_effectAmounts_entry != nullptr) {
                effectAmounts.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TftEffectAmount>(ptr_effectAmounts_entry, 1660895988u));
            }
        }
    }

    auto ptr_x6752c795 = prop->cast_prop<yordle::data::prop::set_prop>(1733478293u);
    if(ptr_x6752c795 != nullptr) {
        for(const auto &set_x6752c795_entry : ptr_x6752c795->value) {
            auto ptr_x6752c795_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_x6752c795_entry);
            if(ptr_x6752c795_entry != nullptr) {
                x6752c795.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TftTraitData>(1871118919u, ptr_x6752c795_entry->value));
            }
        }
    }

    auto ptr_x9071fd36 = prop->cast_prop<yordle::data::prop::set_prop>(2423389494u);
    if(ptr_x9071fd36 != nullptr) {
        for(const auto &set_x9071fd36_entry : ptr_x9071fd36->value) {
            auto ptr_x9071fd36_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_x9071fd36_entry);
            if(ptr_x9071fd36_entry != nullptr) {
                x9071fd36.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TftTraitData>(1871118919u, ptr_x9071fd36_entry->value));
            }
        }
    }

    auto ptr_mIsUnique = prop->cast_prop<yordle::data::prop::bool_prop>(2509677447u);
    if(ptr_mIsUnique != nullptr) {
        mIsUnique = ptr_mIsUnique->value;
    }

    auto ptr_ItemTags = prop->cast_prop<yordle::data::prop::set_prop>(2759486175u);
    if(ptr_ItemTags != nullptr) {
        for(const auto &set_ItemTags_entry : ptr_ItemTags->value) {
            auto ptr_ItemTags_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_ItemTags_entry);
            if(ptr_ItemTags_entry != nullptr) {
                ItemTags.emplace_back(ptr_ItemTags_entry->value);
            }
        }
    }

    auto ptr_mDisplayNameTra = prop->cast_prop<yordle::data::prop::string_prop>(3272883558u);
    if(ptr_mDisplayNameTra != nullptr) {
        mDisplayNameTra = ptr_mDisplayNameTra->value;
    }

    auto ptr_mDescriptionNameTra = prop->cast_prop<yordle::data::prop::string_prop>(1985943770u);
    if(ptr_mDescriptionNameTra != nullptr) {
        mDescriptionNameTra = ptr_mDescriptionNameTra->value;
    }

    auto ptr_xfaf78155 = prop->cast_prop<yordle::data::prop::unordered_set_prop>(4210524501u);
    if(ptr_xfaf78155 != nullptr) {
        for(const auto &set_xfaf78155_entry : ptr_xfaf78155->value) {
            auto ptr_xfaf78155_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xfaf78155_entry);
            if(ptr_xfaf78155_entry != nullptr) {
                xfaf78155.emplace_back(ptr_xfaf78155_entry->value);
            }
        }
    }

    auto ptr_mIconPath = prop->cast_prop<yordle::data::prop::string_prop>(2347641202u);
    if(ptr_mIconPath != nullptr) {
        mIconPath = ptr_mIconPath->value;
    }

    auto ptr_xd434d358 = prop->cast_prop<yordle::data::prop::string_prop>(3560231768u);
    if(ptr_xd434d358 != nullptr) {
        xd434d358 = ptr_xd434d358->value;
    }

    auto ptr_mColor = prop->cast_prop<yordle::data::prop::optional_prop>(1399972751u);
    if(ptr_mColor != nullptr) {
        auto ptr_mColor_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::color_prop>(ptr_mColor->value);
        if (ptr_mColor_opt != nullptr) {
            mColor = ptr_mColor_opt->value;
        }
    }

    auto ptr_x91d75dff = prop->cast_prop<yordle::data::prop::point_prop>(2446810623u);
    if(ptr_x91d75dff != nullptr) {
        x91d75dff = ptr_x91d75dff->value;
    }

    auto ptr_mVfxSystem = prop->cast_prop<yordle::data::prop::reference_prop>(992664269u);
    if(ptr_mVfxSystem != nullptr) {
        mVfxSystem = yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData>(1171098015u, ptr_mVfxSystem->value);
    }

    auto ptr_x6d8fceed = prop->cast_prop<yordle::data::prop::int32_prop>(1838141165u);
    if(ptr_x6d8fceed != nullptr) {
        x6d8fceed = ptr_x6d8fceed->value;
    }
}
