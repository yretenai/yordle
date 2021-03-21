//
// Created by Lilith on 3/21/2021.
//

#pragma once

#include "yordle/sieve/version_set_model.hpp"
#include "yordle/yordle_export.h"
#include <standard_dragon/Array.hpp>

// release channel:
// https://lol.secure.dyn.riotcdn.net/channels/public/live-na-win.json
// https://lol.secure.dyn.riotcdn.net/channels/public/pbe-pbe-win.json

// version set:
// https://sieve.services.riotcdn.net/api/v1/products/lol/version-sets/NA1?q[artifact_type_id]=lol-game-client&q[platform]=windows&q[published]=true
// https://sieve.services.riotcdn.net/api/v1/products/lol/version-sets/PBE1?q[artifact_type_id]=lol-game-client&q[platform]=windows&q[published]=true

// client config:
// https://clientconfig.rpg.riotgames.com/api/v1/config/public?namespace=keystone.products.league_of_legends.patchlines
// https://clientconfig.rpg.riotgames.com/api/v1/config/public?namespace=keystone.products.bacon.patchlines
// https://clientconfig.rpg.riotgames.com/api/v1/config/public?namespace=keystone.products.valorant.patchlines
// https://clientconfig.rpg.riotgames.com/api/v1/config/public?version=99.0.0.9999999&namespace=keystone.self_update&patchline=KeystoneFoundationLiveWin&app=Riot%20Client

namespace yordle::sieve {
    class YORDLE_EXPORT [[maybe_unused]] version_set {
    public:
        [[maybe_unused]] explicit version_set(const std::string &buffer);
        ~version_set() = default;

        version_set_model data;
    };
} // namespace yordle::sieve
