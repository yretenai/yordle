#pragma once

#include <map>
#include <memory>
#include <optional>

#include <standard_dragon/Array.hpp>

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT structure_prop : public empty_prop {
    public:
        static constexpr prop_type TYPE = prop_type::structure;

        explicit structure_prop(uint32_t hash) : class_hash(hash), empty_prop() { }
        explicit structure_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash, bool root);

        uint32_t class_hash = 0;
        std::map<uint32_t, std::shared_ptr<empty_prop>> value;


        template<typename T>
        typename std::enable_if<std::is_base_of<empty_prop, T>::value, std::shared_ptr<T>>::type cast_prop(uint32_t prop_key) {
            if (!value.contains(prop_key)) {
                return nullptr;
            }

            return empty_prop::cast_prop<T>(value[prop_key]);
        }

        template<typename T>
        typename std::enable_if<std::is_base_of<empty_prop, T>::value, std::shared_ptr<T>>::type cast_prop(std::string prop_key) {
            return cast_prop<T>(yordle::cdtb::fnvhashlist::hash(std::move(prop_key)));
        }

        void to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const override;

        static std::shared_ptr<empty_prop> read_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, std::optional<uint32_t> key_hash, std::optional<prop_type> type);
    };
} // namespace yordle::data::prop
