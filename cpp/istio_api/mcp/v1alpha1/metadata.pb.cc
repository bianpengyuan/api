// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mcp/v1alpha1/metadata.proto

#include "mcp/v1alpha1/metadata.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace istio {
namespace mcp {
namespace v1alpha1 {
class Metadata_LabelsEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Metadata_LabelsEntry_DoNotUse>
      _instance;
} _Metadata_LabelsEntry_DoNotUse_default_instance_;
class Metadata_AnnotationsEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Metadata_AnnotationsEntry_DoNotUse>
      _instance;
} _Metadata_AnnotationsEntry_DoNotUse_default_instance_;
class MetadataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Metadata>
      _instance;
} _Metadata_default_instance_;
}  // namespace v1alpha1
}  // namespace mcp
}  // namespace istio
namespace protobuf_mcp_2fv1alpha1_2fmetadata_2eproto {
void InitDefaultsMetadata_LabelsEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::istio::mcp::v1alpha1::_Metadata_LabelsEntry_DoNotUse_default_instance_;
    new (ptr) ::istio::mcp::v1alpha1::Metadata_LabelsEntry_DoNotUse();
  }
  ::istio::mcp::v1alpha1::Metadata_LabelsEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsMetadata_LabelsEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMetadata_LabelsEntry_DoNotUseImpl);
}

void InitDefaultsMetadata_AnnotationsEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::istio::mcp::v1alpha1::_Metadata_AnnotationsEntry_DoNotUse_default_instance_;
    new (ptr) ::istio::mcp::v1alpha1::Metadata_AnnotationsEntry_DoNotUse();
  }
  ::istio::mcp::v1alpha1::Metadata_AnnotationsEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsMetadata_AnnotationsEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMetadata_AnnotationsEntry_DoNotUseImpl);
}

void InitDefaultsMetadataImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaultsTimestamp();
  protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::InitDefaultsMetadata_LabelsEntry_DoNotUse();
  protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::InitDefaultsMetadata_AnnotationsEntry_DoNotUse();
  {
    void* ptr = &::istio::mcp::v1alpha1::_Metadata_default_instance_;
    new (ptr) ::istio::mcp::v1alpha1::Metadata();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::istio::mcp::v1alpha1::Metadata::InitAsDefaultInstance();
}

void InitDefaultsMetadata() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMetadataImpl);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_LabelsEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_LabelsEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_LabelsEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_LabelsEntry_DoNotUse, value_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_AnnotationsEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_AnnotationsEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_AnnotationsEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata_AnnotationsEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata, create_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata, labels_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::istio::mcp::v1alpha1::Metadata, annotations_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::istio::mcp::v1alpha1::Metadata_LabelsEntry_DoNotUse)},
  { 9, 16, sizeof(::istio::mcp::v1alpha1::Metadata_AnnotationsEntry_DoNotUse)},
  { 18, -1, sizeof(::istio::mcp::v1alpha1::Metadata)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::istio::mcp::v1alpha1::_Metadata_LabelsEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::istio::mcp::v1alpha1::_Metadata_AnnotationsEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::istio::mcp::v1alpha1::_Metadata_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "mcp/v1alpha1/metadata.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\033mcp/v1alpha1/metadata.proto\022\022istio.mcp"
      ".v1alpha1\032\024gogoproto/gogo.proto\032\037google/"
      "protobuf/timestamp.proto\032\034google/protobu"
      "f/struct.proto\"\273\002\n\010Metadata\022\014\n\004name\030\001 \001("
      "\t\022/\n\013create_time\030\002 \001(\0132\032.google.protobuf"
      ".Timestamp\022\017\n\007version\030\003 \001(\t\0228\n\006labels\030\004 "
      "\003(\0132(.istio.mcp.v1alpha1.Metadata.Labels"
      "Entry\022B\n\013annotations\030\005 \003(\0132-.istio.mcp.v"
      "1alpha1.Metadata.AnnotationsEntry\032-\n\013Lab"
      "elsEntry\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001"
      "\0322\n\020AnnotationsEntry\022\013\n\003key\030\001 \001(\t\022\r\n\005val"
      "ue\030\002 \001(\t:\0028\001B\037Z\031istio.io/api/mcp/v1alpha"
      "1\250\342\036\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 493);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mcp/v1alpha1/metadata.proto", &protobuf_RegisterTypes);
  ::protobuf_gogoproto_2fgogo_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fstruct_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_mcp_2fv1alpha1_2fmetadata_2eproto
