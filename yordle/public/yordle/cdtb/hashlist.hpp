//
// Created by Lilith on 2020-09-14.
//

#pragma once

#include <filesystem>
#include <iostream>
#include <map>

// 64-bit hashing uses xxhash64. (xxhashlist)
// 32-bit hashing uses fnv1a32. (fnvhaslist)
namespace yordle::cdtb {
    template<typename T>
    class hashlist {
    public:
        ~hashlist() = default;

        std::map<T, std::string> hashes;

        virtual void validate()                                                              = 0;
        [[nodiscard]] virtual std::shared_ptr<hashlist<T>> restrict_bits(uint8_t bits) const = 0;
        virtual void combine(hashlist<T> &hashlist)                                          = 0;


        [[nodiscard]] static inline std::string hex_hash(uint64_t hash, const std::string &prefix = "0x") {
            std::stringstream stream;
            stream << prefix << std::hex << hash;
            return stream.str();
        }

        std::string get_string(T hash, const std::string &prefix = "0x") const {
            if (!hashes.contains(hash)) {
                return hex_hash(hash, prefix);
            }

            return hashes.at(hash);
        }

        std::filesystem::path get_path(T hash, const std::string &prefix = "0x") const {
            if (!hashes.contains(hash)) {
                return std::filesystem::path("__unknown") / get_string(hash, prefix);
            }

            return hashes.at(hash);
        }

        inline void save(std::ostream &stream) {
            for (auto pair : hashes) {
                if (pair.second.empty()) {
                    continue;
                }

                stream << std::hex << pair.first << " " << pair.second << std::endl;
            }

            stream.flush();
        }
    };
} // namespace yordle::cdtb
