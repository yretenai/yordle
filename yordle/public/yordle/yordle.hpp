//
// Created by Lilith on 2020-09-10.
//

#pragma once

#define YORDLE_VERSION 20
#define YORDLE_VERSION_M 0
#define YORDLE_VERSION_m 5
#define YORDLE_VERSION_i 0
#define YORDLE_VERSION_S "0.5.3"

#include <yordle/yordle_export.h>

#include <yordle/archive/wad_file.hpp>
#include <yordle/archive/wad_file_v1.hpp>
#include <yordle/archive/wad_file_v2.hpp>
#include <yordle/archive/wad_file_v3.hpp>
#include <yordle/audio/wem_pack.hpp>
#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/hashlist.hpp>
#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/cdtb/xxhashlist.hpp>
#include <yordle/data/inibin.hpp>
#include <yordle/data/inibin_v1.hpp>
#include <yordle/data/inibin_v2.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_dispatch.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/property_bin.hpp>
#include <yordle/data/rst_file.hpp>
#include <yordle/data/rst_file_v1.hpp>
#include <yordle/data/rst_file_v2.hpp>
#include <yordle/data/rst_file_v4.hpp>
#include <yordle/lcu/v1/models.hpp>
#include <yordle/manifest/riot_bundle.hpp>
#include <yordle/manifest/riot_manifest.hpp>
#include <yordle/r3d/skinned_mesh.hpp>
#include <yordle/sieve/models.hpp>

namespace yordle {
    YORDLE_EXPORT std::string get_version_str();
    YORDLE_EXPORT int get_version();
} // namespace yordle
