// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mixer/adapter/model/v1beta1/template.proto

#ifndef PROTOBUF_INCLUDED_mixer_2fadapter_2fmodel_2fv1beta1_2ftemplate_2eproto
#define PROTOBUF_INCLUDED_mixer_2fadapter_2fmodel_2fv1beta1_2ftemplate_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2ftemplate_2eproto 

namespace protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2ftemplate_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2ftemplate_2eproto
namespace istio {
namespace mixer {
namespace adapter {
namespace model {
namespace v1beta1 {
class Template;
class TemplateDefaultTypeInternal;
extern TemplateDefaultTypeInternal _Template_default_instance_;
}  // namespace v1beta1
}  // namespace model
}  // namespace adapter
}  // namespace mixer
}  // namespace istio
namespace google {
namespace protobuf {
template<> ::istio::mixer::adapter::model::v1beta1::Template* Arena::CreateMaybeMessage<::istio::mixer::adapter::model::v1beta1::Template>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace istio {
namespace mixer {
namespace adapter {
namespace model {
namespace v1beta1 {

// ===================================================================

class Template : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:istio.mixer.adapter.model.v1beta1.Template) */ {
 public:
  Template();
  virtual ~Template();

  Template(const Template& from);

  inline Template& operator=(const Template& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Template(Template&& from) noexcept
    : Template() {
    *this = ::std::move(from);
  }

  inline Template& operator=(Template&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Template& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Template* internal_default_instance() {
    return reinterpret_cast<const Template*>(
               &_Template_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Template* other);
  friend void swap(Template& a, Template& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Template* New() const final {
    return CreateMaybeMessage<Template>(NULL);
  }

  Template* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Template>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Template& from);
  void MergeFrom(const Template& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Template* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string descriptor = 1;
  void clear_descriptor();
  static const int kDescriptorFieldNumber = 1;
  const ::std::string& descriptor() const;
  void set_descriptor(const ::std::string& value);
  #if LANG_CXX11
  void set_descriptor(::std::string&& value);
  #endif
  void set_descriptor(const char* value);
  void set_descriptor(const char* value, size_t size);
  ::std::string* mutable_descriptor();
  ::std::string* release_descriptor();
  void set_allocated_descriptor(::std::string* descriptor);

  // @@protoc_insertion_point(class_scope:istio.mixer.adapter.model.v1beta1.Template)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr descriptor_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2ftemplate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Template

// string descriptor = 1;
inline void Template::clear_descriptor() {
  descriptor_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Template::descriptor() const {
  // @@protoc_insertion_point(field_get:istio.mixer.adapter.model.v1beta1.Template.descriptor)
  return descriptor_.GetNoArena();
}
inline void Template::set_descriptor(const ::std::string& value) {
  
  descriptor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:istio.mixer.adapter.model.v1beta1.Template.descriptor)
}
#if LANG_CXX11
inline void Template::set_descriptor(::std::string&& value) {
  
  descriptor_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:istio.mixer.adapter.model.v1beta1.Template.descriptor)
}
#endif
inline void Template::set_descriptor(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  descriptor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:istio.mixer.adapter.model.v1beta1.Template.descriptor)
}
inline void Template::set_descriptor(const char* value, size_t size) {
  
  descriptor_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:istio.mixer.adapter.model.v1beta1.Template.descriptor)
}
inline ::std::string* Template::mutable_descriptor() {
  
  // @@protoc_insertion_point(field_mutable:istio.mixer.adapter.model.v1beta1.Template.descriptor)
  return descriptor_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Template::release_descriptor() {
  // @@protoc_insertion_point(field_release:istio.mixer.adapter.model.v1beta1.Template.descriptor)
  
  return descriptor_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Template::set_allocated_descriptor(::std::string* descriptor) {
  if (descriptor != NULL) {
    
  } else {
    
  }
  descriptor_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), descriptor);
  // @@protoc_insertion_point(field_set_allocated:istio.mixer.adapter.model.v1beta1.Template.descriptor)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace model
}  // namespace adapter
}  // namespace mixer
}  // namespace istio

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_mixer_2fadapter_2fmodel_2fv1beta1_2ftemplate_2eproto
