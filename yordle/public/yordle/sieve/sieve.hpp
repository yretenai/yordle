#pragma once

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

#include <nlohmann/json.hpp>
#include <stdexcept>
#include <utility>

#ifndef NLOHMANN_OPT_HELPER
#    define NLOHMANN_OPT_HELPER
namespace nlohmann {
    template<typename T>
    struct adl_serializer<std::shared_ptr<T>> {
        static void to_json(json &j, const std::shared_ptr<T> &opt) {
            if (!opt) j = nullptr;
            else
                j = *opt;
        }

        static std::shared_ptr<T> from_json(const json &j) {
            if (j.is_null()) return std::unique_ptr<T>();
            else
                return std::unique_ptr<T>(new T(j.get<T>()));
        }
    };
} // namespace nlohmann
#endif // NLOHMANN_OPT_HELPER

namespace yordle::sieve {
    using nlohmann::json;

    template<typename T>
    inline std::shared_ptr<T> get_optional(const json &j, const char *property) {
        if (j.find(property) != j.end()) {
            return j.at(property).get<std::shared_ptr<T>>();
        }
        return nullptr;
    }
} // namespace yordle::sieve
