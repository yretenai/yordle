/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CameraConfig.hpp>

#include <yordle/data/meta/bin_defs/CameraTrapezoid.hpp>
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

yordle::data::meta::CameraConfig::CameraConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x671c887 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(108120199u);
    if(ptr_x671c887 != nullptr) {
        x671c887 = yordle::data::meta::deserialize<yordle::data::meta::CameraTrapezoid>(ptr_x671c887, 1207715590u);
    }

    auto ptr_mAccelerationTimeMouse = prop->cast_prop<yordle::data::prop::float32_prop>(3787365436u);
    if(ptr_mAccelerationTimeMouse != nullptr) {
        mAccelerationTimeMouse = ptr_mAccelerationTimeMouse->value;
    }

    auto ptr_mDecelerationTimeMouse = prop->cast_prop<yordle::data::prop::float32_prop>(3670730681u);
    if(ptr_mDecelerationTimeMouse != nullptr) {
        mDecelerationTimeMouse = ptr_mDecelerationTimeMouse->value;
    }

    auto ptr_mAccelerationTimeKeyboard = prop->cast_prop<yordle::data::prop::float32_prop>(4184833772u);
    if(ptr_mAccelerationTimeKeyboard != nullptr) {
        mAccelerationTimeKeyboard = ptr_mAccelerationTimeKeyboard->value;
    }

    auto ptr_mDecelerationTimeKeyboard = prop->cast_prop<yordle::data::prop::float32_prop>(3920233263u);
    if(ptr_mDecelerationTimeKeyboard != nullptr) {
        mDecelerationTimeKeyboard = ptr_mDecelerationTimeKeyboard->value;
    }

    auto ptr_mTopdownZoom = prop->cast_prop<yordle::data::prop::float32_prop>(1960749264u);
    if(ptr_mTopdownZoom != nullptr) {
        mTopdownZoom = ptr_mTopdownZoom->value;
    }

    auto ptr_mZoomMinDistance = prop->cast_prop<yordle::data::prop::float32_prop>(4200292578u);
    if(ptr_mZoomMinDistance != nullptr) {
        mZoomMinDistance = ptr_mZoomMinDistance->value;
    }

    auto ptr_mZoomMaxDistance = prop->cast_prop<yordle::data::prop::float32_prop>(4044280628u);
    if(ptr_mZoomMaxDistance != nullptr) {
        mZoomMaxDistance = ptr_mZoomMaxDistance->value;
    }

    auto ptr_mZoomEaseTime = prop->cast_prop<yordle::data::prop::float32_prop>(3525736568u);
    if(ptr_mZoomEaseTime != nullptr) {
        mZoomEaseTime = ptr_mZoomEaseTime->value;
    }

    auto ptr_mZoomMinSpeed = prop->cast_prop<yordle::data::prop::float32_prop>(2229099776u);
    if(ptr_mZoomMinSpeed != nullptr) {
        mZoomMinSpeed = ptr_mZoomMinSpeed->value;
    }

    auto ptr_mLockedCameraEasingDistance = prop->cast_prop<yordle::data::prop::float32_prop>(2013047739u);
    if(ptr_mLockedCameraEasingDistance != nullptr) {
        mLockedCameraEasingDistance = ptr_mLockedCameraEasingDistance->value;
    }

    auto ptr_mDragScale = prop->cast_prop<yordle::data::prop::float32_prop>(1386936032u);
    if(ptr_mDragScale != nullptr) {
        mDragScale = ptr_mDragScale->value;
    }

    auto ptr_mDragMomentumDecay = prop->cast_prop<yordle::data::prop::float32_prop>(360328530u);
    if(ptr_mDragMomentumDecay != nullptr) {
        mDragMomentumDecay = ptr_mDragMomentumDecay->value;
    }

    auto ptr_mDragMomentumRecencyWeight = prop->cast_prop<yordle::data::prop::float32_prop>(1962047921u);
    if(ptr_mDragMomentumRecencyWeight != nullptr) {
        mDragMomentumRecencyWeight = ptr_mDragMomentumRecencyWeight->value;
    }

    auto ptr_mTransitionDurationIntoCinematicMode = prop->cast_prop<yordle::data::prop::float32_prop>(3456068413u);
    if(ptr_mTransitionDurationIntoCinematicMode != nullptr) {
        mTransitionDurationIntoCinematicMode = ptr_mTransitionDurationIntoCinematicMode->value;
    }

    auto ptr_x71c9323a = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1909011002u);
    if(ptr_x71c9323a != nullptr) {
        x71c9323a = yordle::data::meta::deserialize<yordle::data::meta::CameraTrapezoid>(ptr_x71c9323a, 1207715590u);
    }

    auto ptr_xf7617555 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(4150359381u);
    if(ptr_xf7617555 != nullptr) {
        xf7617555 = yordle::data::meta::deserialize<yordle::data::meta::CameraTrapezoid>(ptr_xf7617555, 1207715590u);
    }

    auto ptr_x383f51a8 = prop->cast_prop<yordle::data::prop::float32_prop>(943673768u);
    if(ptr_x383f51a8 != nullptr) {
        x383f51a8 = ptr_x383f51a8->value;
    }

    auto ptr_x79b2d636 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2041763382u);
    if(ptr_x79b2d636 != nullptr) {
        x79b2d636 = yordle::data::meta::deserialize<yordle::data::meta::CameraTrapezoid>(ptr_x79b2d636, 1207715590u);
    }

    auto ptr_x4eb5a788 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1320527752u);
    if(ptr_x4eb5a788 != nullptr) {
        x4eb5a788 = yordle::data::meta::deserialize<yordle::data::meta::CameraTrapezoid>(ptr_x4eb5a788, 1207715590u);
    }

    auto ptr_x75b7ab24 = prop->cast_prop<yordle::data::prop::float32_prop>(1974971172u);
    if(ptr_x75b7ab24 != nullptr) {
        x75b7ab24 = ptr_x75b7ab24->value;
    }
}
