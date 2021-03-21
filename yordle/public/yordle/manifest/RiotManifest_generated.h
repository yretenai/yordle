// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RIOTMANIFEST_YORDLE_MANIFEST_GENERATED_H_
#define FLATBUFFERS_GENERATED_RIOTMANIFEST_YORDLE_MANIFEST_GENERATED_H_

#include "flatbuffers/flatbuffers.h"

namespace yordle {
namespace manifest {
namespace generated {

struct RiotManifest;
struct RiotManifestBuilder;

struct RiotManifestChunk;
struct RiotManifestChunkBuilder;

struct RiotManifestBlock;
struct RiotManifestBlockBuilder;

struct RiotManifestLanguage;
struct RiotManifestLanguageBuilder;

struct RiotManifestFile;
struct RiotManifestFileBuilder;

struct RiotManifestDirectory;
struct RiotManifestDirectoryBuilder;

struct RiotManifest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RiotManifestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CHUNKS = 4,
    VT_LANGUAGES = 6,
    VT_FILES = 8,
    VT_DIRECTORIES = 10,
    VT_UNKNOWN1 = 12,
    VT_UNKNOWN2 = 14
  };
  const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestChunk>> *chunks() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestChunk>> *>(VT_CHUNKS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestLanguage>> *languages() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestLanguage>> *>(VT_LANGUAGES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestFile>> *files() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestFile>> *>(VT_FILES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestDirectory>> *directories() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestDirectory>> *>(VT_DIRECTORIES);
  }
  const flatbuffers::String *unknown1() const {
    return GetPointer<const flatbuffers::String *>(VT_UNKNOWN1);
  }
  const flatbuffers::Vector<uint32_t> *unknown2() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_UNKNOWN2);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CHUNKS) &&
           verifier.VerifyVector(chunks()) &&
           verifier.VerifyVectorOfTables(chunks()) &&
           VerifyOffset(verifier, VT_LANGUAGES) &&
           verifier.VerifyVector(languages()) &&
           verifier.VerifyVectorOfTables(languages()) &&
           VerifyOffset(verifier, VT_FILES) &&
           verifier.VerifyVector(files()) &&
           verifier.VerifyVectorOfTables(files()) &&
           VerifyOffset(verifier, VT_DIRECTORIES) &&
           verifier.VerifyVector(directories()) &&
           verifier.VerifyVectorOfTables(directories()) &&
           VerifyOffset(verifier, VT_UNKNOWN1) &&
           verifier.VerifyString(unknown1()) &&
           VerifyOffset(verifier, VT_UNKNOWN2) &&
           verifier.VerifyVector(unknown2()) &&
           verifier.EndTable();
  }
};

struct RiotManifestBuilder {
  typedef RiotManifest Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_chunks(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestChunk>>> chunks) {
    fbb_.AddOffset(RiotManifest::VT_CHUNKS, chunks);
  }
  void add_languages(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestLanguage>>> languages) {
    fbb_.AddOffset(RiotManifest::VT_LANGUAGES, languages);
  }
  void add_files(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestFile>>> files) {
    fbb_.AddOffset(RiotManifest::VT_FILES, files);
  }
  void add_directories(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestDirectory>>> directories) {
    fbb_.AddOffset(RiotManifest::VT_DIRECTORIES, directories);
  }
  void add_unknown1(flatbuffers::Offset<flatbuffers::String> unknown1) {
    fbb_.AddOffset(RiotManifest::VT_UNKNOWN1, unknown1);
  }
  void add_unknown2(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> unknown2) {
    fbb_.AddOffset(RiotManifest::VT_UNKNOWN2, unknown2);
  }
  explicit RiotManifestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<RiotManifest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RiotManifest>(end);
    return o;
  }
};

inline flatbuffers::Offset<RiotManifest> CreateRiotManifest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestChunk>>> chunks = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestLanguage>>> languages = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestFile>>> files = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestDirectory>>> directories = 0,
    flatbuffers::Offset<flatbuffers::String> unknown1 = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> unknown2 = 0) {
  RiotManifestBuilder builder_(_fbb);
  builder_.add_unknown2(unknown2);
  builder_.add_unknown1(unknown1);
  builder_.add_directories(directories);
  builder_.add_files(files);
  builder_.add_languages(languages);
  builder_.add_chunks(chunks);
  return builder_.Finish();
}

