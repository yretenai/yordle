/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ScriptDataObjectList.hpp>

#include <yordle/data/meta/bin_defs/ScriptDataObject.hpp>
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

yordle::data::meta::ScriptDataObjectList::ScriptDataObjectList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mName = prop->cast_prop<yordle::data::prop::string_prop>(435142619u);
    if(ptr_mName != nullptr) {
        mName = ptr_mName->value;
    }

    auto ptr_mScriptDataObjects = prop->cast_prop<yordle::data::prop::set_prop>(1331068385u);
    if(ptr_mScriptDataObjects != nullptr) {
        for(const auto &set_mScriptDataObjects_entry : ptr_mScriptDataObjects->value) {
            auto ptr_mScriptDataObjects_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mScriptDataObjects_entry);
            if(ptr_mScriptDataObjects_entry != nullptr) {
                mScriptDataObjects.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::ScriptDataObject>(1625294129u, ptr_mScriptDataObjects_entry->value));
            }
        }
    }
}
