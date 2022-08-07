#pragma once

namespace yordle::r3d {
#pragma pack(push, 1)
    using vec3 = struct VECTOR3 {
        float x = 0;
        float y = 0;
        float z = 0;
    };

    using bounding_box = struct BOUNDING_BOX {
        vec3 min {};
        vec3 max {};
    };

    using bounding_volume = struct BOUNDING_VOLUME {
        vec3 center {};
        float volume = 0;
    };
#pragma pack(pop)
} // namespace yordle::r3d
