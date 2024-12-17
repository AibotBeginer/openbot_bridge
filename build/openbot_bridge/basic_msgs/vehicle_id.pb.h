// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/basic_msgs/vehicle_id.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto;
namespace openbot_bridge {
namespace basic_msgs {
class VehicleID;
class VehicleIDDefaultTypeInternal;
extern VehicleIDDefaultTypeInternal _VehicleID_default_instance_;
}  // namespace basic_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> ::openbot_bridge::basic_msgs::VehicleID* Arena::CreateMaybeMessage<::openbot_bridge::basic_msgs::VehicleID>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace openbot_bridge {
namespace basic_msgs {

// ===================================================================

class VehicleID PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:openbot_bridge.basic_msgs.VehicleID) */ {
 public:
  inline VehicleID() : VehicleID(nullptr) {}
  virtual ~VehicleID();

  VehicleID(const VehicleID& from);
  VehicleID(VehicleID&& from) noexcept
    : VehicleID() {
    *this = ::std::move(from);
  }

  inline VehicleID& operator=(const VehicleID& from) {
    CopyFrom(from);
    return *this;
  }
  inline VehicleID& operator=(VehicleID&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const VehicleID& default_instance();

  static inline const VehicleID* internal_default_instance() {
    return reinterpret_cast<const VehicleID*>(
               &_VehicleID_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VehicleID& a, VehicleID& b) {
    a.Swap(&b);
  }
  inline void Swap(VehicleID* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VehicleID* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VehicleID* New() const final {
    return CreateMaybeMessage<VehicleID>(nullptr);
  }

  VehicleID* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VehicleID>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VehicleID& from);
  void MergeFrom(const VehicleID& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VehicleID* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "openbot_bridge.basic_msgs.VehicleID";
  }
  protected:
  explicit VehicleID(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto);
    return ::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVinFieldNumber = 1,
    kPlateFieldNumber = 2,
    kOtherUniqueIdFieldNumber = 3,
  };
  // string vin = 1;
  void clear_vin();
  const std::string& vin() const;
  void set_vin(const std::string& value);
  void set_vin(std::string&& value);
  void set_vin(const char* value);
  void set_vin(const char* value, size_t size);
  std::string* mutable_vin();
  std::string* release_vin();
  void set_allocated_vin(std::string* vin);
  private:
  const std::string& _internal_vin() const;
  void _internal_set_vin(const std::string& value);
  std::string* _internal_mutable_vin();
  public:

  // string plate = 2;
  void clear_plate();
  const std::string& plate() const;
  void set_plate(const std::string& value);
  void set_plate(std::string&& value);
  void set_plate(const char* value);
  void set_plate(const char* value, size_t size);
  std::string* mutable_plate();
  std::string* release_plate();
  void set_allocated_plate(std::string* plate);
  private:
  const std::string& _internal_plate() const;
  void _internal_set_plate(const std::string& value);
  std::string* _internal_mutable_plate();
  public:

  // string other_unique_id = 3;
  void clear_other_unique_id();
  const std::string& other_unique_id() const;
  void set_other_unique_id(const std::string& value);
  void set_other_unique_id(std::string&& value);
  void set_other_unique_id(const char* value);
  void set_other_unique_id(const char* value, size_t size);
  std::string* mutable_other_unique_id();
  std::string* release_other_unique_id();
  void set_allocated_other_unique_id(std::string* other_unique_id);
  private:
  const std::string& _internal_other_unique_id() const;
  void _internal_set_other_unique_id(const std::string& value);
  std::string* _internal_mutable_other_unique_id();
  public:

  // @@protoc_insertion_point(class_scope:openbot_bridge.basic_msgs.VehicleID)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr vin_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr plate_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr other_unique_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VehicleID

// string vin = 1;
inline void VehicleID::clear_vin() {
  vin_.ClearToEmpty();
}
inline const std::string& VehicleID::vin() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.basic_msgs.VehicleID.vin)
  return _internal_vin();
}
inline void VehicleID::set_vin(const std::string& value) {
  _internal_set_vin(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.basic_msgs.VehicleID.vin)
}
inline std::string* VehicleID::mutable_vin() {
  // @@protoc_insertion_point(field_mutable:openbot_bridge.basic_msgs.VehicleID.vin)
  return _internal_mutable_vin();
}
inline const std::string& VehicleID::_internal_vin() const {
  return vin_.Get();
}
inline void VehicleID::_internal_set_vin(const std::string& value) {
  
  vin_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void VehicleID::set_vin(std::string&& value) {
  
  vin_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:openbot_bridge.basic_msgs.VehicleID.vin)
}
inline void VehicleID::set_vin(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  vin_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:openbot_bridge.basic_msgs.VehicleID.vin)
}
inline void VehicleID::set_vin(const char* value,
    size_t size) {
  
  vin_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:openbot_bridge.basic_msgs.VehicleID.vin)
}
inline std::string* VehicleID::_internal_mutable_vin() {
  
  return vin_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* VehicleID::release_vin() {
  // @@protoc_insertion_point(field_release:openbot_bridge.basic_msgs.VehicleID.vin)
  return vin_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void VehicleID::set_allocated_vin(std::string* vin) {
  if (vin != nullptr) {
    
  } else {
    
  }
  vin_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), vin,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:openbot_bridge.basic_msgs.VehicleID.vin)
}

