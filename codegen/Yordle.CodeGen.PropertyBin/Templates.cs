﻿namespace Yordle.CodeGen.PropertyBin; 

public static class Templates {
    // language=c++
    public const string BIN_DISPATCH_MAIN = @"
/// <auto-generated>

#include <yordle/data/meta/bin_dispatch.hpp>
%{BIN_REF}

using namespace std;
using namespace yordle::data::meta;

map<uint32_t, function<prop_ret(prop_arg)>> yordle::data::meta::bin_dispatch::table;

void yordle::data::meta::bin_dispatch::load_table() {
    if (!table.empty()) {
        return;
    }

    %{TABLE_ENTRIES}
}
";
    
    // language=c++
    public const string BIN_DISPATCH_ENTRY = @"table[%{HASH}] = [](prop_arg prop) { return make_shared<yordle::data::meta::%{NAME}>(prop); };";

    // language=c++
    public const string BIN_CLASS_DEF_MAIN = @"
/// <auto-generated>
#pragma once

%{STDLIB}

%{BASE_REF}
%{PROP_REF}
#include <yordle/yordle_export.h>

%{CLASS_IMPL_REF}

namespace yordle::data::meta {

%{CLASS_REF}

    struct YORDLE_EXPORT %{NAME} : %{BASE_CLASS} {
        explicit %{NAME}(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == %{HASH}%{TYPE_CHECK};
        }

%{PROPERTIES}
    }
}
";
    
    // language=c++
    public const string BIN_CLASS_DEF_BASE_REF = @"#include <yordle/data/meta/bin_defs/%{NAME}.hpp>";
    // language=c++
    public const string BIN_CLASS_DEF_PROP_REF = @"#include <yordle/data/prop/%{NAME}_prop.hpp>";
    // language=c++
    public const string BIN_CLASS_DEF_BIN_REF = @"#include <yordle/data/meta/bin_ref.hpp>";
    
    // language=c++
    public const string BIN_CLASS_DEF_STDLIB_REF = @"#include <%{NAME}>";
    
    // language=c++
    public const string BIN_CLASS_DEF_CLASS_REF = @"    struct %{REF};";
    
    // language=c++
    public const string BIN_CLASS_DEF_CLASS_IS_TYPE = @"|| %{BASE_CLASS}.is_type(type)";
    
    // language=c++
    public const string BIN_CLASS_DEF_CLASS_PROPERTY = @"        %{TYPE} %{NAME} = %{DEFAULT}";

    // language=c++
    public const string BIN_CLASS_IMPL = @"
/// <auto-generated>
#include <yordle/data/meta/bin_defs/%{NAME}.hpp>
%{CLASS_REF}

yordle::data::meta::%{NAME}::%{NAME}(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::%{BASE_CLASS}(prop) {
    if(prop == nullptr) {
        return;
    }

%{PROPERTIES}
}
";

    // language=c++
    public const string BIN_CLASS_IMPL_VALUE = @"
auto ptr_%{LEVEL}_%{NAME} = prop->cast_prop<%{TYPE}>(%{HASH});
if(ptr_%{LEVEL}_%{NAME} != nullptr) {
    %{SUB_LOGIC}
}
";

    // language=c++
    public const string BIN_CLASS_IMPL_VALUE_SUB_LOGIC = @"%{NAME} = ptr_%{PTR_NAME}->value;";

    // language=c++
    public const string BIN_CLASS_IMPL_SET = @"
auto ptr_%{LEVEL}_%{NAME} = prop->cast_prop<%{TYPE}>(%{HASH});
if(ptr_%{LEVEL}_%{NAME} != nullptr) {
    for(const auto &set_%{LEVEL}_%{NAME}_entry : ptr_%{LEVEL}_%{NAME}->value) {
        auto ptr_%{LEVEL}_%{NAME}_entry = yordle::data::prop::empty_prop::cast_prop<%{VALUE_TYPE}>(set_%{LEVEL}_%{NAME}_entry);
        if(ptr_%{LEVEL}_%{NAME}_entry != nullptr) {
            %{SUB_LOGIC}
        }
    }
}
";

    // language=c++
    public const string BIN_CLASS_IMPL_MAP = @"
auto ptr_%{LEVEL}_%{NAME} = prop->cast_prop<%{TYPE}>(%{HASH});
if(ptr_%{LEVEL}_%{NAME} != nullptr) {
    for(const auto &set_%{LEVEL}_%{NAME}_pair : ptr_%{LEVEL}_%{NAME}->value) {
        auto ptr_%{LEVEL}_%{NAME}_key = yordle::data::prop::empty_prop::cast_prop<%{KEY_TYPE}>(set_%{LEVEL}_%{NAME}_pair.first);
        auto ptr_%{LEVEL}_%{NAME}_value = yordle::data::prop::empty_prop::cast_prop<%{VALUE_TYPE}>(set_%{LEVEL}_%{NAME}_pair.second);
        if(ptr_%{LEVEL}_%{NAME}_key != nullptr && ptr_%{LEVEL}_%{NAME}_value != nullptr) {
            %{SUB_LOGIC}
        }
    }
}
";
}