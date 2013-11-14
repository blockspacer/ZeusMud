// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 21009_C2SEnterRoomReq.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "21009_C2SEnterRoomReq.pb.h"

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

const ::google::protobuf::Descriptor* C2SEnterRoomReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  C2SEnterRoomReq_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_21009_5fC2SEnterRoomReq_2eproto() {
  protobuf_AddDesc_21009_5fC2SEnterRoomReq_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "21009_C2SEnterRoomReq.proto");
  GOOGLE_CHECK(file != NULL);
  C2SEnterRoomReq_descriptor_ = file->message_type(0);
  static const int C2SEnterRoomReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SEnterRoomReq, room_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SEnterRoomReq, password_),
  };
  C2SEnterRoomReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      C2SEnterRoomReq_descriptor_,
      C2SEnterRoomReq::default_instance_,
      C2SEnterRoomReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SEnterRoomReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(C2SEnterRoomReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(C2SEnterRoomReq));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_21009_5fC2SEnterRoomReq_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    C2SEnterRoomReq_descriptor_, &C2SEnterRoomReq::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_21009_5fC2SEnterRoomReq_2eproto() {
  delete C2SEnterRoomReq::default_instance_;
  delete C2SEnterRoomReq_reflection_;
}

void protobuf_AddDesc_21009_5fC2SEnterRoomReq_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\03321009_C2SEnterRoomReq.proto\022\010Protocol\""
    "4\n\017C2SEnterRoomReq\022\017\n\007room_id\030\001 \002(\r\022\020\n\010p"
    "assword\030\002 \001(\t", 93);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "21009_C2SEnterRoomReq.proto", &protobuf_RegisterTypes);
  C2SEnterRoomReq::default_instance_ = new C2SEnterRoomReq();
  C2SEnterRoomReq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_21009_5fC2SEnterRoomReq_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_21009_5fC2SEnterRoomReq_2eproto {
  StaticDescriptorInitializer_21009_5fC2SEnterRoomReq_2eproto() {
    protobuf_AddDesc_21009_5fC2SEnterRoomReq_2eproto();
  }
} static_descriptor_initializer_21009_5fC2SEnterRoomReq_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int C2SEnterRoomReq::kRoomIdFieldNumber;
const int C2SEnterRoomReq::kPasswordFieldNumber;
#endif  // !_MSC_VER

C2SEnterRoomReq::C2SEnterRoomReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void C2SEnterRoomReq::InitAsDefaultInstance() {
}

C2SEnterRoomReq::C2SEnterRoomReq(const C2SEnterRoomReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void C2SEnterRoomReq::SharedCtor() {
  _cached_size_ = 0;
  room_id_ = 0u;
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

C2SEnterRoomReq::~C2SEnterRoomReq() {
  SharedDtor();
}

void C2SEnterRoomReq::SharedDtor() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void C2SEnterRoomReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* C2SEnterRoomReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return C2SEnterRoomReq_descriptor_;
}

const C2SEnterRoomReq& C2SEnterRoomReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_21009_5fC2SEnterRoomReq_2eproto();
  return *default_instance_;
}

C2SEnterRoomReq* C2SEnterRoomReq::default_instance_ = NULL;

C2SEnterRoomReq* C2SEnterRoomReq::New() const {
  return new C2SEnterRoomReq;
}

void C2SEnterRoomReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    room_id_ = 0u;
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool C2SEnterRoomReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 room_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &room_id_)));
          set_has_room_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }

      // optional string password = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void C2SEnterRoomReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 room_id = 1;
  if (has_room_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->room_id(), output);
  }

  // optional string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->password(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* C2SEnterRoomReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 room_id = 1;
  if (has_room_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->room_id(), target);
  }

  // optional string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->password(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int C2SEnterRoomReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 room_id = 1;
    if (has_room_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->room_id());
    }

    // optional string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
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

void C2SEnterRoomReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const C2SEnterRoomReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const C2SEnterRoomReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void C2SEnterRoomReq::MergeFrom(const C2SEnterRoomReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_room_id()) {
      set_room_id(from.room_id());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void C2SEnterRoomReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void C2SEnterRoomReq::CopyFrom(const C2SEnterRoomReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2SEnterRoomReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void C2SEnterRoomReq::Swap(C2SEnterRoomReq* other) {
  if (other != this) {
    std::swap(room_id_, other->room_id_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata C2SEnterRoomReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = C2SEnterRoomReq_descriptor_;
  metadata.reflection = C2SEnterRoomReq_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)