inline flatbuffers::Offset<RiotManifest> CreateRiotManifestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestChunk>> *chunks = nullptr,
    const std::vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestLanguage>> *languages = nullptr,
    const std::vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestFile>> *files = nullptr,
    const std::vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestDirectory>> *directories = nullptr,
    const char *unknown1 = nullptr,
    const std::vector<uint32_t> *unknown2 = nullptr) {
  auto chunks__ = chunks ? _fbb.CreateVector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestChunk>>(*chunks) : 0;
  auto languages__ = languages ? _fbb.CreateVector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestLanguage>>(*languages) : 0;
  auto files__ = files ? _fbb.CreateVector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestFile>>(*files) : 0;
  auto directories__ = directories ? _fbb.CreateVector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestDirectory>>(*directories) : 0;
  auto unknown1__ = unknown1 ? _fbb.CreateString(unknown1) : 0;
  auto unknown2__ = unknown2 ? _fbb.CreateVector<uint32_t>(*unknown2) : 0;
  return yordle::manifest::generated::CreateRiotManifest(
      _fbb,
      chunks__,
      languages__,
      files__,
      directories__,
      unknown1__,
      unknown2__);
}

struct RiotManifestChunk FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RiotManifestChunkBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CHUNK_ID = 4,
    VT_BLOCKS = 6
  };
  uint64_t chunk_id() const {
    return GetField<uint64_t>(VT_CHUNK_ID, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestBlock>> *blocks() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestBlock>> *>(VT_BLOCKS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_CHUNK_ID) &&
           VerifyOffset(verifier, VT_BLOCKS) &&
           verifier.VerifyVector(blocks()) &&
           verifier.VerifyVectorOfTables(blocks()) &&
           verifier.EndTable();
  }
};

struct RiotManifestChunkBuilder {
  typedef RiotManifestChunk Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_chunk_id(uint64_t chunk_id) {
    fbb_.AddElement<uint64_t>(RiotManifestChunk::VT_CHUNK_ID, chunk_id, 0);
  }
  void add_blocks(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestBlock>>> blocks) {
    fbb_.AddOffset(RiotManifestChunk::VT_BLOCKS, blocks);
  }
  explicit RiotManifestChunkBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<RiotManifestChunk> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RiotManifestChunk>(end);
    return o;
  }
};

inline flatbuffers::Offset<RiotManifestChunk> CreateRiotManifestChunk(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t chunk_id = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestBlock>>> blocks = 0) {
  RiotManifestChunkBuilder builder_(_fbb);
  builder_.add_chunk_id(chunk_id);
  builder_.add_blocks(blocks);
  return builder_.Finish();
}

inline flatbuffers::Offset<RiotManifestChunk> CreateRiotManifestChunkDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t chunk_id = 0,
    const std::vector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestBlock>> *blocks = nullptr) {
  auto blocks__ = blocks ? _fbb.CreateVector<flatbuffers::Offset<yordle::manifest::generated::RiotManifestBlock>>(*blocks) : 0;
  return yordle::manifest::generated::CreateRiotManifestChunk(
      _fbb,
      chunk_id,
      blocks__);
}

struct RiotManifestBlock FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RiotManifestBlockBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BLOCK_ID = 4,
    VT_COMPRESSED_SIZE = 6,
    VT_SIZE = 8
  };
  uint64_t block_id() const {
    return GetField<uint64_t>(VT_BLOCK_ID, 0);
  }
  uint32_t compressed_size() const {
    return GetField<uint32_t>(VT_COMPRESSED_SIZE, 0);
  }
  uint32_t size() const {
    return GetField<uint32_t>(VT_SIZE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_BLOCK_ID) &&
           VerifyField<uint32_t>(verifier, VT_COMPRESSED_SIZE) &&
           VerifyField<uint32_t>(verifier, VT_SIZE) &&
           verifier.EndTable();
  }
};

