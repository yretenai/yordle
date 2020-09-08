//
// Created by yretenai on 2020-08-25.
//

#ifndef POPPY_RIOT_MANIFEST_HPP
#define POPPY_RIOT_MANIFEST_HPP

#include <cstdint>
#include <memory>

#include <poppy/poppy_export.h>
#include <poppy/manifest/rman_generated.h>

#include <standard_dragon/dragon.h>

namespace poppy::manifest {
    class POPPY_EXPORT riot_manifest {
    private:
        static constexpr uint32_t FOURCC = MAKEFOURCC('R', 'M', 'A', 'N');
        static constexpr uint32_t EXPECTED_DATA_SIZE = 0x18;

    public:
        explicit riot_manifest(dragon::Array<uint8_t> &buffer);
        ~riot_manifest() = default;

        typedef struct alignas(2) RMAN_FLAGS {
            bool unknown1 : 1;
            bool unknown2 : 1;
            bool unknown3 : 1;
            bool unknown4 : 1;
            bool unknown5 : 1;
            bool unknown6 : 1;
            bool unknown7 : 1;
            bool unknown8 : 1;
            bool unknown9 : 1;
            bool compressed : 1; // assumption
            bool unknown12 : 1;
            bool unknown13 : 1;
            bool unknown14 : 1;
            bool unknown15 : 1;
            bool unknown16 : 1;
        } riot_manifest_flags;

#pragma pack(push, 1)
        uint8_t version_major = 2; // manifest format version
        uint8_t version_minor = 0;
        riot_manifest_flags flags{};
        uint32_t offset = riot_manifest::EXPECTED_DATA_SIZE + 4;
        uint32_t csize = 0;
        uint64_t id = 0;
        uint32_t size = 0;
#pragma pack(pop)

        std::shared_ptr<const generated::rman> data;
        std::shared_ptr<dragon::Array<uint8_t>> signature;
    };
} // namespace poppy::manifest

#endif //POPPY_RIOT_MANIFEST_HPP
