// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: policy/v1beta1/value_type.proto

#ifndef PROTOBUF_INCLUDED_policy_2fv1beta1_2fvalue_5ftype_2eproto
#define PROTOBUF_INCLUDED_policy_2fv1beta1_2fvalue_5ftype_2eproto

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_policy_2fv1beta1_2fvalue_5ftype_2eproto 

namespace protobuf_policy_2fv1beta1_2fvalue_5ftype_2eproto {
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
}  // namespace protobuf_policy_2fv1beta1_2fvalue_5ftype_2eproto
namespace istio {
namespace policy {
namespace v1beta1 {
}  // namespace v1beta1
}  // namespace policy
}  // namespace istio
namespace istio {
namespace policy {
namespace v1beta1 {

enum ValueType {
  VALUE_TYPE_UNSPECIFIED = 0,
  STRING = 1,
  INT64 = 2,
  DOUBLE = 3,
  BOOL = 4,
  TIMESTAMP = 5,
  IP_ADDRESS = 6,
  EMAIL_ADDRESS = 7,
  URI = 8,
  DNS_NAME = 9,
  DURATION = 10,
  STRING_MAP = 11,
  ValueType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ValueType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ValueType_IsValid(int value);
const ValueType ValueType_MIN = VALUE_TYPE_UNSPECIFIED;
const ValueType ValueType_MAX = STRING_MAP;
const int ValueType_ARRAYSIZE = ValueType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ValueType_descriptor();
inline const ::std::string& ValueType_Name(ValueType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ValueType_descriptor(), value);
}
inline bool ValueType_Parse(
    const ::std::string& name, ValueType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ValueType>(
    ValueType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace policy
}  // namespace istio

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::istio::policy::v1beta1::ValueType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::istio::policy::v1beta1::ValueType>() {
  return ::istio::policy::v1beta1::ValueType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_policy_2fv1beta1_2fvalue_5ftype_2eproto
