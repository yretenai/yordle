//
// Created by Lilith on 2021-06-17.
//

#pragma once

#include <yordle/cdtb/hashlist.hpp>
#include <yordle/yordle_export.h>

namespace yordle::cdtb {
    using hashlist_target = enum class HASHLIST_TARGET {
        none,
        prop_entry,
        prop_field,
        prop_hash,
        prop_type,
        wad_file,
        rst_string,
        rst4_string
    };

    class YORDLE_EXPORT hashlist_collection {
    public:
        explicit hashlist_collection() = default;

        std::map<hashlist_target, std::shared_ptr<hashlist<uint32_t>>> fnv;
        std::map<hashlist_target, std::shared_ptr<hashlist<uint64_t>>> xx;

        [[nodiscard]] static inline std::string hex_hash(uint64_t hash) {
            std::stringstream stream;
            stream << "0x" << std::hex << hash;
            return stream.str();
        }

        [[nodiscard]] inline std::shared_ptr<hashlist<uint32_t>> get_fnvhashlist(hashlist_target target) const {
            if (fnv.contains(target)) {
                return fnv.at(target);
            }

            return nullptr;
        }

        [[nodiscard]] inline std::string get_fnvhash(uint32_t hash, hashlist_target preferred = hashlist_target::none) const {
            if (preferred != hashlist_target::none && fnv.contains(preferred)) {
                if (fnv.at(preferred)->hashes.contains(hash)) {
                    return fnv.at(preferred)->hashes.at(hash);
                }
            }

            for (const auto &pair : fnv) {
                if (pair.second->hashes.contains(hash)) {
                    return pair.second->hashes.at(hash);
                }
            }

            return hex_hash(hash);
        }

        [[nodiscard]] inline std::shared_ptr<hashlist<uint64_t>> get_xxhashlist(hashlist_target target) const {
            if (xx.contains(target)) {
                return xx.at(target);
            }

            return nullptr;
        }

        [[nodiscard]] inline std::string get_xxhash(uint64_t hash, hashlist_target preferred = hashlist_target::none) const {
            if (preferred != hashlist_target::none && xx.contains(preferred)) {
                if (xx.at(preferred)->hashes.contains(hash)) {
                    return xx.at(preferred)->hashes.at(hash);
                }
            }

            for (const auto &pair : xx) {
                if (pair.second->hashes.contains(hash)) {
                    return pair.second->hashes.at(hash);
                }
            }

            return hex_hash(hash);
        }
    };
} // namespace yordle::cdtb
