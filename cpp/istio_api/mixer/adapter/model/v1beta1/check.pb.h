// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mixer/adapter/model/v1beta1/check.proto

#ifndef PROTOBUF_mixer_2fadapter_2fmodel_2fv1beta1_2fcheck_2eproto__INCLUDED
#define PROTOBUF_mixer_2fadapter_2fmodel_2fv1beta1_2fcheck_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "gogoproto/gogo.pb.h"
#include <google/protobuf/duration.pb.h>
#include "google/rpc/status.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2fcheck_2eproto {
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
void InitDefaultsCheckResultImpl();
void InitDefaultsCheckResult();
inline void InitDefaults() {
  InitDefaultsCheckResult();
}
}  // namespace protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2fcheck_2eproto
namespace istio {
namespace mixer {
namespace adapter {
namespace model {
namespace v1beta1 {
class CheckResult;
class CheckResultDefaultTypeInternal;
extern CheckResultDefaultTypeInternal _CheckResult_default_instance_;
}  // namespace v1beta1
}  // namespace model
}  // namespace adapter
}  // namespace mixer
}  // namespace istio
namespace istio {
namespace mixer {
namespace adapter {
namespace model {
namespace v1beta1 {

// ===================================================================

class CheckResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:istio.mixer.adapter.model.v1beta1.CheckResult) */ {
 public:
  CheckResult();
  virtual ~CheckResult();

  CheckResult(const CheckResult& from);

  inline CheckResult& operator=(const CheckResult& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CheckResult(CheckResult&& from) noexcept
    : CheckResult() {
    *this = ::std::move(from);
  }

  inline CheckResult& operator=(CheckResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CheckResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CheckResult* internal_default_instance() {
    return reinterpret_cast<const CheckResult*>(
               &_CheckResult_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CheckResult* other);
  friend void swap(CheckResult& a, CheckResult& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CheckResult* New() const PROTOBUF_FINAL { return New(NULL); }

  CheckResult* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CheckResult& from);
  void MergeFrom(const CheckResult& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CheckResult* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.rpc.Status status = 1 [(.gogoproto.nullable) = false];
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  const ::google::rpc::Status& status() const;
  ::google::rpc::Status* release_status();
  ::google::rpc::Status* mutable_status();
  void set_allocated_status(::google::rpc::Status* status);

  // .google.protobuf.Duration valid_duration = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  bool has_valid_duration() const;
  void clear_valid_duration();
  static const int kValidDurationFieldNumber = 2;
  const ::google::protobuf::Duration& valid_duration() const;
  ::google::protobuf::Duration* release_valid_duration();
  ::google::protobuf::Duration* mutable_valid_duration();
  void set_allocated_valid_duration(::google::protobuf::Duration* valid_duration);

  // int32 valid_use_count = 3;
  void clear_valid_use_count();
  static const int kValidUseCountFieldNumber = 3;
  ::google::protobuf::int32 valid_use_count() const;
  void set_valid_use_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:istio.mixer.adapter.model.v1beta1.CheckResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::rpc::Status* status_;
  ::google::protobuf::Duration* valid_duration_;
  ::google::protobuf::int32 valid_use_count_;
  mutable int _cached_size_;
  friend struct ::protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2fcheck_2eproto::TableStruct;
  friend void ::protobuf_mixer_2fadapter_2fmodel_2fv1beta1_2fcheck_2eproto::InitDefaultsCheckResultImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CheckResult

// .google.rpc.Status status = 1 [(.gogoproto.nullable) = false];
inline bool CheckResult::has_status() const {
  return this != internal_default_instance() && status_ != NULL;
}
inline const ::google::rpc::Status& CheckResult::status() const {
  const ::google::rpc::Status* p = status_;
  // @@protoc_insertion_point(field_get:istio.mixer.adapter.model.v1beta1.CheckResult.status)
  return p != NULL ? *p : *reinterpret_cast<const ::google::rpc::Status*>(
      &::google::rpc::_Status_default_instance_);
}
inline ::google::rpc::Status* CheckResult::release_status() {
  // @@protoc_insertion_point(field_release:istio.mixer.adapter.model.v1beta1.CheckResult.status)
  
  ::google::rpc::Status* temp = status_;
  status_ = NULL;
  return temp;
}
inline ::google::rpc::Status* CheckResult::mutable_status() {
  
  if (status_ == NULL) {
    status_ = new ::google::rpc::Status;
  }
  // @@protoc_insertion_point(field_mutable:istio.mixer.adapter.model.v1beta1.CheckResult.status)
  return status_;
}
inline void CheckResult::set_allocated_status(::google::rpc::Status* status) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(status_);
  }
  if (status) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      status = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, status, submessage_arena);
    }
    
  } else {
    
  }
  status_ = status;
  // @@protoc_insertion_point(field_set_allocated:istio.mixer.adapter.model.v1beta1.CheckResult.status)
}

// .google.protobuf.Duration valid_duration = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
inline bool CheckResult::has_valid_duration() const {
  return this != internal_default_instance() && valid_duration_ != NULL;
}
inline const ::google::protobuf::Duration& CheckResult::valid_duration() const {
  const ::google::protobuf::Duration* p = valid_duration_;
  // @@protoc_insertion_point(field_get:istio.mixer.adapter.model.v1beta1.CheckResult.valid_duration)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Duration*>(
      &::google::protobuf::_Duration_default_instance_);
}
inline ::google::protobuf::Duration* CheckResult::release_valid_duration() {
  // @@protoc_insertion_point(field_release:istio.mixer.adapter.model.v1beta1.CheckResult.valid_duration)
  
  ::google::protobuf::Duration* temp = valid_duration_;
  valid_duration_ = NULL;
  return temp;
}
inline ::google::protobuf::Duration* CheckResult::mutable_valid_duration() {
  
  if (valid_duration_ == NULL) {
    valid_duration_ = new ::google::protobuf::Duration;
  }
  // @@protoc_insertion_point(field_mutable:istio.mixer.adapter.model.v1beta1.CheckResult.valid_duration)
  return valid_duration_;
}
inline void CheckResult::set_allocated_valid_duration(::google::protobuf::Duration* valid_duration) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(valid_duration_);
  }
  if (valid_duration) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(valid_duration)->GetArena();
    if (message_arena != submessage_arena) {
      valid_duration = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, valid_duration, submessage_arena);
    }
    
  } else {
    
  }
  valid_duration_ = valid_duration;
  // @@protoc_insertion_point(field_set_allocated:istio.mixer.adapter.model.v1beta1.CheckResult.valid_duration)
}

// int32 valid_use_count = 3;
inline void CheckResult::clear_valid_use_count() {
  valid_use_count_ = 0;
}
inline ::google::protobuf::int32 CheckResult::valid_use_count() const {
  // @@protoc_insertion_point(field_get:istio.mixer.adapter.model.v1beta1.CheckResult.valid_use_count)
  return valid_use_count_;
}
inline void CheckResult::set_valid_use_count(::google::protobuf::int32 value) {
  
  valid_use_count_ = value;
  // @@protoc_insertion_point(field_set:istio.mixer.adapter.model.v1beta1.CheckResult.valid_use_count)
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

#endif  // PROTOBUF_mixer_2fadapter_2fmodel_2fv1beta1_2fcheck_2eproto__INCLUDED
