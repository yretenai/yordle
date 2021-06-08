//
// Created by Lilith on 2021-03-23.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>
#include <stdexcept>
#include <utility>
#include <yordle/sieve/models/sieve.hpp>

namespace yordle::sieve::models {
    using nlohmann::json;

    struct keystone_products_metadata {
        std::shared_ptr<std::map<std::string, std::string>> content_paths;
        std::shared_ptr<std::string> default_theme_manifest;
        std::shared_ptr<std::string> full_name;
        std::shared_ptr<std::string> path_name;
    };

    struct dependency {
        std::shared_ptr<std::vector<std::string>> args;
        std::shared_ptr<bool> elevate;
        std::shared_ptr<std::string> hash;
        std::shared_ptr<std::string> id;
        std::shared_ptr<std::string> min_version;
        std::shared_ptr<std::string> url;
        std::shared_ptr<std::string> version;
    };

    struct executable {
        std::shared_ptr<std::string> app;
        std::shared_ptr<std::string> exe;
    };

    struct launcher_info {
        std::shared_ptr<std::vector<std::string>> arguments;
        std::shared_ptr<std::string> component_id;
        std::shared_ptr<executable> executables;
    };

    struct locale_data_info {
        std::shared_ptr<std::vector<std::string>> available_locales;
        std::shared_ptr<std::string> default_locale;
    };

    struct configuration_metadata {
        std::shared_ptr<std::string> theme_manifest;
    };

    struct region_data_info {
        std::shared_ptr<std::vector<std::string>> available_regions;
        std::shared_ptr<std::string> default_region;
    };

    struct configuration {
        std::shared_ptr<std::vector<std::string>> allowed_http_fallback_hostnames;
        std::shared_ptr<std::string> bundles_url;
        std::shared_ptr<std::vector<dependency>> dependencies;
        std::shared_ptr<std::vector<std::string>> excluded_paths;
        std::shared_ptr<std::string> id;
        std::shared_ptr<bool> launchable_on_update_fail;
        std::shared_ptr<launcher_info> launcher;
        std::shared_ptr<locale_data_info> locale_data;
        std::shared_ptr<configuration_metadata> metadata;
        std::shared_ptr<std::string> patch_notes_url;
        std::shared_ptr<std::string> patch_url;
        std::shared_ptr<std::string> path;
        std::shared_ptr<region_data_info> region_data;
        std::shared_ptr<std::vector<configuration>> secondary_patchlines;
        std::shared_ptr<std::string> seed_url;
        std::shared_ptr<std::vector<nlohmann::json>> tags;
        std::shared_ptr<std::string> url;
    };

    struct platform {
        std::shared_ptr<bool> auto_patch;
        std::shared_ptr<std::vector<configuration>> configurations;
        std::shared_ptr<std::string> deprecated_cloudfront_id;
        std::shared_ptr<std::string> icon_path;
        std::shared_ptr<std::string> install_dir;
        std::shared_ptr<std::vector<std::string>> rogue_process_whitelist;
    };

    struct keystone_products_patchlines {
        std::shared_ptr<std::map<std::string, keystone_products_metadata>> metadata;
        std::shared_ptr<std::map<std::string, platform>> platforms;
        std::shared_ptr<std::string> version;
    };

    void from_json(const json &j, keystone_products_metadata &x);
    void to_json(json &j, const keystone_products_metadata &x);
    void from_json(const json &j, dependency &x);
    void to_json(json &j, const dependency &x);
    void from_json(const json &j, executable &x);
    void to_json(json &j, const executable &x);
    void from_json(const json &j, launcher_info &x);
    void to_json(json &j, const launcher_info &x);
    void from_json(const json &j, locale_data_info &x);
    void to_json(json &j, const locale_data_info &x);
    void from_json(const json &j, configuration_metadata &x);
    void to_json(json &j, const configuration_metadata &x);
    void from_json(const json &j, region_data_info &x);
    void to_json(json &j, const region_data_info &x);
    void from_json(const json &j, configuration &x);
    void to_json(json &j, const configuration &x);
    void from_json(const json &j, platform &x);
    void to_json(json &j, const platform &x);
    void from_json(const json &j, keystone_products_patchlines &x);
    void to_json(json &j, const keystone_products_patchlines &x);

