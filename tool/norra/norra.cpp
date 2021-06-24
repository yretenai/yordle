//
// Created by Lilith on 2021-06-19.
//

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>

#include <exception>
#include <string>

#include <nlohmann/json.hpp>

#include "meta.hpp"
#include "norra.hpp"

using namespace std;
using namespace dragon;
using namespace yordle;
using namespace nlohmann;

namespace norra {
    bool parse_configuration(int argc, char **argv, NorraConfiguration &norra, int &exit_code) {
        po::parser cli;

        cli["prop-field"]
            .description("hash list path for property fields (binfields)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    norra.hashes.fnv[cdtb::hashlist_target::prop_field] = make_shared<cdtb::fnvhashlist>(buffer);
                }
            });

        cli["prop-type"]
            .description("hash list path for property types (bintypes)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    norra.hashes.fnv[cdtb::hashlist_target::prop_type] = make_shared<cdtb::fnvhashlist>(buffer);
                }
            });

        auto &yordle_dir = cli["out"]
                               .abbreviation('o')
                               .description("path to yordle source dir")
                               .type(po::string)
                               .callback([&](const po::string_t &str) {
                                   norra.yordle_dir = str;
                               });

        auto &meta_file = cli["in"]
                              .abbreviation('i')
                              .description("path to meta json file")
                              .type(po::string)
                              .callback([&](const po::string_t &str) {
                                  norra.meta_file = str;
                              });

        auto &help = cli["help"]
                         .abbreviation('h')
                         .description("print this help screen");

        auto &version = cli["version"]
                            .abbreviation('v')
                            .description("print application version");

        auto &typeinfo = cli["typeinfo"]
                             .abbreviation('T')
                             .description("store type info in json output");

        if (!cli(argc, argv)) {
            cerr << "errored while parsing opts; aborting.\n";
            exit_code = -1;
            return false;
        }

        if (version.was_set()) {
            exit_code = 0;
            return false;
        }

        if (help.was_set()) {
            cout << cli << endl;
            exit_code = 0;
            return false;
        }

        if (!yordle_dir.was_set()) {
            cerr << "err: needs an output directory" << endl;
            exit_code = 2;
            return false;
        }

        if (!meta_file.was_set()) {
            cerr << "err: needs a meta file" << endl;
            exit_code = 3;
            return false;
        }

        return true;
    }

    string get_version_str() {
        return NORRA_VERSION_S;
    }

    int get_version() {
        return NORRA_VERSION;
    }
} // namespace norra

