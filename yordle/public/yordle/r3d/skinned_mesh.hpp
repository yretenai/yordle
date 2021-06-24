//
// Created by Lilith on 2021-06-24.
//


#pragma once

#include <cstdint>
#include <map>
#include <string>

#include <standard_dragon/Array.hpp>

#include <yordle/r3d/geometry.hpp>
#include <yordle/yordle_export.h>

namespace yordle::r3d {
#pragma pack(push, 1)
    using skinned_mesh_vbo_type = enum class SKINNED_MESH_VBO_TYPE : uint32_t {
        standard  = 0,
        has_color = 1
    };

    using skinned_submesh_v2 = struct SKINNED_SUBMESH_V2 {
        uint32_t vbo_start;
        uint32_t vbo_count;
        uint32_t ibo_start;
        uint32_t ibo_count;
    };

    using skinned_submesh = skinned_submesh_v2;
#pragma pack(pop)

    class YORDLE_EXPORT skinned_mesh {
    private:
        static constexpr uint32_t FOURCC = 0x00112233;

    protected:
        static uint16_t read_header(dragon::Array<uint8_t> &buffer);

    public:
        ~skinned_mesh() = default;

        std::shared_ptr<dragon::Array<uint16_t>> ibo;
        std::shared_ptr<dragon::Array<uint8_t>> vbo;
        std::map<std::string, skinned_submesh> submeshes;

        uint32_t vbo_stride            = 52;
        uint32_t flags                 = 0;
        skinned_mesh_vbo_type vbo_type = skinned_mesh_vbo_type::standard;
        bounding_box bbox {};
        bounding_volume bvol {};

        virtual uint16_t get_skinned_mesh_version() = 0;
        void read_ibo_vbo(dragon::Array<uint8_t> &buffer, uintptr_t &ptr) const;
        static std::shared_ptr<skinned_mesh> load_skn_file(dragon::Array<uint8_t> &buffer);
    };

    class YORDLE_EXPORT skinned_mesh_v1 : public skinned_mesh {
    public:
        explicit skinned_mesh_v1(dragon::Array<uint8_t> &buffer);
        ~skinned_mesh_v1() = default;

        uint16_t get_skinned_mesh_version() override {
            return 1;
        }
    };

    class YORDLE_EXPORT skinned_mesh_v2 : public skinned_mesh {
    public:
        explicit skinned_mesh_v2(dragon::Array<uint8_t> &buffer);
        ~skinned_mesh_v2() = default;

        uint16_t get_skinned_mesh_version() override {
            return 2;
        }
    };

    class YORDLE_EXPORT skinned_mesh_v4 : public skinned_mesh {
    public:
        explicit skinned_mesh_v4(dragon::Array<uint8_t> &buffer);
        ~skinned_mesh_v4() = default;

        uint16_t get_skinned_mesh_version() override {
            return 4;
        }
    };
} // namespace yordle::r3d
