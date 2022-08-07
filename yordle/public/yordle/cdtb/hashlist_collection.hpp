#pragma once

#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/hashlist.hpp>
#include <yordle/cdtb/xxhashlist.hpp>
#include <yordle/yordle_export.h>

namespace yordle::cdtb {
    using hashlist_target = enum class HASHLIST_TARGET : int32_t {
        none        = -1,
        prop_entry  = 0,
        prop_field  = 1,
        prop_hash   = 2,
        prop_type   = 3,
        wad_file    = 4,
        rst_string  = 5,
        rst4_string = 6,
        end         = 7,

        fnv_start = prop_entry,
        fnv_end   = prop_type,
        xx_start  = wad_file,
        xx_end    = rst4_string
    };

    class YORDLE_EXPORT hashlist_collection {
    public:
        explicit hashlist_collection() = default;

        std::map<hashlist_target, std::shared_ptr<hashlist<uint32_t>>> fnv;
        std::map<hashlist_target, std::shared_ptr<hashlist<uint64_t>>> xx;

        inline void init_empty() {
            for (auto i = static_cast<uint32_t>(hashlist_target::fnv_start); static_cast<HASHLIST_TARGET>(i) <= hashlist_target::fnv_end; i++) {
                if (!fnv.contains(static_cast<hashlist_target>(i))) {
                    fnv[static_cast<hashlist_target>(i)] = std::make_shared<fnvhashlist>();
                }
            }

            for (auto i = static_cast<uint32_t>(hashlist_target::xx_start); static_cast<HASHLIST_TARGET>(i) <= hashlist_target::xx_end; i++) {
                if (!xx.contains(static_cast<hashlist_target>(i))) {
                    xx[static_cast<hashlist_target>(i)] = std::make_shared<xxhashlist>();
                }
            }
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

            return hashlist<uint32_t>::hex_hash(hash);
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

            return hashlist<uint64_t>::hex_hash(hash);
        }
    };
} // namespace yordle::cdtb
