// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Item/item.proto
// Protobuf C++ Version: 5.29.0-dev

#ifndef Item_2fitem_2eproto_2epb_2eh
#define Item_2fitem_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Item_2fitem_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Item_2fitem_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_Item_2fitem_2eproto;
namespace item {
class ItemReward;
struct ItemRewardDefaultTypeInternal;
extern ItemRewardDefaultTypeInternal _ItemReward_default_instance_;
}  // namespace item
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace item {

// ===================================================================


// -------------------------------------------------------------------

class ItemReward final
    : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:item.ItemReward) */ {
 public:
  inline ItemReward() : ItemReward(nullptr) {}
  ~ItemReward() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(ItemReward* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(ItemReward));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR ItemReward(
      ::google::protobuf::internal::ConstantInitialized);

  inline ItemReward(const ItemReward& from) : ItemReward(nullptr, from) {}
  inline ItemReward(ItemReward&& from) noexcept
      : ItemReward(nullptr, std::move(from)) {}
  inline ItemReward& operator=(const ItemReward& from) {
    CopyFrom(from);
    return *this;
  }
  inline ItemReward& operator=(ItemReward&& from) noexcept {
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
  static const ItemReward& default_instance() {
    return *internal_default_instance();
  }
  static inline const ItemReward* internal_default_instance() {
    return reinterpret_cast<const ItemReward*>(
        &_ItemReward_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(ItemReward& a, ItemReward& b) { a.Swap(&b); }
  inline void Swap(ItemReward* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ItemReward* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ItemReward* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<ItemReward>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ItemReward& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const ItemReward& from) { ItemReward::MergeImpl(*this, from); }

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
  void InternalSwap(ItemReward* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "item.ItemReward"; }

 protected:
  explicit ItemReward(::google::protobuf::Arena* arena);
  ItemReward(::google::protobuf::Arena* arena, const ItemReward& from);
  ItemReward(::google::protobuf::Arena* arena, ItemReward&& from) noexcept
      : ItemReward(arena) {
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
    kItemNumFieldNumber = 2,
    kItemCfgIdFieldNumber = 1,
  };
  // uint64 item_num = 2;
  void clear_item_num() ;
  ::uint64_t item_num() const;
  void set_item_num(::uint64_t value);

  private:
  ::uint64_t _internal_item_num() const;
  void _internal_set_item_num(::uint64_t value);

  public:
  // uint32 item_cfg_id = 1;
  void clear_item_cfg_id() ;
  ::uint32_t item_cfg_id() const;
  void set_item_cfg_id(::uint32_t value);

  private:
  ::uint32_t _internal_item_cfg_id() const;
  void _internal_set_item_cfg_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:item.ItemReward)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_ItemReward_default_instance_;

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
                          const ItemReward& from_msg);
    ::uint64_t item_num_;
    ::uint32_t item_cfg_id_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Item_2fitem_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ItemReward

// uint32 item_cfg_id = 1;
inline void ItemReward::clear_item_cfg_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.item_cfg_id_ = 0u;
}
inline ::uint32_t ItemReward::item_cfg_id() const {
  // @@protoc_insertion_point(field_get:item.ItemReward.item_cfg_id)
  return _internal_item_cfg_id();
}
inline void ItemReward::set_item_cfg_id(::uint32_t value) {
  _internal_set_item_cfg_id(value);
  // @@protoc_insertion_point(field_set:item.ItemReward.item_cfg_id)
}
inline ::uint32_t ItemReward::_internal_item_cfg_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.item_cfg_id_;
}
inline void ItemReward::_internal_set_item_cfg_id(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.item_cfg_id_ = value;
}

// uint64 item_num = 2;
inline void ItemReward::clear_item_num() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.item_num_ = ::uint64_t{0u};
}
inline ::uint64_t ItemReward::item_num() const {
  // @@protoc_insertion_point(field_get:item.ItemReward.item_num)
  return _internal_item_num();
}
inline void ItemReward::set_item_num(::uint64_t value) {
  _internal_set_item_num(value);
  // @@protoc_insertion_point(field_set:item.ItemReward.item_num)
}
inline ::uint64_t ItemReward::_internal_item_num() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.item_num_;
}
inline void ItemReward::_internal_set_item_num(::uint64_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.item_num_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace item


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // Item_2fitem_2eproto_2epb_2eh
