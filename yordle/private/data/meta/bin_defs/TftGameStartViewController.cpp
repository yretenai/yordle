/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TftGameStartViewController.hpp>

#include <yordle/data/meta/bin_defs/xd1fd3185.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
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

yordle::data::meta::TftGameStartViewController::TftGameStartViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x81317ee6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2167504614u);
    if(ptr_x81317ee6 != nullptr) {
        x81317ee6 = ptr_x81317ee6->value;
    }

    auto ptr_xfc59b058 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4233736280u);
    if(ptr_xfc59b058 != nullptr) {
        xfc59b058 = ptr_xfc59b058->value;
    }

    auto ptr_x1ef01e7 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(32440807u);
    if(ptr_x1ef01e7 != nullptr) {
        x1ef01e7 = ptr_x1ef01e7->value;
    }

    auto ptr_x2ae32675 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(719529589u);
    if(ptr_x2ae32675 != nullptr) {
        x2ae32675 = ptr_x2ae32675->value;
    }

    auto ptr_x709d277e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1889347454u);
    if(ptr_x709d277e != nullptr) {
        x709d277e = ptr_x709d277e->value;
    }

    auto ptr_x79c20682 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2042758786u);
    if(ptr_x79c20682 != nullptr) {
        x79c20682 = ptr_x79c20682->value;
    }

    auto ptr_xf6a44ab6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4137962166u);
    if(ptr_xf6a44ab6 != nullptr) {
        xf6a44ab6 = ptr_xf6a44ab6->value;
    }

    auto ptr_x60cff23b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1624240699u);
    if(ptr_x60cff23b != nullptr) {
        x60cff23b = ptr_x60cff23b->value;
    }

    auto ptr_xcdb026c3 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3450873539u);
    if(ptr_xcdb026c3 != nullptr) {
        xcdb026c3 = ptr_xcdb026c3->value;
    }

    auto ptr_x1ad9fdf6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(450493942u);
    if(ptr_x1ad9fdf6 != nullptr) {
        x1ad9fdf6 = ptr_x1ad9fdf6->value;
    }

    auto ptr_xc38bc99c = prop->cast_prop<yordle::data::prop::string_prop>(3280718236u);
    if(ptr_xc38bc99c != nullptr) {
        xc38bc99c = ptr_xc38bc99c->value;
    }

    auto ptr_x939434dd = prop->cast_prop<yordle::data::prop::map_prop>(2475963613u);
    if(ptr_x939434dd != nullptr) {
        for(const auto &set_x939434dd_pair : ptr_x939434dd->value) {
            auto ptr_x939434dd_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_x939434dd_pair.first);
            auto ptr_x939434dd_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x939434dd_pair.second);
            if(ptr_x939434dd_key != nullptr && ptr_x939434dd_value != nullptr) {
                x939434dd.emplace(ptr_x939434dd_key->value, yordle::data::meta::deserialize<yordle::data::meta::xd1fd3185>(ptr_x939434dd_value, 3523031429u));
            }
        }
    }

    auto ptr_x56b85896 = prop->cast_prop<yordle::data::prop::float32_prop>(1454921878u);
    if(ptr_x56b85896 != nullptr) {
        x56b85896 = ptr_x56b85896->value;
    }

    auto ptr_x14713b68 = prop->cast_prop<yordle::data::prop::float32_prop>(342965096u);
    if(ptr_x14713b68 != nullptr) {
        x14713b68 = ptr_x14713b68->value;
    }

    auto ptr_x87f66219 = prop->cast_prop<yordle::data::prop::float32_prop>(2281071129u);
    if(ptr_x87f66219 != nullptr) {
        x87f66219 = ptr_x87f66219->value;
    }

    auto ptr_x3ffa2fd6 = prop->cast_prop<yordle::data::prop::float32_prop>(1073360854u);
    if(ptr_x3ffa2fd6 != nullptr) {
        x3ffa2fd6 = ptr_x3ffa2fd6->value;
    }

    auto ptr_xdc2153fc = prop->cast_prop<yordle::data::prop::float32_prop>(3693171708u);
    if(ptr_xdc2153fc != nullptr) {
        xdc2153fc = ptr_xdc2153fc->value;
    }
}
