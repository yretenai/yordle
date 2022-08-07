#include <cassert>

#include <yordle/data/inibin_v2.hpp>

#define READ_INIBIN_KEYS                       \
    auto count = buffer.lpcast<uint16_t>(ptr); \
    auto keys  = buffer.lpcast<uint32_t>(ptr, count)

using namespace std;
using namespace dragon;

namespace yordle::data {
    inibin_v2::inibin_v2(Array<uint8_t> &buffer) {
        auto data_start = reinterpret_cast<uintptr_t>(&blob_length);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&flags) + sizeof(inibin_v2_flags);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        assert(buffer[0] == 2);

        buffer.copy(data_start, 1, EXPECTED_DATA_SIZE);

        assert(flags.unk == 0);

        uintptr_t ptr = 1 + EXPECTED_DATA_SIZE;
        if (flags.uint32) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<uint32_t>(ptr, count);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = values[i];
            }
        }

        if (flags.float32) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<float>(ptr, count);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = values[i];
            }
        }

        if (flags.float8) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<uint8_t>(ptr, count);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = (float) values[i] / 10.0f;
            }
        }

        if (flags.uint16) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<uint16_t>(ptr, count);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = values[i];
            }
        }

        if (flags.uint8) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<uint8_t>(ptr, count);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = values[i];
            }
        }

        if (flags.bool1) {
            READ_INIBIN_KEYS;
            auto bytes  = count / 8 + (count % 8 == 0 ? 0 : 1);
            auto values = buffer.lpcast<uint8_t>(ptr, bytes);
            for (auto i = 0; i < count; ++i) {
                auto bit            = count % 8;
                auto bit_index      = count / 8;
                properties[keys[i]] = (values[bit_index] & (1 << bit)) != 0;
            }
        }

        if (flags.uint8x3) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<uint8_t>(ptr, count * 3);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = array<uint8_t, 3> {{values[i * 3 + 0], values[i * 3 + 1], values[i * 3 + 2]}};
            }
        }

        if (flags.float32x3) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<float>(ptr, count * 3);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = array<float, 3> {{values[i * 3 + 0], values[i * 3 + 1], values[i * 3 + 2]}};
            }
        }

        if (flags.float8x2) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<uint8_t>(ptr, count * 2);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = array<float, 2> {{(float) values[i * 2 + 0] / 10.0f, (float) values[i * 2 + 1] / 10.0f}};
            }
        }

        if (flags.float32x2) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<float>(ptr, count * 2);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = array<float, 2> {{values[i * 2 + 0], values[i * 2 + 1]}};
            }
        }

        if (flags.float8x3) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<uint8_t>(ptr, count * 3);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = array<float, 3> {{(float) values[i * 3 + 0] / 10.0f, (float) values[i * 3 + 1] / 10.0f, (float) values[i * 3 + 2] / 10.0f}};
            }
        }

        if (flags.float32x4) {
            READ_INIBIN_KEYS;
            auto values = buffer.lpcast<float>(ptr, count * 4);
            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = array<float, 4> {{values[i * 4 + 0], values[i * 4 + 1], values[i * 4 + 2], values[i * 4 + 3]}};
            }
        }

        if (flags.string) {
            READ_INIBIN_KEYS;
            auto str_offsets = buffer.lpcast<uint16_t>(ptr, count);
            auto str_buf     = buffer.lpslice(ptr, blob_length);

            for (auto i = 0; i < count; ++i) {
                properties[keys[i]] = string(reinterpret_cast<const char *>(str_buf.data() + str_offsets[i]));
            }
        }
    }
} // namespace yordle::data