struct RiotManifestBlockBuilder {
  typedef RiotManifestBlock Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_block_id(uint64_t block_id) {
    fbb_.AddElement<uint64_t>(RiotManifestBlock::VT_BLOCK_ID, block_id, 0);
  }
  void add_compressed_size(uint32_t compressed_size) {
    fbb_.AddElement<uint32_t>(RiotManifestBlock::VT_COMPRESSED_SIZE, compressed_size, 0);
  }
  void add_size(uint32_t size) {
    fbb_.AddElement<uint32_t>(RiotManifestBlock::VT_SIZE, size, 0);
  }
  explicit RiotManifestBlockBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<RiotManifestBlock> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RiotManifestBlock>(end);
    return o;
  }
};

inline flatbuffers::Offset<RiotManifestBlock> CreateRiotManifestBlock(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t block_id = 0,
    uint32_t compressed_size = 0,
    uint32_t size = 0) {
  RiotManifestBlockBuilder builder_(_fbb);
  builder_.add_block_id(block_id);
  builder_.add_size(size);
  builder_.add_compressed_size(compressed_size);
  return builder_.Finish();
}

struct RiotManifestLanguage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RiotManifestLanguageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LANGUAGE_ID = 4,
    VT_NAME = 6
  };
  int8_t language_id() const {
    return GetField<int8_t>(VT_LANGUAGE_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_LANGUAGE_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
};

struct RiotManifestLanguageBuilder {
  typedef RiotManifestLanguage Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_language_id(int8_t language_id) {
    fbb_.AddElement<int8_t>(RiotManifestLanguage::VT_LANGUAGE_ID, language_id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(RiotManifestLanguage::VT_NAME, name);
  }
  explicit RiotManifestLanguageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<RiotManifestLanguage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RiotManifestLanguage>(end);
    return o;
  }
};

inline flatbuffers::Offset<RiotManifestLanguage> CreateRiotManifestLanguage(
    flatbuffers::FlatBufferBuilder &_fbb,
    int8_t language_id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  RiotManifestLanguageBuilder builder_(_fbb);
  builder_.add_name(name);
  builder_.add_language_id(language_id);
  return builder_.Finish();
}

inline flatbuffers::Offset<RiotManifestLanguage> CreateRiotManifestLanguageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int8_t language_id = 0,
    const char *name = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return yordle::manifest::generated::CreateRiotManifestLanguage(
      _fbb,
      language_id,
      name__);
}

struct RiotManifestFile FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RiotManifestFileBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FILE_ID = 4,
    VT_DIRECTORY_ID = 6,
    VT_SIZE = 8,
    VT_NAME = 10,
    VT_LANGUAGE_FLAGS = 12,
    VT_UNKNOWN3 = 14,
    VT_UNKNOWN4 = 16,
    VT_BLOCK_IDS = 18,
    VT_UNKNOWN6 = 20,
    VT_UNKNOWN7 = 22,
    VT_UNKNOWN8 = 24,
    VT_UNKNOWN9 = 26,
    VT_UNKNOWN10 = 28
  };
  uint64_t file_id() const {
    return GetField<uint64_t>(VT_FILE_ID, 0);
  }
  uint64_t directory_id() const {
    return GetField<uint64_t>(VT_DIRECTORY_ID, 0);
  }
  uint32_t size() const {
    return GetField<uint32_t>(VT_SIZE, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  uint32_t language_flags() const {
    return GetField<uint32_t>(VT_LANGUAGE_FLAGS, 0);
  }
  uint32_t unknown3() const {
    return GetField<uint32_t>(VT_UNKNOWN3, 0);
  }
  uint32_t unknown4() const {
    return GetField<uint32_t>(VT_UNKNOWN4, 0);
  }
  const flatbuffers::Vector<uint64_t> *block_ids() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_BLOCK_IDS);
  }
  uint32_t unknown6() const {
    return GetField<uint32_t>(VT_UNKNOWN6, 0);
  }
  const flatbuffers::Vector<uint32_t> *unknown7() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_UNKNOWN7);
  }
  uint32_t unknown8() const {
    return GetField<uint32_t>(VT_UNKNOWN8, 0);
  }
  uint16_t unknown9() const {
    return GetField<uint16_t>(VT_UNKNOWN9, 0);
  }
  uint8_t unknown10() const {
    return GetField<uint8_t>(VT_UNKNOWN10, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_FILE_ID) &&
           VerifyField<uint64_t>(verifier, VT_DIRECTORY_ID) &&
           VerifyField<uint32_t>(verifier, VT_SIZE) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint32_t>(verifier, VT_LANGUAGE_FLAGS) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN3) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN4) &&
           VerifyOffset(verifier, VT_BLOCK_IDS) &&
           verifier.VerifyVector(block_ids()) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN6) &&
           VerifyOffset(verifier, VT_UNKNOWN7) &&
           verifier.VerifyVector(unknown7()) &&
           VerifyField<uint32_t>(verifier, VT_UNKNOWN8) &&
           VerifyField<uint16_t>(verifier, VT_UNKNOWN9) &&
           VerifyField<uint8_t>(verifier, VT_UNKNOWN10) &&
           verifier.EndTable();
  }
};