string get_type(const yordle::data::prop::prop_type &type, const norra::meta::property &prop, const shared_ptr<yordle::cdtb::hashlist<uint32_t>> &hashes, set<uint64_t> &defined) {
    switch (type) {
        default:
        case yordle::data::prop::prop_type::null:
            return "";
        case yordle::data::prop::prop_type::boolean:
        case yordle::data::prop::prop_type::bit:
            return "bool";
        case yordle::data::prop::prop_type::int8:
        case yordle::data::prop::prop_type::uint8:
        case yordle::data::prop::prop_type::int16:
        case yordle::data::prop::prop_type::uint16:
        case yordle::data::prop::prop_type::int32:
        case yordle::data::prop::prop_type::uint32:
        case yordle::data::prop::prop_type::int64:
        case yordle::data::prop::prop_type::uint64:
            return yordle::data::prop::prop_type_name[type] + "_t";
        case yordle::data::prop::prop_type::float32:
            return "float";
        case yordle::data::prop::prop_type::point:
            return "std::array<float, 2>";
        case yordle::data::prop::prop_type::vector:
            return "std::array<float, 3>";
        case yordle::data::prop::prop_type::quaternion:
            return "std::array<float, 4>";
        case yordle::data::prop::prop_type::matrix:
            return "std::array<float, 16>";
        case yordle::data::prop::prop_type::color:
            return "std::array<uint8_t, 4>";
        case yordle::data::prop::prop_type::string:
            return "std::string";
        case yordle::data::prop::prop_type::fnv_hash:
            return "yordle::data::meta::bin_fnv_hash";
        case yordle::data::prop::prop_type::reference: {
            if (defined.contains(prop.other_class)) {
                auto key_type = hashes->get_string(prop.other_class, "x");
                return "yordle::data::meta::bin_ref<yordle::data::meta::" + key_type + ">";
            } else {
                return "yordle::data::meta::bin_ref<yordle::data::meta::bin_class>";
            }
        }
        case yordle::data::prop::prop_type::xx_hash:
            return "yordle::data::meta::bin_xx_hash";
        case yordle::data::prop::prop_type::set:
        case yordle::data::prop::prop_type::unordered_set: {
            if (prop.container_i == nullptr) {
                throw std::exception("set but no container data");
            }
            auto key_type = get_type(prop.container_i->type, prop, hashes, defined);
            return "std::vector<" + key_type + ">";
        }
        case yordle::data::prop::prop_type::structure:
        case yordle::data::prop::prop_type::inline_structure: {
            if (defined.contains(prop.other_class)) {
                auto key_type = hashes->get_string(prop.other_class, "x");
                return "std::shared_ptr<yordle::data::meta::" + key_type + ">";
            } else {
                return "std::shared_ptr<yordle::data::meta::bin_class>";
            }
        }
        case yordle::data::prop::prop_type::optional: {
            if (prop.container_i == nullptr) {
                throw std::exception("optional but no container data");
            }
            auto key_type = get_type(prop.container_i->type, prop, hashes, defined);
            return "std::optional<" + key_type + ">";
        }
        case yordle::data::prop::prop_type::map: {
            if (prop.map_i == nullptr) {
                throw std::exception("set but no container data");
            }
            auto key_type   = get_type(prop.map_i->key, prop, hashes, defined);
            auto value_type = get_type(prop.map_i->value, prop, hashes, defined);
            return "std::map<" + key_type + ", " + value_type + ">";
        }
    }
}

