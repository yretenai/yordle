//
// Created by Lilith on 2020-08-25.
//

#include <bitset>
#include <cassert>

#include <yordle/manifest/RiotManifest_generated.h>
#include <yordle/manifest/riot_manifest.hpp>

#include <standard_dragon/exception/invalid_data.hpp>

#include <zstd.h>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

namespace yordle::manifest {
    yordle::manifest::riot_manifest::riot_manifest(Array<uint8_t> &buffer) {
        auto data_start = reinterpret_cast<uintptr_t>(&version_major);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&size) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE + 0x100) {
            throw invalid_data("Buffer passed to RiotManifest is not a valid RMAN buffer.");
        }

        buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);
        assert(buffer.size() >= csize + offset + 0x100);
        assert(version_major == 2);
        assert(version_minor == 0);
        assert(flags.value == 0x200);

        if (size > 0) {
            if (flags.compressed) {
                data = make_shared<Array<uint8_t>>(size, nullptr);
                ZSTD_decompress(data->data(), size, buffer.data() + offset, csize);
            } else {
                data = make_shared<Array<uint8_t>>(buffer.data() + offset, size, true);
            }
        }

        const generated::RiotManifest *rman = generated::GetRiotManifest(data->data());
        bundle_ids.reserve(rman->bundles()->size());
        for (flatbuffers::uoffset_t i = 0; i < rman->bundles()->size(); ++i) {
            const auto *bundle = rman->bundles()->GetAs<generated::RiotManifestBundle>(i);
            shared_ptr<Array<riot_manifest_bundle>> blocks = make_shared<Array<riot_manifest_bundle>>((size_t) bundle->blocks()->size(), nullptr);
            for (flatbuffers::uoffset_t j = 0; j < bundle->blocks()->size(); ++j) {
                const auto *block = bundle->blocks()->GetAs<generated::RiotManifestBlock>(j);
                blocks->set(j, {block->block_id(), block->compressed_size(), block->size()});
                block_to_bundle_map[block->block_id()] = bundle->block_id();
            }
            bundle_ids.emplace_back(bundle->block_id());
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
                file->language_flags(),
                file->link()->str(),
                file->is_bundle_hierarchy(),
                file->index(),
                file->permissions()};
            shared_ptr<Array<uint64_t>> target_bundle_ids = make_shared<Array<uint64_t>>((size_t) file->block_ids()->size(), nullptr);
            for (flatbuffers::uoffset_t j = 0; j < file->block_ids()->size(); ++j) {
                target_bundle_ids->set(j, file->block_ids()->Get(j));
            }
            target_file.block_ids = target_bundle_ids;
            files[target_file.file_id] = target_file;
        }

        for (flatbuffers::uoffset_t i = 0; i < rman->directories()->size(); ++i) {
            const auto *dir = rman->directories()->GetAs<generated::RiotManifestDirectory>(i);
            directories[dir->id()] = riot_manifest_dir{dir->id(), dir->parent_id(), dir->name()->str()};
        }

        signature = make_shared<Array<uint8_t>>(buffer.data() + offset + csize, 0x100, true);
    }

    filesystem::path yordle::manifest::riot_manifest::get_directory_path(uint64_t id) const {
        auto combined_path = filesystem::path();

        while (id != 0) {
            if (!directories.contains(id)) {
                return combined_path;
            }

            const auto directory = directories.at(id);
            combined_path = filesystem::path(directory.name) / combined_path;
            id = directory.parent_id;
        }

        return combined_path;
    }

    void yordle::manifest::riot_manifest::print(ostream &stream, Indent &indent, bool full) const {
        auto indent1 = indent + 1;
        auto indent2 = indent + 2;
        auto indent3 = indent + 3;
        auto indent4 = indent + 4;

        stream << indent << "Riot Manifest v" << static_cast<unsigned int>(version_major) << "." << static_cast<unsigned int>(version_minor) << endl;

        stream << indent1 << "Flags: " << BITLOG16(flags.value) << endl;
        stream << indent2 << "Compressed: " << flags.compressed << endl;
        stream << indent1 << "Offset: " << HEXLOG32 << offset << endl;
        stream << indent1 << "Compressed Size: " << dec << csize << endl;
        stream << indent1 << "Id: " << HEXLOG64 << id << endl;
        stream << indent1 << "Size: " << dec << size << endl;

        stream << indent1 << "Languages: " << endl;
        for (auto const &language : languages) {
            stream << indent2 << "Language(" << static_cast<unsigned int>(language.first) << ") = " << language.second << endl;
        }

        stream << indent1 << "Directories: " << endl;
        for (auto const &directory : directories) {
            if (full) {
                stream << indent2 << "Directory(" << HEXLOG64 << directory.first << ") = " << endl;
                stream << indent3 << "Parent: " << HEXLOG64 << directory.second.parent_id << endl;
                stream << indent3 << "Name: " << directory.second.name << endl;
            } else {
                stream << indent2 << get_directory_path(directory.first).string() << endl;
            }
        }

        if (full) {
            stream << indent1 << "Bundles: " << endl;
            for (auto const &bundle : bundles) {
                stream << indent2 << "Bundle(" << HEXLOG64 << bundle.first << ") = " << endl;
                for (auto const &block : *bundle.second) {
                    stream << indent3 << HEXLOG64 << block.block_id << " " << block.size << ":" << block.csize << endl;
                }
            }
        }

        stream << indent1 << "Files: " << endl;
        for (auto const &file : files) {
            if (full) {
                stream << indent2 << "File(" << HEXLOG64 << file.first << ") = " << endl;
                stream << indent3 << "Directory: " << HEXLOG64 << file.second.directory_id << endl;
                stream << indent3 << "Size: " << dec << file.second.size << endl;
                stream << indent3 << "Name: " << file.second.name << endl;
                stream << indent3 << "Language: " << BITLOG32(file.second.language_flags) << endl;
                stream << indent3 << "Link: " << file.second.link << endl;
                stream << indent3 << "Is Hierarchy: " << (file.second.is_hierarchy ? "yes" : "no") << endl;
                stream << indent3 << "Index: " << static_cast<unsigned int>(file.second.index) << endl;
                stream << indent3 << "Permissions: " << OCTLOG8 << static_cast<unsigned int>(file.second.permissions) << endl;
                stream << indent3 << "Chucks: " << endl;
                for (auto const &bundle : *file.second.block_ids) {
                    stream << indent4 << HEXLOG64 << bundle << endl;
                }
            } else {
                stream << indent2 << (get_directory_path(file.second.directory_id) / file.second.name).string() << endl;
            }
        }
    }
} // namespace yordle::manifest