struct RiotManifestFileBuilder {
  typedef RiotManifestFile Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_file_id(uint64_t file_id) {
    fbb_.AddElement<uint64_t>(RiotManifestFile::VT_FILE_ID, file_id, 0);
  }
  void add_directory_id(uint64_t directory_id) {
    fbb_.AddElement<uint64_t>(RiotManifestFile::VT_DIRECTORY_ID, directory_id, 0);
  }
  void add_size(uint32_t size) {
    fbb_.AddElement<uint32_t>(RiotManifestFile::VT_SIZE, size, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(RiotManifestFile::VT_NAME, name);
  }
  void add_language_flags(uint32_t language_flags) {
    fbb_.AddElement<uint32_t>(RiotManifestFile::VT_LANGUAGE_FLAGS, language_flags, 0);
  }
  void add_unknown3(uint32_t unknown3) {
    fbb_.AddElement<uint32_t>(RiotManifestFile::VT_UNKNOWN3, unknown3, 0);
  }
  void add_unknown4(uint32_t unknown4) {
    fbb_.AddElement<uint32_t>(RiotManifestFile::VT_UNKNOWN4, unknown4, 0);
  }
  void add_block_ids(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> block_ids) {
    fbb_.AddOffset(RiotManifestFile::VT_BLOCK_IDS, block_ids);
  }
  void add_unknown6(uint32_t unknown6) {
    fbb_.AddElement<uint32_t>(RiotManifestFile::VT_UNKNOWN6, unknown6, 0);
  }
  void add_unknown7(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> unknown7) {
    fbb_.AddOffset(RiotManifestFile::VT_UNKNOWN7, unknown7);
  }
  void add_unknown8(uint32_t unknown8) {
    fbb_.AddElement<uint32_t>(RiotManifestFile::VT_UNKNOWN8, unknown8, 0);
  }
  void add_unknown9(uint16_t unknown9) {
    fbb_.AddElement<uint16_t>(RiotManifestFile::VT_UNKNOWN9, unknown9, 0);
  }
  void add_unknown10(uint8_t unknown10) {
    fbb_.AddElement<uint8_t>(RiotManifestFile::VT_UNKNOWN10, unknown10, 0);
  }
  explicit RiotManifestFileBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<RiotManifestFile> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RiotManifestFile>(end);
    return o;
  }
};

inline flatbuffers::Offset<RiotManifestFile> CreateRiotManifestFile(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t file_id = 0,
    uint64_t directory_id = 0,
    uint32_t size = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    uint32_t language_flags = 0,
    uint32_t unknown3 = 0,
    uint32_t unknown4 = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> block_ids = 0,
    uint32_t unknown6 = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> unknown7 = 0,
    uint32_t unknown8 = 0,
    uint16_t unknown9 = 0,
    uint8_t unknown10 = 0) {
  RiotManifestFileBuilder builder_(_fbb);
  builder_.add_directory_id(directory_id);
  builder_.add_file_id(file_id);
  builder_.add_unknown8(unknown8);
  builder_.add_unknown7(unknown7);
  builder_.add_unknown6(unknown6);
  builder_.add_block_ids(block_ids);
  builder_.add_unknown4(unknown4);
  builder_.add_unknown3(unknown3);
  builder_.add_language_flags(language_flags);
  builder_.add_name(name);
  builder_.add_size(size);
  builder_.add_unknown9(unknown9);
  builder_.add_unknown10(unknown10);
  return builder_.Finish();
}