    inline void from_json(const json &j, keystone_products_metadata &x) {
        x.content_paths = get_optional<std::map<std::string, std::string>>(j, "content_paths");
        x.default_theme_manifest = get_optional<std::string>(j, "default_theme_manifest");
        x.full_name = get_optional<std::string>(j, "full_name");
        x.path_name = get_optional<std::string>(j, "path_name");
    }

    inline void to_json(json &j, const keystone_products_metadata &x) {
        j = json::object();
        if (x.content_paths) {
            j["content_paths"] = x.content_paths;
        }
        if (x.default_theme_manifest) {
            j["default_theme_manifest"] = x.default_theme_manifest;
        }
        if (x.full_name) {
            j["full_name"] = x.full_name;
        }
        if (x.path_name) {
            j["path_name"] = x.path_name;
        }
    }

    inline void from_json(const json &j, dependency &x) {
        x.args = get_optional<std::vector<std::string>>(j, "args");
        x.elevate = get_optional<bool>(j, "elevate");
        x.hash = get_optional<std::string>(j, "hash");
        x.id = get_optional<std::string>(j, "id");
        x.min_version = get_optional<std::string>(j, "min_version");
        x.url = get_optional<std::string>(j, "url");
        x.version = get_optional<std::string>(j, "version");
    }

    inline void to_json(json &j, const dependency &x) {
        j = json::object();
        if (x.args) {
            j["args"] = x.args;
        }
        if (x.elevate) {
            j["elevate"] = x.elevate;
        }
        if (x.hash) {
            j["hash"] = x.hash;
        }
        if (x.id) {
            j["id"] = x.id;
        }
        if (x.min_version) {
            j["min_version"] = x.min_version;
        }
        if (x.url) {
            j["url"] = x.url;
        }
        if (x.version) {
            j["version"] = x.version;
        }
    }

    inline void from_json(const json &j, executable &x) {
        x.app = get_optional<std::string>(j, "app");
        x.exe = get_optional<std::string>(j, "exe");
    }

    inline void to_json(json &j, const executable &x) {
        j = json::object();
        if (x.app) {
            j["app"] = x.app;
        }
        if (x.exe) {
            j["exe"] = x.exe;
        }
    }

    inline void from_json(const json &j, launcher_info &x) {
        x.arguments = get_optional<std::vector<std::string>>(j, "arguments");
        x.component_id = get_optional<std::string>(j, "component_id");
        x.executables = get_optional<executable>(j, "executables");
    }

    inline void to_json(json &j, const launcher_info &x) {
        j = json::object();
        if (x.arguments) {
            j["arguments"] = x.arguments;
        }
        if (x.component_id) {
            j["component_id"] = x.component_id;
        }
        if (x.executables) {
            j["executables"] = x.executables;
        }
    }

    inline void from_json(const json &j, locale_data_info &x) {
        x.available_locales = get_optional<std::vector<std::string>>(j, "available_locales");
        x.default_locale = get_optional<std::string>(j, "default_locale");
    }

    inline void to_json(json &j, const locale_data_info &x) {
        j = json::object();
        if (x.available_locales) {
            j["available_locales"] = x.available_locales;
        }
        if (x.default_locale) {
            j["default_locale"] = x.default_locale;
        }
    }

    inline void from_json(const json &j, configuration_metadata &x) {
        x.theme_manifest = get_optional<std::string>(j, "theme_manifest");
    }

    inline void to_json(json &j, const configuration_metadata &x) {
        j = json::object();
        if (x.theme_manifest) {
            j["theme_manifest"] = x.theme_manifest;
        }
    }

    inline void from_json(const json &j, region_data_info &x) {
        x.available_regions = get_optional<std::vector<std::string>>(j, "available_regions");
        x.default_region = get_optional<std::string>(j, "default_region");
    }

    inline void to_json(json &j, const region_data_info &x) {
        j = json::object();
        if (x.available_regions) {
            j["available_regions"] = x.available_regions;
        }
        if (x.default_region) {
            j["default_region"] = x.default_region;
        }
    }

