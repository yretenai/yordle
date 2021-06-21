# RiotManifest

RMAN files are flatbuffer objects, to compile the RiotManifest.fbs file into the header file use the following command:

```sh
flatc -o yordle/public/yordle/manifest yordle/public/yordle/manifest/RiotManifest.fbs \
    --cpp --gen-object-api --keep-prefix --gen-mutable --cpp-std c++17                \ 
    --cpp-static-reflection --cpp-include "array"
```