inline flatbuffers::Offset<RiotManifestFile> CreateRiotManifestFileDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t file_id = 0,
    uint64_t directory_id = 0,
    uint32_t size = 0,
    const char *name = nullptr,
    uint32_t language_flags = 0,
    uint32_t unknown3 = 0,
    uint32_t unknown4 = 0,
    const std::vector<uint64_t> *block_ids = nullptr,
    uint32_t unknown6 = 0,
    const std::vector<uint32_t> *unknown7 = nullptr,
    uint32_t unknown8 = 0,
    uint16_t unknown9 = 0,
    uint8_t unknown10 = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto block_ids__ = block_ids ? _fbb.CreateVector<uint64_t>(*block_ids) : 0;
  auto unknown7__ = unknown7 ? _fbb.CreateVector<uint32_t>(*unknown7) : 0;
  return yordle::manifest::generated::CreateRiotManifestFile(
      _fbb,
      file_id,
      directory_id,
      size,
      name__,
      language_flags,
      unknown3,
      unknown4,
      block_ids__,
      unknown6,
      unknown7__,
      unknown8,
      unknown9,
      unknown10);
}

struct RiotManifestDirectory FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RiotManifestDirectoryBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_PARENT_ID = 6,
    VT_NAME = 8
  };
  uint64_t id() const {
    return GetField<uint64_t>(VT_ID, 0);
  }
  uint64_t parent_id() const {
    return GetField<uint64_t>(VT_PARENT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_ID) &&
           VerifyField<uint64_t>(verifier, VT_PARENT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
};

struct RiotManifestDirectoryBuilder {
  typedef RiotManifestDirectory Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint64_t id) {
    fbb_.AddElement<uint64_t>(RiotManifestDirectory::VT_ID, id, 0);
  }
  void add_parent_id(uint64_t parent_id) {
    fbb_.AddElement<uint64_t>(RiotManifestDirectory::VT_PARENT_ID, parent_id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(RiotManifestDirectory::VT_NAME, name);
  }
  explicit RiotManifestDirectoryBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<RiotManifestDirectory> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RiotManifestDirectory>(end);
    return o;
  }
};

inline flatbuffers::Offset<RiotManifestDirectory> CreateRiotManifestDirectory(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t id = 0,
    uint64_t parent_id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  RiotManifestDirectoryBuilder builder_(_fbb);
  builder_.add_parent_id(parent_id);
  builder_.add_id(id);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<RiotManifestDirectory> CreateRiotManifestDirectoryDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t id = 0,
    uint64_t parent_id = 0,
    const char *name = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return yordle::manifest::generated::CreateRiotManifestDirectory(
      _fbb,
      id,
      parent_id,
      name__);
}

inline const yordle::manifest::generated::RiotManifest *GetRiotManifest(const void *buf) {
  return flatbuffers::GetRoot<yordle::manifest::generated::RiotManifest>(buf);
}

inline const yordle::manifest::generated::RiotManifest *GetSizePrefixedRiotManifest(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<yordle::manifest::generated::RiotManifest>(buf);
}

inline bool VerifyRiotManifestBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<yordle::manifest::generated::RiotManifest>(nullptr);
}

inline bool VerifySizePrefixedRiotManifestBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<yordle::manifest::generated::RiotManifest>(nullptr);
}

inline void FinishRiotManifestBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<yordle::manifest::generated::RiotManifest> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRiotManifestBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<yordle::manifest::generated::RiotManifest> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace generated
}  // namespace manifest
}  // namespace yordle

#endif  // FLATBUFFERS_GENERATED_RIOTMANIFEST_YORDLE_MANIFEST_GENERATED_H_
