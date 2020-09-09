//
// Created by yretenai on 2020-08-25.
//

#include <cassert>

#include <poppy/exception/invalid_data_exception.hpp>
#include <poppy/manifest/riot_manifest.hpp>

#include <zstd.h>

using namespace poppy::exception;

poppy::manifest::riot_manifest::riot_manifest(dragon::Array<uint8_t> &buffer) {
    uintptr_t data_start = reinterpret_cast<uintptr_t>(&version_major);
#ifndef NDEBUG
    uintptr_t data_end = reinterpret_cast<uintptr_t>(&size) + sizeof(uint32_t);
    assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

    if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE + 0x100) {
        throw invalid_data_exception("Buffer passed to RiotManifest is not a valid RMAN buffer.");
    }

    buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);
    assert(buffer.size() >= csize + offset + 0x100);
    assert(version_major == 2);
    assert(version_minor == 0);
    assert(*reinterpret_cast<uint16_t *>(&flags) == 0x200);

    if (size > 0) {
        if (flags.compressed) {
            data = std::make_shared<dragon::Array<uint8_t>>(size, nullptr);
            ZSTD_decompress(data->data(), size, buffer.data() + offset, csize);
        } else {
            data = std::make_shared<dragon::Array<uint8_t>>(buffer.data() + offset, size, nullptr);
        }
    }

    const generated::rman *rman = get_rman_data();
    for (flatbuffers::uoffset_t i = 0; i < rman->chunks()->size(); ++i) {
        const generated::riot_manifest_chunk *chunk = rman->chunks()->GetAs<generated::riot_manifest_chunk>(i);
        std::shared_ptr<dragon::Array<riot_manifest_bundle>> bundles = std::make_shared<dragon::Array<riot_manifest_bundle>>((size_t) chunk->blocks()->size(), nullptr);
        for (flatbuffers::uoffset_t j = 0; j < chunk->blocks()->size(); ++j) {
            const generated::riot_manifest_block *block = chunk->blocks()->GetAs<generated::riot_manifest_block>(j);
            bundles->set(j, {block->block_id(), block->compressed_size(), block->size()});
        }
        chunks[chunk->chunk_id()] = bundles;
    }

    for (flatbuffers::uoffset_t i = 0; i < rman->languages()->size(); ++i) {
        const generated::riot_manifest_language *language = rman->languages()->GetAs<generated::riot_manifest_language>(i);
        languages[language->language_id()] = language->name()->str();
    }

    for (flatbuffers::uoffset_t i = 0; i < rman->files()->size(); ++i) {
        const generated::riot_manifest_file *file = rman->files()->GetAs<generated::riot_manifest_file>(i);
        riot_manifest_file target_file{file->file_id(), file->directory_id(), file->size(), file->name()->str(), file->language_flags()};
        std::shared_ptr<dragon::Array<uint64_t>> bundle_ids = std::make_shared<dragon::Array<uint64_t>>((size_t) file->block_ids()->size(), nullptr);
        for (flatbuffers::uoffset_t j = 0; j < file->block_ids()->size(); ++j) {
            bundle_ids->set(j, file->block_ids()->Get(j));
        }
        target_file.block_ids = bundle_ids;
        files[target_file.file_id] = target_file;
    }

    for (flatbuffers::uoffset_t i = 0; i < rman->directories()->size(); ++i) {
        const generated::riot_manifest_directory *dir = rman->directories()->GetAs<generated::riot_manifest_directory>(i);
        directories[dir->id()] = riot_manifest_dir{dir->id(), dir->parent_id(), dir->name()->str()};
    }

    signature = std::make_shared<dragon::Array<uint8_t>>(buffer.data() + offset + csize, 0x100, nullptr);
}

const poppy::manifest::generated::rman *poppy::manifest::riot_manifest::get_rman_data() const {
    return generated::Getrman(data->data());
}
