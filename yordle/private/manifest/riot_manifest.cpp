//
// Created by yretenai on 2020-08-25.
//

#include <bitset>
#include <cassert>

#include <yordle/manifest/RiotManifest_generated.h>
#include <yordle/manifest/riot_manifest.hpp>

#include <standard_dragon/Indent.hpp>
#include <standard_dragon/exception/invalid_data.hpp>

#include <zstd.h>

[[maybe_unused]] yordle::manifest::riot_manifest::riot_manifest(dragon::Array<uint8_t> &buffer) {
    auto data_start = reinterpret_cast<uintptr_t>(&version_major);
#ifndef NDEBUG
    auto data_end = reinterpret_cast<uintptr_t>(&size) + sizeof(uint32_t);
    assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

    if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE + 0x100) {
        throw dragon::exception::invalid_data("Buffer passed to RiotManifest is not a valid RMAN buffer.");
    }

    buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);
    assert(buffer.size() >= csize + offset + 0x100);
    assert(version_major == 2);
    assert(version_minor == 0);
    assert(flags.value == 0x200);

    if (size > 0) {
        if (flags.compressed) {
            data = std::make_shared<dragon::Array<uint8_t>>(size, nullptr);
            ZSTD_decompress(data->data(), size, buffer.data() + offset, csize);
        } else {
            data = std::make_shared<dragon::Array<uint8_t>>(buffer.data() + offset, size, true);
        }
    }

    const generated::RiotManifest *rman = generated::GetRiotManifest(data->data());
    for (flatbuffers::uoffset_t i = 0; i < rman->bundles()->size(); ++i) {
        const auto *bundle = rman->bundles()->GetAs<generated::RiotManifestBundle>(i);
        std::shared_ptr<dragon::Array<riot_manifest_bundle>> blocks = std::make_shared<dragon::Array<riot_manifest_bundle>>((size_t) bundle->blocks()->size(), nullptr);
        for (flatbuffers::uoffset_t j = 0; j < bundle->blocks()->size(); ++j) {
            const auto *block = bundle->blocks()->GetAs<generated::RiotManifestBlock>(j);
            blocks->set(j, {block->block_id(), block->compressed_size(), block->size()});
        }
        bundles[bundle->block_id()] = blocks;
    }

    for (flatbuffers::uoffset_t i = 0; i < rman->languages()->size(); ++i) {
        const auto *language = rman->languages()->GetAs<generated::RiotManifestLanguage>(i);
        languages[language->language_id()] = language->name()->str();
    }

    for (flatbuffers::uoffset_t i = 0; i < rman->files()->size(); ++i) {
        const auto *file = rman->files()->GetAs<generated::RiotManifestFile>(i);
        riot_manifest_file target_file{
                file->file_id(),
                file->directory_id(),
                file->size(),
                file->name()->str(),
                file->language_flags()};
        std::shared_ptr<dragon::Array<uint64_t>> bundle_ids = std::make_shared<dragon::Array<uint64_t>>((size_t) file->block_ids()->size(), nullptr);
        for (flatbuffers::uoffset_t j = 0; j < file->block_ids()->size(); ++j) {
            bundle_ids->set(j, file->block_ids()->Get(j));
        }
        target_file.block_ids = bundle_ids;
        files[target_file.file_id] = target_file;
    }

    for (flatbuffers::uoffset_t i = 0; i < rman->directories()->size(); ++i) {
        const auto *dir = rman->directories()->GetAs<generated::RiotManifestDirectory>(i);
        directories[dir->id()] = riot_manifest_dir{dir->id(), dir->parent_id(), dir->name()->str()};
    }

    signature = std::make_shared<dragon::Array<uint8_t>>(buffer.data() + offset + csize, 0x100, true);
}

[[noreturn]] [[maybe_unused]] void yordle::manifest::riot_manifest::print(std::ostream &stream, dragon::Indent &indent) const {
    auto indent1 = indent + 1;
    auto indent2 = indent + 2;
    auto indent3 = indent + 3;

    stream << indent << "Riot Manifest v" << static_cast<unsigned int>(version_major) << "." << static_cast<unsigned int>(version_minor) << std::endl;

    stream << indent1 << "Flags: " << BITLOG16(flags.value) << std::endl;
    stream << indent2 << "Compressed: " << flags.compressed << std::endl;
    stream << indent1 << "Offset: " << HEXLOG32 << offset << std::endl;
    stream << indent1 << "Compressed Size: " << std::dec << csize << std::endl;
    stream << indent1 << "Id: " << HEXLOG64 << id << std::endl;
    stream << indent1 << "Size: " << std::dec << size << std::endl;

    stream << indent1 << "Languages: " << std::endl;
    for (auto const &language : languages) {
        stream << indent2 << "Language(" << static_cast<unsigned int>(language.first) << ") = " << language.second << std::endl;
    }

    stream << indent1 << "Directories: " << std::endl;
    for (auto const &directory : directories) {
        stream << indent2 << "Directory(" << HEXLOG64 << directory.first << ") = " << std::endl;
        stream << indent3 << "Parent: " << HEXLOG64 << directory.second.parent_id << std::endl;
        stream << indent3 << "Name: " << directory.second.name << std::endl;
    }

    stream << indent1 << "Bundles: " << std::endl;
    for (auto const &bundle : bundles) {
        stream << indent2 << "Bundle(" << HEXLOG64 << bundle.first << ") = " << std::endl;
        for (auto const &block : *bundle.second) {
            stream << indent3 << HEXLOG64 << block.block_id << " " << block.size << ":" << block.csize << std::endl;
        }
    }

    stream << indent1 << "Files: " << std::endl;
    for (auto const &file : files) {
        stream << indent2 << "File(" << HEXLOG64 << file.first << ") = " << std::endl;
        stream << indent3 << "Directory: " << HEXLOG64 << file.second.directory_id << std::endl;
        stream << indent3 << "Size: " << std::dec << file.second.size << std::endl;
        stream << indent3 << "Name: " << file.second.name << std::endl;
        stream << indent3 << "Language: " << BITLOG32(file.second.language_flags) << std::endl;
        stream << indent3 << "Chucks: ";
        for (auto const &bundle : *file.second.block_ids) {
            stream << HEXLOG64 << bundle << std::endl;
        }
    }
}
