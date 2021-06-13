//
// Created by Lilith on 2020-09-10.
//

#pragma once

#define YORDLE_VERSION 14
#define YORDLE_VERSION_M 0
#define YORDLE_VERSION_m 4
#define YORDLE_VERSION_i 0
#define YORDLE_VERSION_S "0.4.0"

#include <yordle/yordle_export.h>

#include <yordle/archive/wad_file.hpp>
#include <yordle/archive/wad_file_v1.hpp>
#include <yordle/archive/wad_file_v2.hpp>
#include <yordle/archive/wad_file_v3.hpp>
#include <yordle/audio/wem_pack.hpp>
#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/hashlist.hpp>
#include <yordle/cdtb/xxhashlist.hpp>
#include <yordle/data/inibin.hpp>
#include <yordle/data/inibin_v1.hpp>
#include <yordle/data/inibin_v2.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/property_bin.hpp>
#include <yordle/manifest/riot_bundle.hpp>
#include <yordle/manifest/riot_manifest.hpp>
#include <yordle/meeps/languages.hpp>
#include <yordle/sieve/client_config.hpp>
#include <yordle/sieve/release_channel.hpp>
#include <yordle/sieve/version_set.hpp>

namespace yordle {
    YORDLE_EXPORT std::string get_version_str();
    YORDLE_EXPORT int get_version();
} // namespace yordle
