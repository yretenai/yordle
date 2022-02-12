/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/BaseElementData.hpp>

#include <yordle/data/meta/bin_defs/AnchorBase.hpp>
#include <yordle/data/meta/bin_defs/x231dd1a2.hpp>
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

yordle::data::meta::BaseElementData::BaseElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x231dd1a2(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mEnabled = prop->cast_prop<yordle::data::prop::bool_prop>(1239023785u);
    if(ptr_mEnabled != nullptr) {
        mEnabled = ptr_mEnabled->value;
    }

    auto ptr_mKeepMaxScale = prop->cast_prop<yordle::data::prop::bool_prop>(2320718105u);
    if(ptr_mKeepMaxScale != nullptr) {
        mKeepMaxScale = ptr_mKeepMaxScale->value;
    }

    auto ptr_mFullscreen = prop->cast_prop<yordle::data::prop::bool_prop>(3304332665u);
    if(ptr_mFullscreen != nullptr) {
        mFullscreen = ptr_mFullscreen->value;
    }

    auto ptr_mNoPixelSnappingX = prop->cast_prop<yordle::data::prop::bool_prop>(3390357923u);
    if(ptr_mNoPixelSnappingX != nullptr) {
        mNoPixelSnappingX = ptr_mNoPixelSnappingX->value;
    }

    auto ptr_mNoPixelSnappingY = prop->cast_prop<yordle::data::prop::bool_prop>(3373580304u);
    if(ptr_mNoPixelSnappingY != nullptr) {
        mNoPixelSnappingY = ptr_mNoPixelSnappingY->value;
    }

    auto ptr_x258bae9a = prop->cast_prop<yordle::data::prop::bool_prop>(629911194u);
    if(ptr_x258bae9a != nullptr) {
        x258bae9a = ptr_x258bae9a->value;
    }

    auto ptr_mUseRectSourceResolutionAsFloor = prop->cast_prop<yordle::data::prop::bool_prop>(2429594800u);
    if(ptr_mUseRectSourceResolutionAsFloor != nullptr) {
        mUseRectSourceResolutionAsFloor = ptr_mUseRectSourceResolutionAsFloor->value;
    }

    auto ptr_StickyDrag = prop->cast_prop<yordle::data::prop::bool_prop>(1502845044u);
    if(ptr_StickyDrag != nullptr) {
        StickyDrag = ptr_StickyDrag->value;
    }

    auto ptr_mDraggable = prop->cast_prop<yordle::data::prop::uint32_prop>(1043285811u);
    if(ptr_mDraggable != nullptr) {
        mDraggable = ptr_mDraggable->value;
    }

    auto ptr_mLayer = prop->cast_prop<yordle::data::prop::uint32_prop>(2191912109u);
    if(ptr_mLayer != nullptr) {
        mLayer = ptr_mLayer->value;
    }

    auto ptr_mRectSourceResolutionWidth = prop->cast_prop<yordle::data::prop::uint16_prop>(757395387u);
    if(ptr_mRectSourceResolutionWidth != nullptr) {
        mRectSourceResolutionWidth = ptr_mRectSourceResolutionWidth->value;
    }

    auto ptr_mRectSourceResolutionHeight = prop->cast_prop<yordle::data::prop::uint16_prop>(881508694u);
    if(ptr_mRectSourceResolutionHeight != nullptr) {
        mRectSourceResolutionHeight = ptr_mRectSourceResolutionHeight->value;
    }

    auto ptr_mAnchors = prop->cast_prop<yordle::data::prop::structure_prop>(3822917598u);
    if(ptr_mAnchors != nullptr) {
        mAnchors = yordle::data::meta::deserialize<yordle::data::meta::AnchorBase>(ptr_mAnchors, 2131369601u);
    }

    auto ptr_mRect = prop->cast_prop<yordle::data::prop::quaternion_prop>(2414918774u);
    if(ptr_mRect != nullptr) {
        mRect = ptr_mRect->value;
    }

    auto ptr_mHitTestPolygon = prop->cast_prop<yordle::data::prop::set_prop>(2407827681u);
    if(ptr_mHitTestPolygon != nullptr) {
        for(const auto &set_mHitTestPolygon_entry : ptr_mHitTestPolygon->value) {
            auto ptr_mHitTestPolygon_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::point_prop>(set_mHitTestPolygon_entry);
            if(ptr_mHitTestPolygon_entry != nullptr) {
                mHitTestPolygon.emplace_back(ptr_mHitTestPolygon_entry->value);
            }
        }
    }
}
