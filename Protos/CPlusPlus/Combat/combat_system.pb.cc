// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Combat/combat_system.proto
// Protobuf C++ Version: 5.29.0-dev

#include "Combat/combat_system.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace combat {

inline constexpr CombatEvent::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : participants_{},
        eventid_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CombatEvent::CombatEvent(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct CombatEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CombatEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CombatEventDefaultTypeInternal() {}
  union {
    CombatEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CombatEventDefaultTypeInternal _CombatEvent_default_instance_;
}  // namespace combat
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Combat_2fcombat_5fsystem_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Combat_2fcombat_5fsystem_2eproto = nullptr;
const ::uint32_t
    TableStruct_Combat_2fcombat_5fsystem_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::combat::CombatEvent, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::combat::CombatEvent, _impl_.participants_),
        PROTOBUF_FIELD_OFFSET(::combat::CombatEvent, _impl_.eventid_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::combat::CombatEvent)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::combat::_CombatEvent_default_instance_._instance,
};
const char descriptor_table_protodef_Combat_2fcombat_5fsystem_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\032Combat/combat_system.proto\022\006combat\032\025co"
    "mmon/entities.proto\"D\n\013CombatEvent\022$\n\014pa"
    "rticipants\030\001 \003(\0132\016.common.Entity\022\017\n\007even"
    "tId\030\002 \001(\005b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_Combat_2fcombat_5fsystem_2eproto_deps[1] =
    {
        &::descriptor_table_common_2fentities_2eproto,
};
static ::absl::once_flag descriptor_table_Combat_2fcombat_5fsystem_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_Combat_2fcombat_5fsystem_2eproto = {
    false,
    false,
    137,
    descriptor_table_protodef_Combat_2fcombat_5fsystem_2eproto,
    "Combat/combat_system.proto",
    &descriptor_table_Combat_2fcombat_5fsystem_2eproto_once,
    descriptor_table_Combat_2fcombat_5fsystem_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_Combat_2fcombat_5fsystem_2eproto::offsets,
    file_level_enum_descriptors_Combat_2fcombat_5fsystem_2eproto,
    file_level_service_descriptors_Combat_2fcombat_5fsystem_2eproto,
};
namespace combat {
// ===================================================================

class CombatEvent::_Internal {
 public:
};

void CombatEvent::clear_participants() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.participants_.Clear();
}
CombatEvent::CombatEvent(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:combat.CombatEvent)
}
inline PROTOBUF_NDEBUG_INLINE CombatEvent::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::combat::CombatEvent& from_msg)
      : participants_{visibility, arena, from.participants_},
        _cached_size_{0} {}

CombatEvent::CombatEvent(
    ::google::protobuf::Arena* arena,
    const CombatEvent& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  CombatEvent* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.eventid_ = from._impl_.eventid_;

  // @@protoc_insertion_point(copy_constructor:combat.CombatEvent)
}
inline PROTOBUF_NDEBUG_INLINE CombatEvent::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : participants_{visibility, arena},
        _cached_size_{0} {}

inline void CombatEvent::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.eventid_ = {};
}
CombatEvent::~CombatEvent() {
  // @@protoc_insertion_point(destructor:combat.CombatEvent)
  SharedDtor(*this);
}
inline void CombatEvent::SharedDtor(MessageLite& self) {
  CombatEvent& this_ = static_cast<CombatEvent&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.~Impl_();
}

inline void* CombatEvent::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) CombatEvent(arena);
}
constexpr auto CombatEvent::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(CombatEvent, _impl_.participants_) +
          decltype(CombatEvent::_impl_.participants_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(CombatEvent), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&CombatEvent::PlacementNew_,
                                 sizeof(CombatEvent));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    CombatEvent::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_CombatEvent_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &CombatEvent::MergeImpl,
            ::google::protobuf::Message::GetNewImpl<CombatEvent>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
            &CombatEvent::SharedDtor,
            ::google::protobuf::Message::GetClearImpl<CombatEvent>(), &CombatEvent::ByteSizeLong,
                &CombatEvent::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(CombatEvent, _impl_._cached_size_),
            false,
        },
        &CombatEvent::kDescriptorMethods,
        &descriptor_table_Combat_2fcombat_5fsystem_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* CombatEvent::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> CombatEvent::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::combat::CombatEvent>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // int32 eventId = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(CombatEvent, _impl_.eventid_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(CombatEvent, _impl_.eventid_)}},
    // repeated .common.Entity participants = 1;
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(CombatEvent, _impl_.participants_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .common.Entity participants = 1;
    {PROTOBUF_FIELD_OFFSET(CombatEvent, _impl_.participants_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // int32 eventId = 2;
    {PROTOBUF_FIELD_OFFSET(CombatEvent, _impl_.eventid_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }}, {{
    {::_pbi::TcParser::GetTable<::common::Entity>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void CombatEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:combat.CombatEvent)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.participants_.Clear();
  _impl_.eventid_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* CombatEvent::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const CombatEvent& this_ = static_cast<const CombatEvent&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* CombatEvent::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const CombatEvent& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:combat.CombatEvent)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // repeated .common.Entity participants = 1;
          for (unsigned i = 0, n = static_cast<unsigned>(
                                   this_._internal_participants_size());
               i < n; i++) {
            const auto& repfield = this_._internal_participants().Get(i);
            target =
                ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                    1, repfield, repfield.GetCachedSize(),
                    target, stream);
          }

          // int32 eventId = 2;
          if (this_._internal_eventid() != 0) {
            target = ::google::protobuf::internal::WireFormatLite::
                WriteInt32ToArrayWithField<2>(
                    stream, this_._internal_eventid(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:combat.CombatEvent)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t CombatEvent::ByteSizeLong(const MessageLite& base) {
          const CombatEvent& this_ = static_cast<const CombatEvent&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t CombatEvent::ByteSizeLong() const {
          const CombatEvent& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:combat.CombatEvent)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated .common.Entity participants = 1;
            {
              total_size += 1UL * this_._internal_participants_size();
              for (const auto& msg : this_._internal_participants()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
              }
            }
          }
           {
            // int32 eventId = 2;
            if (this_._internal_eventid() != 0) {
              total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
                  this_._internal_eventid());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void CombatEvent::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<CombatEvent*>(&to_msg);
  auto& from = static_cast<const CombatEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:combat.CombatEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_participants()->MergeFrom(
      from._internal_participants());
  if (from._internal_eventid() != 0) {
    _this->_impl_.eventid_ = from._impl_.eventid_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CombatEvent::CopyFrom(const CombatEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:combat.CombatEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void CombatEvent::InternalSwap(CombatEvent* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.participants_.InternalSwap(&other->_impl_.participants_);
        swap(_impl_.eventid_, other->_impl_.eventid_);
}

::google::protobuf::Metadata CombatEvent::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace combat
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_Combat_2fcombat_5fsystem_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
