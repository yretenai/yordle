//
// Created by Lilith on 2021-06-23.
//

#pragma once

#ifndef CLEANUP_RELEASE
#    define CLEANUP_RELEASE(variable) if (variable != nullptr) { variable->Release(); } variable = nullptr
#endif // CLEANUP_RELEASE
