//
// Created by Lilith on 2021-03-21.
//

#pragma once

#include <standard_dragon/Array.hpp>

#include <yordle/sieve/models/version_set_model.hpp>
#include <yordle/yordle_export.h>

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
    class YORDLE_EXPORT version_set {
    public:
        explicit version_set(const std::string &buffer);
        ~version_set() = default;

        std::shared_ptr<models::version_set> data;
    };
} // namespace yordle::sieve
