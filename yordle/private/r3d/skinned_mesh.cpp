//
// Created by Lilith on 2021-06-24.
//

#include <standard_dragon/exception/invalid_data.hpp>
#include <standard_dragon/exception/not_implemented.hpp>

#include <yordle/r3d/skinned_mesh.hpp>

using namespace dragon;
using namespace dragon::exception;

namespace yordle::r3d {
    uint16_t skinned_mesh::read_header(Array<uint8_t> &buffer) {
        if (buffer.cast<uint32_t>(0) != FOURCC) {
            throw invalid_data("Buffer passed to skinned_mesh is not a valid skn buffer.");
        }

        auto major = buffer.cast<uint16_t>(4);
        // auto minor = buffer.cast<uint16_t>(6);
        return major;
    }

    std::shared_ptr<skinned_mesh> skinned_mesh::load_skn_file(Array<uint8_t> &buffer) {
        uint16_t version = read_header(buffer);
        if (version == 0 || version == 1) {
            return std::make_shared<skinned_mesh_v1>(buffer);
        } else if (version == 2) {
            return std::make_shared<skinned_mesh_v2>(buffer);
        } else if (version == 4) {
            return std::make_shared<skinned_mesh_v4>(buffer);
        }
        return nullptr;
    }

    void skinned_mesh::read_ibo_vbo(dragon::Array<uint8_t> &buffer, uintptr_t &ptr) const {
        std::copy_n(ibo->data(), ibo->size(), reinterpret_cast<uint16_t *>(buffer.data() + ptr));
        ptr += ibo->byte_size();
        std::copy_n(vbo->data(), vbo->size(), buffer.data() + ptr);
        ptr += vbo->byte_size();
    }

    skinned_mesh_v1::skinned_mesh_v1(Array<uint8_t> &buffer) {
        uintptr_t ptr = 8;

        auto ibo_count = buffer.lpcast<uint32_t>(ptr);
        ibo            = std::make_shared<Array<uint16_t>>(ibo_count, nullptr);
        auto vbo_count = buffer.lpcast<uint32_t>(ptr);
        vbo            = std::make_shared<Array<uint8_t>>(vbo_count * vbo_stride, nullptr);

        read_ibo_vbo(buffer, ptr);
        submeshes["Base"] = {0, static_cast<uint32_t>(vbo->size() / vbo_stride), 0, static_cast<uint32_t>(ibo->size())};
    }

    skinned_mesh_v2::skinned_mesh_v2(Array<uint8_t> &buffer) {
        uintptr_t ptr = 8;

        auto submesh_count = buffer.lpcast<uint32_t>(ptr);
        for (auto i = 0; i < submesh_count; ++i) {
            auto name_buffer = buffer.lpslice(ptr, 0x40);
            auto str         = std::string(reinterpret_cast<const char * const>(name_buffer.data()));
            submeshes[str]   = buffer.lpcast<skinned_submesh_v2>(ptr);
        }

        auto ibo_count = buffer.lpcast<uint32_t>(ptr);
        ibo            = std::make_shared<Array<uint16_t>>(ibo_count, nullptr);
        auto vbo_count = buffer.lpcast<uint32_t>(ptr);
        vbo            = std::make_shared<Array<uint8_t>>(vbo_count * vbo_stride, nullptr);

        read_ibo_vbo(buffer, ptr);
    }

    skinned_mesh_v4::skinned_mesh_v4(Array<uint8_t> &buffer) {
        uintptr_t ptr      = 8;
        auto submesh_count = buffer.lpcast<uint32_t>(ptr);
        for (auto i = 0; i < submesh_count; ++i) {
            auto name_buffer = buffer.lpslice(ptr, 0x40);
            auto str         = std::string(reinterpret_cast<const char * const>(name_buffer.data()));
            submeshes[str]   = buffer.lpcast<skinned_submesh_v2>(ptr);
        }
        flags = buffer.lpcast<uint32_t>(ptr);

        auto ibo_count = buffer.lpcast<uint32_t>(ptr);
        ibo            = std::make_shared<Array<uint16_t>>(ibo_count, nullptr);
        auto vbo_count = buffer.lpcast<uint32_t>(ptr);
        vbo_stride     = buffer.lpcast<uint32_t>(ptr);
        vbo            = std::make_shared<Array<uint8_t>>(vbo_count * vbo_stride, nullptr);

        vbo_type = buffer.lpcast<skinned_mesh_vbo_type>(ptr);
        bbox     = buffer.lpcast<bounding_box>(ptr);
        bvol     = buffer.lpcast<bounding_volume>(ptr);

        read_ibo_vbo(buffer, ptr);
    }
} // namespace yordle::r3d