    inline void from_json(const json &j, configuration &x) {
        x.allowed_http_fallback_hostnames = get_optional<std::vector<std::string>>(j, "allowed_http_fallback_hostnames");
        x.bundles_url = get_optional<std::string>(j, "bundles_url");
        x.dependencies = get_optional<std::vector<dependency>>(j, "dependencies");
        x.excluded_paths = get_optional<std::vector<std::string>>(j, "excluded_paths");
        x.id = get_optional<std::string>(j, "id");
        x.launchable_on_update_fail = get_optional<bool>(j, "launchable_on_update_fail");
        x.launcher = get_optional<launcher_info>(j, "launcher");
        x.locale_data = get_optional<locale_data_info>(j, "locale_data");
        x.metadata = get_optional<configuration_metadata>(j, "metadata");
        x.patch_notes_url = get_optional<std::string>(j, "patch_notes_url");
        x.patch_url = get_optional<std::string>(j, "patch_url");
        x.path = get_optional<std::string>(j, "path");
        x.region_data = get_optional<region_data_info>(j, "region_data");
        x.secondary_patchlines = get_optional<std::vector<configuration>>(j, "secondary_patchlines");
        x.seed_url = get_optional<std::string>(j, "seed_url");
        x.tags = get_optional<std::vector<json>>(j, "tags");
        x.url = get_optional<std::string>(j, "url");
    }

    inline void to_json(json &j, const configuration &x) {
        j = json::object();
        if (x.allowed_http_fallback_hostnames) {
            j["allowed_http_fallback_hostnames"] = x.allowed_http_fallback_hostnames;
        }
        if (x.bundles_url) {
            j["bundles_url"] = x.bundles_url;
        }
        if (x.dependencies) {
            j["dependencies"] = x.dependencies;
        }
        if (x.excluded_paths) {
            j["excluded_paths"] = x.excluded_paths;
        }
        if (x.id) {
            j["id"] = x.id;
        }
        if (x.launchable_on_update_fail) {
            j["launchable_on_update_fail"] = x.launchable_on_update_fail;
        }
        if (x.launcher) {
            j["launcher"] = x.launcher;
        }
        if (x.locale_data) {
            j["locale_data"] = x.locale_data;
        }
        if (x.metadata) {
            j["metadata"] = x.metadata;
        }
        if (x.patch_notes_url) {
            j["patch_notes_url"] = x.patch_notes_url;
        }
        if (x.patch_url) {
            j["patch_url"] = x.patch_url;
        }
        if (x.path) {
            j["path"] = x.path;
        }
        if (x.region_data) {
            j["region_data"] = x.region_data;
        }
        if (x.secondary_patchlines) {
            j["secondary_patchlines"] = x.secondary_patchlines;
        }
        if (x.seed_url) {
            j["seed_url"] = x.seed_url;
        }
        if (x.tags) {
            j["tags"] = x.tags;
        }
        if (x.url) {
            j["url"] = x.url;
        }
    }

    inline void from_json(const json &j, platform &x) {
        x.auto_patch = get_optional<bool>(j, "auto_patch");
        x.configurations = get_optional<std::vector<configuration>>(j, "configurations");
        x.deprecated_cloudfront_id = get_optional<std::string>(j, "deprecated_cloudfront_id");
        x.icon_path = get_optional<std::string>(j, "icon_path");
        x.install_dir = get_optional<std::string>(j, "install_dir");
        x.rogue_process_whitelist = get_optional<std::vector<std::string>>(j, "rogue_process_whitelist");
    }

    inline void to_json(json &j, const platform &x) {
        j = json::object();
        if (x.auto_patch) {
            j["auto_patch"] = x.auto_patch;
        }
        if (x.configurations) {
            j["configurations"] = x.configurations;
        }
        if (x.deprecated_cloudfront_id) {
            j["deprecated_cloudfront_id"] = x.deprecated_cloudfront_id;
        }
        if (x.icon_path) {
            j["icon_path"] = x.icon_path;
        }
        if (x.install_dir) {
            j["install_dir"] = x.install_dir;
        }
        if (x.rogue_process_whitelist) {
            j["rogue_process_whitelist"] = x.rogue_process_whitelist;
        }
    }

    inline void from_json(const json &j, keystone_products_patchlines &x) {
        x.metadata = get_optional<std::map<std::string, keystone_products_metadata>>(j, "metadata");
        x.platforms = get_optional<std::map<std::string, platform>>(j, "platforms");
        x.version = get_optional<std::string>(j, "version");
    }

    inline void to_json(json &j, const keystone_products_patchlines &x) {
        j = json::object();
        if (x.metadata) {
            j["metadata"] = x.metadata;
        }
        if (x.platforms) {
            j["platforms"] = x.platforms;
        }
        if (x.version) {
            j["version"] = x.version;
        }
    }
} // namespace yordle::sieve::models
