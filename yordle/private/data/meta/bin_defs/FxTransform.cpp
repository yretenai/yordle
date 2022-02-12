/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FxTransform.hpp>

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

yordle::data::meta::FxTransform::FxTransform(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_type = prop->cast_prop<yordle::data::prop::uint32_prop>(1361572173u);
    if(ptr_type != nullptr) {
        type = ptr_type->value;
    }

    auto ptr_Index = prop->cast_prop<yordle::data::prop::int32_prop>(151693739u);
    if(ptr_Index != nullptr) {
        Index = ptr_Index->value;
    }

    auto ptr_AttachmentName = prop->cast_prop<yordle::data::prop::string_prop>(3447302923u);
    if(ptr_AttachmentName != nullptr) {
        AttachmentName = ptr_AttachmentName->value;
    }

    auto ptr_Transform = prop->cast_prop<yordle::data::prop::matrix_prop>(3786248987u);
    if(ptr_Transform != nullptr) {
        Transform = ptr_Transform->value;
    }
}