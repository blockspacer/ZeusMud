// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 21010_S2CEnterRoomRsp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "21010_S2CEnterRoomRsp.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

namespace {

const ::google::protobuf::Descriptor* S2CEnterRoomRsp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  S2CEnterRoomRsp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_21010_5fS2CEnterRoomRsp_2eproto() {
  protobuf_AddDesc_21010_5fS2CEnterRoomRsp_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "21010_S2CEnterRoomRsp.proto");
  GOOGLE_CHECK(file != NULL);
  S2CEnterRoomRsp_descriptor_ = file->message_type(0);
  static const int S2CEnterRoomRsp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CEnterRoomRsp, result_),
  };
  S2CEnterRoomRsp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      S2CEnterRoomRsp_descriptor_,
      S2CEnterRoomRsp::default_instance_,
      S2CEnterRoomRsp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CEnterRoomRsp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CEnterRoomRsp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(S2CEnterRoomRsp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_21010_5fS2CEnterRoomRsp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    S2CEnterRoomRsp_descriptor_, &S2CEnterRoomRsp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_21010_5fS2CEnterRoomRsp_2eproto() {
  delete S2CEnterRoomRsp::default_instance_;
  delete S2CEnterRoomRsp_reflection_;
}

void protobuf_AddDesc_21010_5fS2CEnterRoomRsp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\03321010_S2CEnterRoomRsp.proto\022\010Protocol\""
    "!\n\017S2CEnterRoomRsp\022\016\n\006result\030\001 \002(\010", 74);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "21010_S2CEnterRoomRsp.proto", &protobuf_RegisterTypes);
  S2CEnterRoomRsp::default_instance_ = new S2CEnterRoomRsp();
  S2CEnterRoomRsp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_21010_5fS2CEnterRoomRsp_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_21010_5fS2CEnterRoomRsp_2eproto {
  StaticDescriptorInitializer_21010_5fS2CEnterRoomRsp_2eproto() {
    protobuf_AddDesc_21010_5fS2CEnterRoomRsp_2eproto();
  }
} static_descriptor_initializer_21010_5fS2CEnterRoomRsp_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int S2CEnterRoomRsp::kResultFieldNumber;
#endif  // !_MSC_VER

S2CEnterRoomRsp::S2CEnterRoomRsp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void S2CEnterRoomRsp::InitAsDefaultInstance() {
}

S2CEnterRoomRsp::S2CEnterRoomRsp(const S2CEnterRoomRsp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void S2CEnterRoomRsp::SharedCtor() {
  _cached_size_ = 0;
  result_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CEnterRoomRsp::~S2CEnterRoomRsp() {
  SharedDtor();
}

void S2CEnterRoomRsp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void S2CEnterRoomRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* S2CEnterRoomRsp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return S2CEnterRoomRsp_descriptor_;
}

const S2CEnterRoomRsp& S2CEnterRoomRsp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_21010_5fS2CEnterRoomRsp_2eproto();
  return *default_instance_;
}

S2CEnterRoomRsp* S2CEnterRoomRsp::default_instance_ = NULL;

S2CEnterRoomRsp* S2CEnterRoomRsp::New() const {
  return new S2CEnterRoomRsp;
}

void S2CEnterRoomRsp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool S2CEnterRoomRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool result = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void S2CEnterRoomRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool result = 1;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* S2CEnterRoomRsp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bool result = 1;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int S2CEnterRoomRsp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool result = 1;
    if (has_result()) {
      total_size += 1 + 1;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void S2CEnterRoomRsp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const S2CEnterRoomRsp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const S2CEnterRoomRsp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void S2CEnterRoomRsp::MergeFrom(const S2CEnterRoomRsp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void S2CEnterRoomRsp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S2CEnterRoomRsp::CopyFrom(const S2CEnterRoomRsp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CEnterRoomRsp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void S2CEnterRoomRsp::Swap(S2CEnterRoomRsp* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata S2CEnterRoomRsp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = S2CEnterRoomRsp_descriptor_;
  metadata.reflection = S2CEnterRoomRsp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)