// string plate = 2;
inline void VehicleID::clear_plate() {
  plate_.ClearToEmpty();
}
inline const std::string& VehicleID::plate() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.basic_msgs.VehicleID.plate)
  return _internal_plate();
}
inline void VehicleID::set_plate(const std::string& value) {
  _internal_set_plate(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.basic_msgs.VehicleID.plate)
}
inline std::string* VehicleID::mutable_plate() {
  // @@protoc_insertion_point(field_mutable:openbot_bridge.basic_msgs.VehicleID.plate)
  return _internal_mutable_plate();
}
inline const std::string& VehicleID::_internal_plate() const {
  return plate_.Get();
}
inline void VehicleID::_internal_set_plate(const std::string& value) {
  
  plate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void VehicleID::set_plate(std::string&& value) {
  
  plate_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:openbot_bridge.basic_msgs.VehicleID.plate)
}
inline void VehicleID::set_plate(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  plate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:openbot_bridge.basic_msgs.VehicleID.plate)
}
inline void VehicleID::set_plate(const char* value,
    size_t size) {
  
  plate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:openbot_bridge.basic_msgs.VehicleID.plate)
}
inline std::string* VehicleID::_internal_mutable_plate() {
  
  return plate_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* VehicleID::release_plate() {
  // @@protoc_insertion_point(field_release:openbot_bridge.basic_msgs.VehicleID.plate)
  return plate_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void VehicleID::set_allocated_plate(std::string* plate) {
  if (plate != nullptr) {
    
  } else {
    
  }
  plate_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), plate,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:openbot_bridge.basic_msgs.VehicleID.plate)
}

// string other_unique_id = 3;
inline void VehicleID::clear_other_unique_id() {
  other_unique_id_.ClearToEmpty();
}
inline const std::string& VehicleID::other_unique_id() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
  return _internal_other_unique_id();
}
inline void VehicleID::set_other_unique_id(const std::string& value) {
  _internal_set_other_unique_id(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
}
inline std::string* VehicleID::mutable_other_unique_id() {
  // @@protoc_insertion_point(field_mutable:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
  return _internal_mutable_other_unique_id();
}
inline const std::string& VehicleID::_internal_other_unique_id() const {
  return other_unique_id_.Get();
}
inline void VehicleID::_internal_set_other_unique_id(const std::string& value) {
  
  other_unique_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void VehicleID::set_other_unique_id(std::string&& value) {
  
  other_unique_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
}
inline void VehicleID::set_other_unique_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  other_unique_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
}
inline void VehicleID::set_other_unique_id(const char* value,
    size_t size) {
  
  other_unique_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
}
inline std::string* VehicleID::_internal_mutable_other_unique_id() {
  
  return other_unique_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* VehicleID::release_other_unique_id() {
  // @@protoc_insertion_point(field_release:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
  return other_unique_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void VehicleID::set_allocated_other_unique_id(std::string* other_unique_id) {
  if (other_unique_id != nullptr) {
    
  } else {
    
  }
  other_unique_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), other_unique_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:openbot_bridge.basic_msgs.VehicleID.other_unique_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace basic_msgs
}  // namespace openbot_bridge

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_openbot_5fbridge_2fbasic_5fmsgs_2fvehicle_5fid_2eproto