int main(int argc, char **argv) {
    cout << "yordle version " << get_version_str() << endl;
    cout << "norra version " << norra::get_version_str() << endl;

    if (get_version() != YORDLE_VERSION) {
        cout << "warn: Yordle version is " << get_version() << " expected version " << YORDLE_VERSION << " (" << YORDLE_VERSION_S << ")! behavior is undefined!" << endl;
    }

    int exit_code = 0;
    norra::NorraConfiguration norra;
    if (!norra::parse_configuration(argc, argv, norra, exit_code)) {
        return exit_code;
    }

    string dispatch_file = "/// <auto-generated>\n\n"
                           "#include <yordle/data/meta/bin_dispatch.hpp>\n"
                           "#include <yordle/data/meta/bin_class_def.hpp>\n\n"
                           "using namespace std;\n"
                           "using namespace yordle::data::meta;\n\n"
                           "const map<uint32_t, function<prop_ret(prop_arg)>> yordle::data::meta::bin_dispatch::table {\n";

    auto meta_data = read_file(norra.meta_file);

    shared_ptr<norra::meta::meta> meta = nlohmann::json::parse(meta_data.to_string());
    if (meta == nullptr) {
        return 4;
    }

    norra.hashes.init_empty();

    auto field_hashes = norra.hashes.fnv[yordle::cdtb::hashlist_target::prop_field];
    auto type_hashes  = norra.hashes.fnv[yordle::cdtb::hashlist_target::prop_type];

    string bin_class_def = "/// <auto-generated>\n"
                           "#pragma once\n\n"
                           "#include <array>\n"
                           "#include <cstdint>\n"
                           "#include <memory>\n"
                           "#include <vector>\n"
                           "#include <string>\n\n"
                           "#include <yordle/yordle_export.h>\n"
                           "#include <yordle/data/meta/bin_class.hpp>\n"
                           "#include <yordle/data/meta/bin_ref.hpp>\n"
                           "#include <yordle/data/meta/bin_dispatch.hpp>\n"
                           "#include <yordle/data/prop/inline_structure_prop.hpp>\n"
                           "#include <yordle/data/prop/map_prop.hpp>\n"
                           "#include <yordle/data/prop/optional_prop.hpp>\n"
                           "#include <yordle/data/prop/primitive_array_prop.hpp>\n"
                           "#include <yordle/data/prop/primitive_prop.hpp>\n"
                           "#include <yordle/data/prop/set_prop.hpp>\n"
                           "#include <yordle/data/prop/string_prop.hpp>\n"
                           "#include <yordle/data/prop/unordered_set_prop.hpp>\n\n"
                           "namespace yordle::data::meta {\n";

    string bin_class_def_impl = "/// <auto-generated>\n"
                                "#include <yordle/data/meta/bin_class_def.hpp>\n"
                                "\n";

    set<uint64_t> done;
    done.emplace(0);
    uint64_t last_count = 0;
    while (last_count != done.size()) {
        last_count = done.size();
        for (const auto &def : meta->classes) {
            vector<uint32_t> parents;

            if (def.parent_class != 0) {
                parents.emplace_back(def.parent_class);
            }

            for (const auto &secondary_base : def.secondary_bases) {
                if (!secondary_base.empty() && secondary_base[0] != 0) {
                    parents.emplace_back(secondary_base[0]);
                }
            }

            bool safe = true;
            for (const auto &parent_id : parents) {
                if (!done.contains(parent_id)) {
                    safe = false;
                }
            }

            if (!safe) {
                continue;
            }

            if (!done.emplace(def.hash).second) {
                continue;
            }

            auto name = type_hashes->get_string(def.hash, "x");
            cout << name << "... ";
            cout.flush();

            dispatch_file += "    {" + to_string(def.hash) + "u, " + "[](prop_arg prop) { return make_shared<yordle::data::meta::" + name + ">(prop); }},\n";


            bin_class_def += "    class YORDLE_EXPORT ";
            bin_class_def += name;
            bin_class_def += " : ";
            if (!parents.empty()) {
                for (auto parent_id : parents) {
                    bin_class_def += "public " + type_hashes->get_string(parent_id, "x");
                    bin_class_def += ", ";
                }
            }
            bin_class_def += "public bin_class { \n"
                             "    public:\n"
                             "        explicit " +
                             name;
            bin_class_def += "(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);\n\n";
            bin_class_def += "        bool is_type(uint32_t type) override {\n"
                             "            return type == " +
                             to_string(def.hash);
            if (!parents.empty()) {
                for (auto parent_id : parents) {
                    bin_class_def += " || " + type_hashes->get_string(parent_id, "x");
                    bin_class_def += "::is_type(type)";
                }
            }
            bin_class_def += ";\n"
                             "        }\n\n";

            string class_def_header = "yordle::data::meta::" + name + "::";
            class_def_header += name + "(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : ";
            if (!parents.empty()) {
                auto sz = parents.size();
                for (auto i = 0; i < sz; ++i) {
                    class_def_header += "yordle::data::meta::" + type_hashes->get_string(parents[i], "x");
                    class_def_header += "(prop)";
                    if (i < sz - 1) {
                        class_def_header += ", ";
                    }
                }
            } else {
                class_def_header += "yordle::data::meta::bin_class(prop)";
            }
            class_def_header += " {\n"
                                "    if (prop == nullptr) {\n"
                                "        return;\n"
                                "    }\n";

            for (const auto &prop : def.properties) {
                auto prop_name = field_hashes->get_string(prop.hash, "x");
                if (prop_name == "template" || prop_name == "register") {
                    prop_name += "_";
                    prop_name += prop_name;
                }
                auto prop_type = get_type(prop.type, prop, type_hashes, done);

                bin_class_def += "        " + prop_type;
                bin_class_def += " ";
                bin_class_def += prop_name;
                switch (prop.type) {
                    case yordle::data::prop::prop_type::null:
                        // ?
                        break;
                    case yordle::data::prop::prop_type::boolean:
                    case yordle::data::prop::prop_type::bit:
                        bin_class_def += " = false;\n";
                        break;
                    case yordle::data::prop::prop_type::int8:
                    case yordle::data::prop::prop_type::uint8:
                    case yordle::data::prop::prop_type::int16:
                    case yordle::data::prop::prop_type::uint16:
                    case yordle::data::prop::prop_type::int32:
                    case yordle::data::prop::prop_type::uint32:
                    case yordle::data::prop::prop_type::int64:
                    case yordle::data::prop::prop_type::uint64:
                    case yordle::data::prop::prop_type::fnv_hash:
                    case yordle::data::prop::prop_type::xx_hash:
                        bin_class_def += " = 0;\n";
                        break;
                    case yordle::data::prop::prop_type::float32:
                        bin_class_def += " = 0.0;\n";
                        break;
                    case yordle::data::prop::prop_type::point:
                    case yordle::data::prop::prop_type::vector:
                    case yordle::data::prop::prop_type::quaternion:
                    case yordle::data::prop::prop_type::matrix:
                    case yordle::data::prop::prop_type::color:
                    case yordle::data::prop::prop_type::string:
                    case yordle::data::prop::prop_type::set:
                    case yordle::data::prop::prop_type::unordered_set:
                    case yordle::data::prop::prop_type::structure:
                    case yordle::data::prop::prop_type::inline_structure:
                    case yordle::data::prop::prop_type::optional:
                    case yordle::data::prop::prop_type::map:
                        bin_class_def += " {};\n";
                        break;
                    case yordle::data::prop::prop_type::reference:
                        bin_class_def += " {" + std::to_string(prop.other_class) + "u};\n";
                        break;
                }

                class_def_header += "\n    auto ptr_" + prop_name + " = prop->cast_prop<yordle::data::prop::" + yordle::data::prop::prop_type_name[prop.type] + "_prop>(" + to_string(prop.hash) + "u);\n";
                class_def_header += "    if (ptr_" + prop_name + " != nullptr) {\n";
                switch (prop.type) {
                    case yordle::data::prop::prop_type::null:
                        // ?
                        break;
                    case yordle::data::prop::prop_type::bit:
                        class_def_header += "        " + prop_name;
                        class_def_header += " = (ptr_" + prop_name;
                        class_def_header += "->value & " + to_string(prop.bitmask);
                        class_def_header += ") == " + to_string(prop.bitmask);
                        class_def_header += ";\n";
                    case yordle::data::prop::prop_type::boolean:
                    case yordle::data::prop::prop_type::int8:
                    case yordle::data::prop::prop_type::uint8:
                    case yordle::data::prop::prop_type::int16:
                    case yordle::data::prop::prop_type::uint16:
                    case yordle::data::prop::prop_type::int32:
                    case yordle::data::prop::prop_type::uint32:
                    case yordle::data::prop::prop_type::int64:
                    case yordle::data::prop::prop_type::uint64:
                    case yordle::data::prop::prop_type::fnv_hash:
                    case yordle::data::prop::prop_type::xx_hash:
                    case yordle::data::prop::prop_type::float32:
                    case yordle::data::prop::prop_type::point:
                    case yordle::data::prop::prop_type::vector:
                    case yordle::data::prop::prop_type::quaternion:
                    case yordle::data::prop::prop_type::matrix:
                    case yordle::data::prop::prop_type::color:
                    case yordle::data::prop::prop_type::string:
                        class_def_header += "        " + prop_name;
                        class_def_header += " = ptr_" + prop_name;
                        class_def_header += "->value;\n";
                        break;
                    case yordle::data::prop::prop_type::reference:
                        class_def_header += "        " + prop_name;
                        class_def_header += ".key = ptr_" + prop_name;
                        class_def_header += "->value;\n";
                        break;
                    case yordle::data::prop::prop_type::set:
                    case yordle::data::prop::prop_type::unordered_set:
                        class_def_header += "        for (const auto &entry : ptr_" + prop_name;
                        class_def_header += "->value) {\n";
                        class_def_header += "            auto ptr_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::" + yordle::data::prop::prop_type_name[prop.container_i->type] + "_prop>(entry);\n";
                        class_def_header += "            if (ptr_entry != nullptr) {\n";
                        switch (prop.container_i->type) {
                            case yordle::data::prop::prop_type::set:
                            case yordle::data::prop::prop_type::unordered_set:
                            case yordle::data::prop::prop_type::optional:
                            case yordle::data::prop::prop_type::map:
                                // never happens.
                                break;
                            case yordle::data::prop::prop_type::structure:
                            case yordle::data::prop::prop_type::inline_structure:
                                class_def_header += "                " + prop_name;
                                class_def_header += ".emplace_back(yordle::data::meta::deserialize<yordle::data::meta::" + type_hashes->get_string(prop.other_class, "x");
                                class_def_header += ">(ptr_entry, " + to_string(prop.other_class);
                                class_def_header += "u));\n";
                                break;
                            case yordle::data::prop::prop_type::reference:
                                class_def_header += "                " + prop_name;
                                if (done.contains(prop.other_class)) {
                                    class_def_header += ".push_back(yordle::data::meta::bin_ref<yordle::data::meta::" + type_hashes->get_string(prop.other_class, "x");
                                } else {
                                    class_def_header += ".push_back(yordle::data::meta::bin_ref<yordle::data::meta::bin_class";
                                }
                                class_def_header += ">(" + std::to_string(prop.other_class);
                                class_def_header += "u, ptr_entry->value));\n";
                                break;
                            default:
                                class_def_header += "                " + prop_name;
                                class_def_header += ".emplace_back(ptr_entry->value);\n";
                                break;
                        }
                        class_def_header += "            }\n";
                        class_def_header += "        }\n";
                        break;
                    case yordle::data::prop::prop_type::structure:
                    case yordle::data::prop::prop_type::inline_structure:
                        class_def_header += "        " + prop_name;
                        class_def_header += " = yordle::data::meta::deserialize<yordle::data::meta::" + type_hashes->get_string(prop.other_class, "x");
                        class_def_header += ">(ptr_" + prop_name;
                        class_def_header += ", " + to_string(prop.other_class);
                        class_def_header += "u);\n";
                        break;
                    case yordle::data::prop::prop_type::map:
                        class_def_header += "        for (const auto &pair : ptr_" + prop_name;
                        class_def_header += "->value) {\n";
                        class_def_header += "            auto ptr_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::" + yordle::data::prop::prop_type_name[prop.map_i->key] + "_prop>(pair.first);\n";
                        class_def_header += "            auto ptr_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::" + yordle::data::prop::prop_type_name[prop.map_i->value] + "_prop>(pair.second);\n";
                        class_def_header += "            if (ptr_key != nullptr && ptr_value != nullptr) {\n";
                        switch (prop.map_i->value) {
                            case yordle::data::prop::prop_type::set:
                            case yordle::data::prop::prop_type::unordered_set:
                            case yordle::data::prop::prop_type::optional:
                            case yordle::data::prop::prop_type::map:
                                // never happens.
                                break;
                            case yordle::data::prop::prop_type::structure:
                            case yordle::data::prop::prop_type::inline_structure:
                                class_def_header += "                " + prop_name;
                                class_def_header += ".emplace(ptr_key->value, yordle::data::meta::deserialize<yordle::data::meta::" + type_hashes->get_string(prop.other_class, "x");
                                class_def_header += ">(ptr_value, " + to_string(prop.other_class);
                                class_def_header += "u));\n";
                                break;
                            case yordle::data::prop::prop_type::reference:
                                class_def_header += "                " + prop_name;
                                if (done.contains(prop.other_class)) {
                                    class_def_header += "[ptr_key->value] = yordle::data::meta::bin_ref<yordle::data::meta::" + type_hashes->get_string(prop.other_class, "x");
                                } else {
                                    class_def_header += "[ptr_key->value] = yordle::data::meta::bin_ref<yordle::data::meta::bin_class";
                                }
                                class_def_header += ">(ptr_value->value, " + std::to_string(prop.other_class);
                                class_def_header += "u);\n";
                                break;
                            default:
                                class_def_header += "                " + prop_name;
                                class_def_header += ".emplace(ptr_key->value, ptr_value->value);\n";
                                break;
                        }
                        class_def_header += "            }\n";
                        class_def_header += "        }\n";
                        break;
                    case yordle::data::prop::prop_type::optional:
                        class_def_header += "    auto ptr_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::" + yordle::data::prop::prop_type_name[prop.container_i->type] + "_prop>(ptr_";
                        class_def_header += prop_name;
                        class_def_header += "->value);\n"
                                            "        if(ptr_entry != nullptr) {\n";
                        switch (prop.container_i->type) {
                            case yordle::data::prop::prop_type::set:
                            case yordle::data::prop::prop_type::unordered_set:
                            case yordle::data::prop::prop_type::optional:
                            case yordle::data::prop::prop_type::map:
                                // never happens.
                                break;
                            case yordle::data::prop::prop_type::structure:
                            case yordle::data::prop::prop_type::inline_structure:
                                class_def_header += "            " + prop_name;
                                class_def_header += " = yordle::data::meta::deserialize<yordle::data::meta::" + type_hashes->get_string(prop.other_class, "x");
                                class_def_header += ">(ptr_entry, " + to_string(prop.other_class);
                                class_def_header += "u);\n";
                                break;
                            case yordle::data::prop::prop_type::reference:
                                class_def_header += "            " + prop_name;
                                class_def_header += ".key = ptr_entry->value);\n";
                                break;
                            default:
                                class_def_header += "            " + prop_name;
                                class_def_header += " = ptr_entry->value;\n";
                                break;
                        }
                        class_def_header += "        }\n";
                        break;
                }
                class_def_header += "    }\n";
            }
            class_def_header += "}\n";
            bin_class_def += "    };\n\n";
            bin_class_def_impl += class_def_header + "\n";
            cout << "done!" << endl;
        }
    }

    dispatch_file += "};\n\n"
                     "/// </auto-generated>\n";
    auto dispatch_path   = norra.yordle_dir / "private" / "data" / "meta" / "bin_dispatch.cpp";
    auto dispatch_stream = ofstream(dispatch_path, ios::out);
    dispatch_stream << dispatch_file;
    dispatch_stream.flush();
    dispatch_stream.close();
    bin_class_def += "}\n\n";
    auto bin_def_path   = norra.yordle_dir / "public" / "yordle" / "data" / "meta" / "bin_class_def.hpp";
    auto bin_def_stream = ofstream(bin_def_path, ios::out);
    bin_def_stream << bin_class_def + "/// </auto-generated>\n";
    bin_def_stream.flush();
    bin_def_stream.close();
    auto bin_def_impl_path   = norra.yordle_dir / "private" / "data" / "meta" / "bin_class_def.cpp";
    auto bin_def_impl_stream = ofstream(bin_def_impl_path, ios::out);
    bin_def_impl_stream << bin_class_def_impl + "/// </auto-generated>\n";
    bin_def_impl_stream.flush();
    bin_def_impl_stream.close();
    return 0;
}