namespace istio {
namespace mcp {
namespace v1alpha1 {

// ===================================================================

Metadata_LabelsEntry_DoNotUse::Metadata_LabelsEntry_DoNotUse() {}
Metadata_LabelsEntry_DoNotUse::Metadata_LabelsEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void Metadata_LabelsEntry_DoNotUse::MergeFrom(const Metadata_LabelsEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata Metadata_LabelsEntry_DoNotUse::GetMetadata() const {
  ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::file_level_metadata[0];
}
void Metadata_LabelsEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

Metadata_AnnotationsEntry_DoNotUse::Metadata_AnnotationsEntry_DoNotUse() {}
Metadata_AnnotationsEntry_DoNotUse::Metadata_AnnotationsEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void Metadata_AnnotationsEntry_DoNotUse::MergeFrom(const Metadata_AnnotationsEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata Metadata_AnnotationsEntry_DoNotUse::GetMetadata() const {
  ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::file_level_metadata[1];
}
void Metadata_AnnotationsEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void Metadata::InitAsDefaultInstance() {
  ::istio::mcp::v1alpha1::_Metadata_default_instance_._instance.get_mutable()->create_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
}
void Metadata::clear_create_time() {
  if (GetArenaNoVirtual() == NULL && create_time_ != NULL) {
    delete create_time_;
  }
  create_time_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Metadata::kNameFieldNumber;
const int Metadata::kCreateTimeFieldNumber;
const int Metadata::kVersionFieldNumber;
const int Metadata::kLabelsFieldNumber;
const int Metadata::kAnnotationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Metadata::Metadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::InitDefaultsMetadata();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:istio.mcp.v1alpha1.Metadata)
}
Metadata::Metadata(const Metadata& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  labels_.MergeFrom(from.labels_);
  annotations_.MergeFrom(from.annotations_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.version().size() > 0) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  if (from.has_create_time()) {
    create_time_ = new ::google::protobuf::Timestamp(*from.create_time_);
  } else {
    create_time_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:istio.mcp.v1alpha1.Metadata)
}

void Metadata::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  create_time_ = NULL;
  _cached_size_ = 0;
}

Metadata::~Metadata() {
  // @@protoc_insertion_point(destructor:istio.mcp.v1alpha1.Metadata)
  SharedDtor();
}

void Metadata::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete create_time_;
}

void Metadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Metadata::descriptor() {
  ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Metadata& Metadata::default_instance() {
  ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::InitDefaultsMetadata();
  return *internal_default_instance();
}

Metadata* Metadata::New(::google::protobuf::Arena* arena) const {
  Metadata* n = new Metadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Metadata::Clear() {
// @@protoc_insertion_point(message_clear_start:istio.mcp.v1alpha1.Metadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  labels_.Clear();
  annotations_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && create_time_ != NULL) {
    delete create_time_;
  }
  create_time_ = NULL;
  _internal_metadata_.Clear();
}

bool Metadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:istio.mcp.v1alpha1.Metadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mcp.v1alpha1.Metadata.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp create_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_create_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string version = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->version().data(), static_cast<int>(this->version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mcp.v1alpha1.Metadata.version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<string, string> labels = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          Metadata_LabelsEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              Metadata_LabelsEntry_DoNotUse,
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&labels_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mcp.v1alpha1.Metadata.LabelsEntry.key"));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), static_cast<int>(parser.value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mcp.v1alpha1.Metadata.LabelsEntry.value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<string, string> annotations = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          Metadata_AnnotationsEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              Metadata_AnnotationsEntry_DoNotUse,
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&annotations_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mcp.v1alpha1.Metadata.AnnotationsEntry.key"));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), static_cast<int>(parser.value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mcp.v1alpha1.Metadata.AnnotationsEntry.value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:istio.mcp.v1alpha1.Metadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:istio.mcp.v1alpha1.Metadata)
  return false;
#undef DO_
}

void Metadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:istio.mcp.v1alpha1.Metadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mcp.v1alpha1.Metadata.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // .google.protobuf.Timestamp create_time = 2;
  if (this->has_create_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->create_time_, output);
  }

