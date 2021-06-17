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
        [[nodiscard]] virtual std::string get_string(T hash) const                           = 0;
        [[nodiscard]] virtual std::filesystem::path get_path(T hash) const                   = 0;
        [[nodiscard]] virtual std::shared_ptr<hashlist<T>> restrict_bits(uint8_t bits) const = 0;
        virtual void combine(hashlist<T> &hashlist)                                          = 0;

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
