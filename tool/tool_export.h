#pragma once

#ifdef _WIN32
#    define YORDLE_TOOL_EXPORT __declspec(dllexport)
#else
#    define YORDLE_TOOL_EXPORT __attribute__((visibility("default")))
#endif