  // string version = 3;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mcp.v1alpha1.Metadata.version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->version(), output);
  }

  // map<string, string> labels = 4;
  if (!this->labels().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.LabelsEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.LabelsEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->labels().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->labels().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->labels().begin();
          it != this->labels().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Metadata_LabelsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(labels_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Metadata_LabelsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->labels().begin();
          it != this->labels().end(); ++it) {
        entry.reset(labels_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  // map<string, string> annotations = 5;
  if (!this->annotations().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.AnnotationsEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.AnnotationsEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->annotations().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->annotations().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->annotations().begin();
          it != this->annotations().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Metadata_AnnotationsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(annotations_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Metadata_AnnotationsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->annotations().begin();
          it != this->annotations().end(); ++it) {
        entry.reset(annotations_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:istio.mcp.v1alpha1.Metadata)
}

::google::protobuf::uint8* Metadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:istio.mcp.v1alpha1.Metadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mcp.v1alpha1.Metadata.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // .google.protobuf.Timestamp create_time = 2;
  if (this->has_create_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, *this->create_time_, deterministic, target);
  }

  // string version = 3;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mcp.v1alpha1.Metadata.version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->version(), target);
  }

  // map<string, string> labels = 4;
  if (!this->labels().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.LabelsEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.LabelsEntry.value");
      }
    };

    if (deterministic &&
        this->labels().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->labels().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->labels().begin();
          it != this->labels().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Metadata_LabelsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(labels_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Metadata_LabelsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->labels().begin();
          it != this->labels().end(); ++it) {
        entry.reset(labels_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  // map<string, string> annotations = 5;
  if (!this->annotations().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.AnnotationsEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.mcp.v1alpha1.Metadata.AnnotationsEntry.value");
      }
    };

    if (deterministic &&
        this->annotations().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->annotations().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->annotations().begin();
          it != this->annotations().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Metadata_AnnotationsEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(annotations_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Metadata_AnnotationsEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->annotations().begin();
          it != this->annotations().end(); ++it) {
        entry.reset(annotations_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:istio.mcp.v1alpha1.Metadata)
  return target;
}

size_t Metadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:istio.mcp.v1alpha1.Metadata)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, string> labels = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->labels_size());
  {
    ::google::protobuf::scoped_ptr<Metadata_LabelsEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->labels().begin();
        it != this->labels().end(); ++it) {
      entry.reset(labels_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // map<string, string> annotations = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->annotations_size());
  {
    ::google::protobuf::scoped_ptr<Metadata_AnnotationsEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->annotations().begin();
        it != this->annotations().end(); ++it) {
      entry.reset(annotations_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string version = 3;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->version());
  }

  // .google.protobuf.Timestamp create_time = 2;
  if (this->has_create_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->create_time_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Metadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:istio.mcp.v1alpha1.Metadata)
  GOOGLE_DCHECK_NE(&from, this);
  const Metadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Metadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:istio.mcp.v1alpha1.Metadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:istio.mcp.v1alpha1.Metadata)
    MergeFrom(*source);
  }
}

void Metadata::MergeFrom(const Metadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:istio.mcp.v1alpha1.Metadata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  labels_.MergeFrom(from.labels_);
  annotations_.MergeFrom(from.annotations_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  if (from.has_create_time()) {
    mutable_create_time()->::google::protobuf::Timestamp::MergeFrom(from.create_time());
  }
}

void Metadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:istio.mcp.v1alpha1.Metadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Metadata::CopyFrom(const Metadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:istio.mcp.v1alpha1.Metadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Metadata::IsInitialized() const {
  return true;
}

void Metadata::Swap(Metadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Metadata::InternalSwap(Metadata* other) {
  using std::swap;
  labels_.Swap(&other->labels_);
  annotations_.Swap(&other->annotations_);
  name_.Swap(&other->name_);
  version_.Swap(&other->version_);
  swap(create_time_, other->create_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Metadata::GetMetadata() const {
  protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mcp_2fv1alpha1_2fmetadata_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1alpha1
}  // namespace mcp
}  // namespace istio

// @@protoc_insertion_point(global_scope)
