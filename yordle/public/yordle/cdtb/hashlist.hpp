//
// Created by yretenai on 2020-09-14.
//

#pragma once

#include <filesystem>
#include <map>

// 64-bit hashing uses xxhash64. (xxhashlist)
// 32-bit hashing uses fnv1a32. (fnvhaslist)
namespace yordle::cdtb {
    template <typename T>
    class hashlist {
    public:
        ~hashlist() = default;

        std::map<T, std::filesystem::path> hashes;
        virtual void validate() = 0;
    };
} // namespace yordle::cdtb
