// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Combat/skills.proto
// Protobuf C++ Version: 5.29.0-dev

#ifndef Combat_2fskills_2eproto_2epb_2eh
#define Combat_2fskills_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
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
#include "common/entities.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Combat_2fskills_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Combat_2fskills_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_Combat_2fskills_2eproto;
namespace combat {
class Skill;
struct SkillDefaultTypeInternal;
extern SkillDefaultTypeInternal _Skill_default_instance_;
}  // namespace combat
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace combat {

// ===================================================================


// -------------------------------------------------------------------

class Skill final
    : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:combat.Skill) */ {
 public:
  inline Skill() : Skill(nullptr) {}
  ~Skill() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(Skill* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(Skill));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Skill(
      ::google::protobuf::internal::ConstantInitialized);

  inline Skill(const Skill& from) : Skill(nullptr, from) {}
  inline Skill(Skill&& from) noexcept
      : Skill(nullptr, std::move(from)) {}
  inline Skill& operator=(const Skill& from) {
    CopyFrom(from);
    return *this;
  }
  inline Skill& operator=(Skill&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
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
  static const Skill& default_instance() {
    return *internal_default_instance();
  }
  static inline const Skill* internal_default_instance() {
    return reinterpret_cast<const Skill*>(
        &_Skill_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Skill& a, Skill& b) { a.Swap(&b); }
  inline void Swap(Skill* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Skill* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Skill* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<Skill>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Skill& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Skill& from) { Skill::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(Skill* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "combat.Skill"; }

 protected:
  explicit Skill(::google::protobuf::Arena* arena);
  Skill(::google::protobuf::Arena* arena, const Skill& from);
  Skill(::google::protobuf::Arena* arena, Skill&& from) noexcept
      : Skill(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kNameFieldNumber = 2,
    kDescriptionFieldNumber = 3,
    kTargetFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // string name = 2;
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
  // string description = 3;
  void clear_description() ;
  const std::string& description() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_description(Arg_&& arg, Args_... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* value);

  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(
      const std::string& value);
  std::string* _internal_mutable_description();

  public:
  // .common.Entity target = 4;
  bool has_target() const;
  void clear_target() ;
  const ::common::Entity& target() const;
  PROTOBUF_NODISCARD ::common::Entity* release_target();
  ::common::Entity* mutable_target();
  void set_allocated_target(::common::Entity* value);
  void unsafe_arena_set_allocated_target(::common::Entity* value);
  ::common::Entity* unsafe_arena_release_target();

  private:
  const ::common::Entity& _internal_target() const;
  ::common::Entity* _internal_mutable_target();

  public:
  // int32 id = 1;
  void clear_id() ;
  ::int32_t id() const;
  void set_id(::int32_t value);

  private:
  ::int32_t _internal_id() const;
  void _internal_set_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:combat.Skill)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 1,
      36, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Skill_default_instance_;

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
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Skill& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr description_;
    ::common::Entity* target_;
    ::int32_t id_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Combat_2fskills_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Skill

// int32 id = 1;
inline void Skill::clear_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_ = 0;
}
inline ::int32_t Skill::id() const {
  // @@protoc_insertion_point(field_get:combat.Skill.id)
  return _internal_id();
}
inline void Skill::set_id(::int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:combat.Skill.id)
}
inline ::int32_t Skill::_internal_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.id_;
}
inline void Skill::_internal_set_id(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_ = value;
}

// string name = 2;
inline void Skill::clear_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Skill::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:combat.Skill.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Skill::set_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:combat.Skill.name)
}
inline std::string* Skill::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:combat.Skill.name)
  return _s;
}
inline const std::string& Skill::_internal_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.name_.Get();
}
inline void Skill::_internal_set_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Skill::_internal_mutable_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Skill::release_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:combat.Skill.name)
  return _impl_.name_.Release();
}
inline void Skill::set_allocated_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:combat.Skill.name)
}

// string description = 3;
inline void Skill::clear_description() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.description_.ClearToEmpty();
}
inline const std::string& Skill::description() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:combat.Skill.description)
  return _internal_description();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Skill::set_description(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.description_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:combat.Skill.description)
}
inline std::string* Skill::mutable_description() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:combat.Skill.description)
  return _s;
}
inline const std::string& Skill::_internal_description() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.description_.Get();
}
inline void Skill::_internal_set_description(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.description_.Set(value, GetArena());
}
inline std::string* Skill::_internal_mutable_description() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.description_.Mutable( GetArena());
}
inline std::string* Skill::release_description() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:combat.Skill.description)
  return _impl_.description_.Release();
}
inline void Skill::set_allocated_description(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.description_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:combat.Skill.description)
}

// .common.Entity target = 4;
inline bool Skill::has_target() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.target_ != nullptr);
  return value;
}
inline const ::common::Entity& Skill::_internal_target() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  const ::common::Entity* p = _impl_.target_;
  return p != nullptr ? *p : reinterpret_cast<const ::common::Entity&>(::common::_Entity_default_instance_);
}
inline const ::common::Entity& Skill::target() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:combat.Skill.target)
  return _internal_target();
}
inline void Skill::unsafe_arena_set_allocated_target(::common::Entity* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.target_);
  }
  _impl_.target_ = reinterpret_cast<::common::Entity*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:combat.Skill.target)
}
inline ::common::Entity* Skill::release_target() {
  ::google::protobuf::internal::TSanWrite(&_impl_);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::common::Entity* released = _impl_.target_;
  _impl_.target_ = nullptr;
  if (::google::protobuf::internal::DebugHardenForceCopyInRelease()) {
    auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    if (GetArena() == nullptr) {
      delete old;
    }
  } else {
    if (GetArena() != nullptr) {
      released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    }
  }
  return released;
}
inline ::common::Entity* Skill::unsafe_arena_release_target() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:combat.Skill.target)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::common::Entity* temp = _impl_.target_;
  _impl_.target_ = nullptr;
  return temp;
}
inline ::common::Entity* Skill::_internal_mutable_target() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.target_ == nullptr) {
    auto* p = ::google::protobuf::Message::DefaultConstruct<::common::Entity>(GetArena());
    _impl_.target_ = reinterpret_cast<::common::Entity*>(p);
  }
  return _impl_.target_;
}
inline ::common::Entity* Skill::mutable_target() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  _impl_._has_bits_[0] |= 0x00000001u;
  ::common::Entity* _msg = _internal_mutable_target();
  // @@protoc_insertion_point(field_mutable:combat.Skill.target)
  return _msg;
}
inline void Skill::set_allocated_target(::common::Entity* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.target_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.target_ = reinterpret_cast<::common::Entity*>(value);
  // @@protoc_insertion_point(field_set_allocated:combat.Skill.target)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace combat


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // Combat_2fskills_2eproto_2epb_2eh
