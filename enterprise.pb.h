// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enterprise.proto
// Protobuf C++ Version: 4.25.0

#ifndef GOOGLE_PROTOBUF_INCLUDED_enterprise_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_enterprise_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_enterprise_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_enterprise_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_enterprise_2eproto;
class Enterprise;
struct EnterpriseDefaultTypeInternal;
extern EnterpriseDefaultTypeInternal _Enterprise_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Enterprise final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Enterprise) */ {
 public:
  inline Enterprise() : Enterprise(nullptr) {}
  ~Enterprise() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Enterprise(::google::protobuf::internal::ConstantInitialized);

  inline Enterprise(const Enterprise& from)
      : Enterprise(nullptr, from) {}
  Enterprise(Enterprise&& from) noexcept
    : Enterprise() {
    *this = ::std::move(from);
  }

  inline Enterprise& operator=(const Enterprise& from) {
    CopyFrom(from);
    return *this;
  }
  inline Enterprise& operator=(Enterprise&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Enterprise& default_instance() {
    return *internal_default_instance();
  }
  static inline const Enterprise* internal_default_instance() {
    return reinterpret_cast<const Enterprise*>(
               &_Enterprise_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Enterprise& a, Enterprise& b) {
    a.Swap(&b);
  }
  inline void Swap(Enterprise* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Enterprise* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Enterprise* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Enterprise>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Enterprise& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Enterprise& from) {
    Enterprise::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Enterprise* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Enterprise";
  }
  protected:
  explicit Enterprise(::google::protobuf::Arena* arena);
  Enterprise(::google::protobuf::Arena* arena, const Enterprise& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLegalAddressFieldNumber = 2,
    kNameFieldNumber = 3,
    kIndustryFieldNumber = 4,
    kFoundationYearFieldNumber = 1,
    kInternationalBusinessFieldNumber = 5,
  };
  // required string legalAddress = 2;
  bool has_legaladdress() const;
  void clear_legaladdress() ;
  const std::string& legaladdress() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_legaladdress(Arg_&& arg, Args_... args);
  std::string* mutable_legaladdress();
  PROTOBUF_NODISCARD std::string* release_legaladdress();
  void set_allocated_legaladdress(std::string* value);

  private:
  const std::string& _internal_legaladdress() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_legaladdress(
      const std::string& value);
  std::string* _internal_mutable_legaladdress();

  public:
  // required string name = 3;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // optional string industry = 4;
  bool has_industry() const;
  void clear_industry() ;
  const std::string& industry() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_industry(Arg_&& arg, Args_... args);
  std::string* mutable_industry();
  PROTOBUF_NODISCARD std::string* release_industry();
  void set_allocated_industry(std::string* value);

  private:
  const std::string& _internal_industry() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_industry(
      const std::string& value);
  std::string* _internal_mutable_industry();

  public:
  // required int32 foundationYear = 1;
  bool has_foundationyear() const;
  void clear_foundationyear() ;
  ::int32_t foundationyear() const;
  void set_foundationyear(::int32_t value);

  private:
  ::int32_t _internal_foundationyear() const;
  void _internal_set_foundationyear(::int32_t value);

  public:
  // optional bool internationalBusiness = 5;
  bool has_internationalbusiness() const;
  void clear_internationalbusiness() ;
  bool internationalbusiness() const;
  void set_internationalbusiness(bool value);

  private:
  bool _internal_internationalbusiness() const;
  void _internal_set_internationalbusiness(bool value);

  public:
  // @@protoc_insertion_point(class_scope:Enterprise)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      43, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr legaladdress_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr industry_;
    ::int32_t foundationyear_;
    bool internationalbusiness_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_enterprise_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Enterprise

// required int32 foundationYear = 1;
inline bool Enterprise::has_foundationyear() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Enterprise::clear_foundationyear() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.foundationyear_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t Enterprise::foundationyear() const {
  // @@protoc_insertion_point(field_get:Enterprise.foundationYear)
  return _internal_foundationyear();
}
inline void Enterprise::set_foundationyear(::int32_t value) {
  _internal_set_foundationyear(value);
  // @@protoc_insertion_point(field_set:Enterprise.foundationYear)
}
inline ::int32_t Enterprise::_internal_foundationyear() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.foundationyear_;
}
inline void Enterprise::_internal_set_foundationyear(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.foundationyear_ = value;
}

// required string legalAddress = 2;
inline bool Enterprise::has_legaladdress() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Enterprise::clear_legaladdress() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.legaladdress_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Enterprise::legaladdress() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Enterprise.legalAddress)
  return _internal_legaladdress();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Enterprise::set_legaladdress(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legaladdress_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Enterprise.legalAddress)
}
inline std::string* Enterprise::mutable_legaladdress() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_legaladdress();
  // @@protoc_insertion_point(field_mutable:Enterprise.legalAddress)
  return _s;
}
inline const std::string& Enterprise::_internal_legaladdress() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.legaladdress_.Get();
}
inline void Enterprise::_internal_set_legaladdress(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legaladdress_.Set(value, GetArena());
}
inline std::string* Enterprise::_internal_mutable_legaladdress() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.legaladdress_.Mutable( GetArena());
}
inline std::string* Enterprise::release_legaladdress() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Enterprise.legalAddress)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.legaladdress_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.legaladdress_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Enterprise::set_allocated_legaladdress(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.legaladdress_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.legaladdress_.IsDefault()) {
          _impl_.legaladdress_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Enterprise.legalAddress)
}

// required string name = 3;
inline bool Enterprise::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Enterprise::clear_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Enterprise::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Enterprise.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Enterprise::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Enterprise.name)
}
inline std::string* Enterprise::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Enterprise.name)
  return _s;
}
inline const std::string& Enterprise::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void Enterprise::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Enterprise::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Enterprise::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Enterprise.name)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Enterprise::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Enterprise.name)
}

// optional string industry = 4;
inline bool Enterprise::has_industry() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Enterprise::clear_industry() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.industry_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Enterprise::industry() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Enterprise.industry)
  return _internal_industry();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Enterprise::set_industry(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.industry_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Enterprise.industry)
}
inline std::string* Enterprise::mutable_industry() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_industry();
  // @@protoc_insertion_point(field_mutable:Enterprise.industry)
  return _s;
}
inline const std::string& Enterprise::_internal_industry() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.industry_.Get();
}
inline void Enterprise::_internal_set_industry(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.industry_.Set(value, GetArena());
}
inline std::string* Enterprise::_internal_mutable_industry() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.industry_.Mutable( GetArena());
}
inline std::string* Enterprise::release_industry() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Enterprise.industry)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.industry_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.industry_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Enterprise::set_allocated_industry(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.industry_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.industry_.IsDefault()) {
          _impl_.industry_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Enterprise.industry)
}

// optional bool internationalBusiness = 5;
inline bool Enterprise::has_internationalbusiness() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Enterprise::clear_internationalbusiness() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.internationalbusiness_ = false;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool Enterprise::internationalbusiness() const {
  // @@protoc_insertion_point(field_get:Enterprise.internationalBusiness)
  return _internal_internationalbusiness();
}
inline void Enterprise::set_internationalbusiness(bool value) {
  _internal_set_internationalbusiness(value);
  // @@protoc_insertion_point(field_set:Enterprise.internationalBusiness)
}
inline bool Enterprise::_internal_internationalbusiness() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.internationalbusiness_;
}
inline void Enterprise::_internal_set_internationalbusiness(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.internationalbusiness_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_enterprise_2eproto_2epb_2eh
