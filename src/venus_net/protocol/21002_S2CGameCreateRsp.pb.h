// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 21002_S2CGameCreateRsp.proto

#ifndef PROTOBUF_21002_5fS2CGameCreateRsp_2eproto__INCLUDED
#define PROTOBUF_21002_5fS2CGameCreateRsp_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_21002_5fS2CGameCreateRsp_2eproto();
void protobuf_AssignDesc_21002_5fS2CGameCreateRsp_2eproto();
void protobuf_ShutdownFile_21002_5fS2CGameCreateRsp_2eproto();

class S2CGameCreateRsp;

// ===================================================================

class S2CGameCreateRsp : public ::google::protobuf::Message {
 public:
  S2CGameCreateRsp();
  virtual ~S2CGameCreateRsp();

  S2CGameCreateRsp(const S2CGameCreateRsp& from);

  inline S2CGameCreateRsp& operator=(const S2CGameCreateRsp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2CGameCreateRsp& default_instance();

  void Swap(S2CGameCreateRsp* other);

  // implements Message ----------------------------------------------

  S2CGameCreateRsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2CGameCreateRsp& from);
  void MergeFrom(const S2CGameCreateRsp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool game_create_result = 1;
  inline bool has_game_create_result() const;
  inline void clear_game_create_result();
  static const int kGameCreateResultFieldNumber = 1;
  inline bool game_create_result() const;
  inline void set_game_create_result(bool value);

  // optional bytes failed_reason = 2;
  inline bool has_failed_reason() const;
  inline void clear_failed_reason();
  static const int kFailedReasonFieldNumber = 2;
  inline const ::std::string& failed_reason() const;
  inline void set_failed_reason(const ::std::string& value);
  inline void set_failed_reason(const char* value);
  inline void set_failed_reason(const void* value, size_t size);
  inline ::std::string* mutable_failed_reason();
  inline ::std::string* release_failed_reason();
  inline void set_allocated_failed_reason(::std::string* failed_reason);

  // @@protoc_insertion_point(class_scope:Protocol.S2CGameCreateRsp)
 private:
  inline void set_has_game_create_result();
  inline void clear_has_game_create_result();
  inline void set_has_failed_reason();
  inline void clear_has_failed_reason();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* failed_reason_;
  bool game_create_result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_21002_5fS2CGameCreateRsp_2eproto();
  friend void protobuf_AssignDesc_21002_5fS2CGameCreateRsp_2eproto();
  friend void protobuf_ShutdownFile_21002_5fS2CGameCreateRsp_2eproto();

  void InitAsDefaultInstance();
  static S2CGameCreateRsp* default_instance_;
};
// ===================================================================


// ===================================================================

// S2CGameCreateRsp

// required bool game_create_result = 1;
inline bool S2CGameCreateRsp::has_game_create_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2CGameCreateRsp::set_has_game_create_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2CGameCreateRsp::clear_has_game_create_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2CGameCreateRsp::clear_game_create_result() {
  game_create_result_ = false;
  clear_has_game_create_result();
}
inline bool S2CGameCreateRsp::game_create_result() const {
  return game_create_result_;
}
inline void S2CGameCreateRsp::set_game_create_result(bool value) {
  set_has_game_create_result();
  game_create_result_ = value;
}

// optional bytes failed_reason = 2;
inline bool S2CGameCreateRsp::has_failed_reason() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S2CGameCreateRsp::set_has_failed_reason() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S2CGameCreateRsp::clear_has_failed_reason() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S2CGameCreateRsp::clear_failed_reason() {
  if (failed_reason_ != &::google::protobuf::internal::kEmptyString) {
    failed_reason_->clear();
  }
  clear_has_failed_reason();
}
inline const ::std::string& S2CGameCreateRsp::failed_reason() const {
  return *failed_reason_;
}
inline void S2CGameCreateRsp::set_failed_reason(const ::std::string& value) {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  failed_reason_->assign(value);
}
inline void S2CGameCreateRsp::set_failed_reason(const char* value) {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  failed_reason_->assign(value);
}
inline void S2CGameCreateRsp::set_failed_reason(const void* value, size_t size) {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  failed_reason_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* S2CGameCreateRsp::mutable_failed_reason() {
  set_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    failed_reason_ = new ::std::string;
  }
  return failed_reason_;
}
inline ::std::string* S2CGameCreateRsp::release_failed_reason() {
  clear_has_failed_reason();
  if (failed_reason_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = failed_reason_;
    failed_reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void S2CGameCreateRsp::set_allocated_failed_reason(::std::string* failed_reason) {
  if (failed_reason_ != &::google::protobuf::internal::kEmptyString) {
    delete failed_reason_;
  }
  if (failed_reason) {
    set_has_failed_reason();
    failed_reason_ = failed_reason;
  } else {
    clear_has_failed_reason();
    failed_reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_21002_5fS2CGameCreateRsp_2eproto__INCLUDED
