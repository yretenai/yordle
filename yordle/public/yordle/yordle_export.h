#pragma once

#ifdef _WIN32
#    ifdef _WIN32_CLANG
#        include "yordle_export_clang.a.h"
#    else
#        include "yordle_export_win.a.h"
#    endif
#else
#    include "yordle_export_linux.a.h"
#endif
