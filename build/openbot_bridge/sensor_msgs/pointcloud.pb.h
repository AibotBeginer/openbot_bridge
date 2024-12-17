// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/sensor_msgs/pointcloud.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto

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
#include "openbot_bridge/basic_msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto;
namespace openbot_bridge {
namespace sensor_msgs {
class PointCloud;
class PointCloudDefaultTypeInternal;
extern PointCloudDefaultTypeInternal _PointCloud_default_instance_;
class PointXYZIT;
class PointXYZITDefaultTypeInternal;
extern PointXYZITDefaultTypeInternal _PointXYZIT_default_instance_;
}  // namespace sensor_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> ::openbot_bridge::sensor_msgs::PointCloud* Arena::CreateMaybeMessage<::openbot_bridge::sensor_msgs::PointCloud>(Arena*);
template<> ::openbot_bridge::sensor_msgs::PointXYZIT* Arena::CreateMaybeMessage<::openbot_bridge::sensor_msgs::PointXYZIT>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace openbot_bridge {
namespace sensor_msgs {

// ===================================================================

class PointXYZIT PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:openbot_bridge.sensor_msgs.PointXYZIT) */ {
 public:
  inline PointXYZIT() : PointXYZIT(nullptr) {}
  virtual ~PointXYZIT();

  PointXYZIT(const PointXYZIT& from);
  PointXYZIT(PointXYZIT&& from) noexcept
    : PointXYZIT() {
    *this = ::std::move(from);
  }

  inline PointXYZIT& operator=(const PointXYZIT& from) {
    CopyFrom(from);
    return *this;
  }
  inline PointXYZIT& operator=(PointXYZIT&& from) noexcept {
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
  static const PointXYZIT& default_instance();

  static inline const PointXYZIT* internal_default_instance() {
    return reinterpret_cast<const PointXYZIT*>(
               &_PointXYZIT_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PointXYZIT& a, PointXYZIT& b) {
    a.Swap(&b);
  }
  inline void Swap(PointXYZIT* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PointXYZIT* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PointXYZIT* New() const final {
    return CreateMaybeMessage<PointXYZIT>(nullptr);
  }

  PointXYZIT* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PointXYZIT>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PointXYZIT& from);
  void MergeFrom(const PointXYZIT& from);
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
  void InternalSwap(PointXYZIT* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "openbot_bridge.sensor_msgs.PointXYZIT";
  }
  protected:
  explicit PointXYZIT(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto);
    return ::descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
    kIntensityFieldNumber = 4,
    kTimestampFieldNumber = 5,
  };
  // float x = 1;
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // float y = 2;
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // float z = 3;
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // uint32 intensity = 4;
  void clear_intensity();
  ::PROTOBUF_NAMESPACE_ID::uint32 intensity() const;
  void set_intensity(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_intensity() const;
  void _internal_set_intensity(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint64 timestamp = 5;
  void clear_timestamp();
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_timestamp() const;
  void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:openbot_bridge.sensor_msgs.PointXYZIT)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  float x_;
  float y_;
  float z_;
  ::PROTOBUF_NAMESPACE_ID::uint32 intensity_;
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto;
};
// -------------------------------------------------------------------

class PointCloud PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:openbot_bridge.sensor_msgs.PointCloud) */ {
 public:
  inline PointCloud() : PointCloud(nullptr) {}
  virtual ~PointCloud();

  PointCloud(const PointCloud& from);
  PointCloud(PointCloud&& from) noexcept
    : PointCloud() {
    *this = ::std::move(from);
  }

  inline PointCloud& operator=(const PointCloud& from) {
    CopyFrom(from);
    return *this;
  }
  inline PointCloud& operator=(PointCloud&& from) noexcept {
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
  static const PointCloud& default_instance();

  static inline const PointCloud* internal_default_instance() {
    return reinterpret_cast<const PointCloud*>(
               &_PointCloud_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PointCloud& a, PointCloud& b) {
    a.Swap(&b);
  }
  inline void Swap(PointCloud* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PointCloud* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PointCloud* New() const final {
    return CreateMaybeMessage<PointCloud>(nullptr);
  }

  PointCloud* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PointCloud>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PointCloud& from);
  void MergeFrom(const PointCloud& from);
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
  void InternalSwap(PointCloud* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "openbot_bridge.sensor_msgs.PointCloud";
  }
  protected:
  explicit PointCloud(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto);
    return ::descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointFieldNumber = 4,
    kFrameIdFieldNumber = 2,
    kHeaderFieldNumber = 1,
    kIsDenseFieldNumber = 3,
    kWidthFieldNumber = 6,
    kMeasurementTimeFieldNumber = 5,
    kHeightFieldNumber = 7,
  };
  // repeated .openbot_bridge.sensor_msgs.PointXYZIT point = 4;
  int point_size() const;
  private:
  int _internal_point_size() const;
  public:
  void clear_point();
  ::openbot_bridge::sensor_msgs::PointXYZIT* mutable_point(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::openbot_bridge::sensor_msgs::PointXYZIT >*
      mutable_point();
  private:
  const ::openbot_bridge::sensor_msgs::PointXYZIT& _internal_point(int index) const;
  ::openbot_bridge::sensor_msgs::PointXYZIT* _internal_add_point();
  public:
  const ::openbot_bridge::sensor_msgs::PointXYZIT& point(int index) const;
  ::openbot_bridge::sensor_msgs::PointXYZIT* add_point();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::openbot_bridge::sensor_msgs::PointXYZIT >&
      point() const;

  // string frame_id = 2;
  void clear_frame_id();
  const std::string& frame_id() const;
  void set_frame_id(const std::string& value);
  void set_frame_id(std::string&& value);
  void set_frame_id(const char* value);
  void set_frame_id(const char* value, size_t size);
  std::string* mutable_frame_id();
  std::string* release_frame_id();
  void set_allocated_frame_id(std::string* frame_id);
  private:
  const std::string& _internal_frame_id() const;
  void _internal_set_frame_id(const std::string& value);
  std::string* _internal_mutable_frame_id();
  public:

  // .openbot_bridge.basic_msgs.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::openbot_bridge::basic_msgs::Header& header() const;
  ::openbot_bridge::basic_msgs::Header* release_header();
  ::openbot_bridge::basic_msgs::Header* mutable_header();
  void set_allocated_header(::openbot_bridge::basic_msgs::Header* header);
  private:
  const ::openbot_bridge::basic_msgs::Header& _internal_header() const;
  ::openbot_bridge::basic_msgs::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::openbot_bridge::basic_msgs::Header* header);
  ::openbot_bridge::basic_msgs::Header* unsafe_arena_release_header();

  // bool is_dense = 3;
  void clear_is_dense();
  bool is_dense() const;
  void set_is_dense(bool value);
  private:
  bool _internal_is_dense() const;
  void _internal_set_is_dense(bool value);
  public:

  // uint32 width = 6;
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::uint32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // double measurement_time = 5;
  void clear_measurement_time();
  double measurement_time() const;
  void set_measurement_time(double value);
  private:
  double _internal_measurement_time() const;
  void _internal_set_measurement_time(double value);
  public:

  // uint32 height = 7;
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::uint32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:openbot_bridge.sensor_msgs.PointCloud)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::openbot_bridge::sensor_msgs::PointXYZIT > point_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frame_id_;
  ::openbot_bridge::basic_msgs::Header* header_;
  bool is_dense_;
  ::PROTOBUF_NAMESPACE_ID::uint32 width_;
  double measurement_time_;
  ::PROTOBUF_NAMESPACE_ID::uint32 height_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PointXYZIT

// float x = 1;
inline void PointXYZIT::clear_x() {
  x_ = 0;
}
inline float PointXYZIT::_internal_x() const {
  return x_;
}
inline float PointXYZIT::x() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointXYZIT.x)
  return _internal_x();
}
inline void PointXYZIT::_internal_set_x(float value) {
  
  x_ = value;
}
inline void PointXYZIT::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointXYZIT.x)
}

// float y = 2;
inline void PointXYZIT::clear_y() {
  y_ = 0;
}
inline float PointXYZIT::_internal_y() const {
  return y_;
}
inline float PointXYZIT::y() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointXYZIT.y)
  return _internal_y();
}
inline void PointXYZIT::_internal_set_y(float value) {
  
  y_ = value;
}
inline void PointXYZIT::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointXYZIT.y)
}

// float z = 3;
inline void PointXYZIT::clear_z() {
  z_ = 0;
}
inline float PointXYZIT::_internal_z() const {
  return z_;
}
inline float PointXYZIT::z() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointXYZIT.z)
  return _internal_z();
}
inline void PointXYZIT::_internal_set_z(float value) {
  
  z_ = value;
}
inline void PointXYZIT::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointXYZIT.z)
}

// uint32 intensity = 4;
inline void PointXYZIT::clear_intensity() {
  intensity_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PointXYZIT::_internal_intensity() const {
  return intensity_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PointXYZIT::intensity() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointXYZIT.intensity)
  return _internal_intensity();
}
inline void PointXYZIT::_internal_set_intensity(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  intensity_ = value;
}
inline void PointXYZIT::set_intensity(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_intensity(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointXYZIT.intensity)
}

// uint64 timestamp = 5;
inline void PointXYZIT::clear_timestamp() {
  timestamp_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 PointXYZIT::_internal_timestamp() const {
  return timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 PointXYZIT::timestamp() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointXYZIT.timestamp)
  return _internal_timestamp();
}
inline void PointXYZIT::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  timestamp_ = value;
}
inline void PointXYZIT::set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointXYZIT.timestamp)
}

// -------------------------------------------------------------------

// PointCloud

// .openbot_bridge.basic_msgs.Header header = 1;
inline bool PointCloud::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool PointCloud::has_header() const {
  return _internal_has_header();
}
inline const ::openbot_bridge::basic_msgs::Header& PointCloud::_internal_header() const {
  const ::openbot_bridge::basic_msgs::Header* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::openbot_bridge::basic_msgs::Header&>(
      ::openbot_bridge::basic_msgs::_Header_default_instance_);
}
inline const ::openbot_bridge::basic_msgs::Header& PointCloud::header() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointCloud.header)
  return _internal_header();
}
inline void PointCloud::unsafe_arena_set_allocated_header(
    ::openbot_bridge::basic_msgs::Header* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:openbot_bridge.sensor_msgs.PointCloud.header)
}
inline ::openbot_bridge::basic_msgs::Header* PointCloud::release_header() {
  
  ::openbot_bridge::basic_msgs::Header* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::openbot_bridge::basic_msgs::Header* PointCloud::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:openbot_bridge.sensor_msgs.PointCloud.header)
  
  ::openbot_bridge::basic_msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::openbot_bridge::basic_msgs::Header* PointCloud::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::openbot_bridge::basic_msgs::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::openbot_bridge::basic_msgs::Header* PointCloud::mutable_header() {
  // @@protoc_insertion_point(field_mutable:openbot_bridge.sensor_msgs.PointCloud.header)
  return _internal_mutable_header();
}
inline void PointCloud::set_allocated_header(::openbot_bridge::basic_msgs::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:openbot_bridge.sensor_msgs.PointCloud.header)
}

// string frame_id = 2;
inline void PointCloud::clear_frame_id() {
  frame_id_.ClearToEmpty();
}
inline const std::string& PointCloud::frame_id() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointCloud.frame_id)
  return _internal_frame_id();
}
inline void PointCloud::set_frame_id(const std::string& value) {
  _internal_set_frame_id(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointCloud.frame_id)
}
inline std::string* PointCloud::mutable_frame_id() {
  // @@protoc_insertion_point(field_mutable:openbot_bridge.sensor_msgs.PointCloud.frame_id)
  return _internal_mutable_frame_id();
}
inline const std::string& PointCloud::_internal_frame_id() const {
  return frame_id_.Get();
}
inline void PointCloud::_internal_set_frame_id(const std::string& value) {
  
  frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PointCloud::set_frame_id(std::string&& value) {
  
  frame_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:openbot_bridge.sensor_msgs.PointCloud.frame_id)
}
inline void PointCloud::set_frame_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:openbot_bridge.sensor_msgs.PointCloud.frame_id)
}
inline void PointCloud::set_frame_id(const char* value,
    size_t size) {
  
  frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:openbot_bridge.sensor_msgs.PointCloud.frame_id)
}
inline std::string* PointCloud::_internal_mutable_frame_id() {
  
  return frame_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PointCloud::release_frame_id() {
  // @@protoc_insertion_point(field_release:openbot_bridge.sensor_msgs.PointCloud.frame_id)
  return frame_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PointCloud::set_allocated_frame_id(std::string* frame_id) {
  if (frame_id != nullptr) {
    
  } else {
    
  }
  frame_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), frame_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:openbot_bridge.sensor_msgs.PointCloud.frame_id)
}

// bool is_dense = 3;
inline void PointCloud::clear_is_dense() {
  is_dense_ = false;
}
inline bool PointCloud::_internal_is_dense() const {
  return is_dense_;
}
inline bool PointCloud::is_dense() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointCloud.is_dense)
  return _internal_is_dense();
}
inline void PointCloud::_internal_set_is_dense(bool value) {
  
  is_dense_ = value;
}
inline void PointCloud::set_is_dense(bool value) {
  _internal_set_is_dense(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointCloud.is_dense)
}

// repeated .openbot_bridge.sensor_msgs.PointXYZIT point = 4;
inline int PointCloud::_internal_point_size() const {
  return point_.size();
}
inline int PointCloud::point_size() const {
  return _internal_point_size();
}
inline void PointCloud::clear_point() {
  point_.Clear();
}
inline ::openbot_bridge::sensor_msgs::PointXYZIT* PointCloud::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:openbot_bridge.sensor_msgs.PointCloud.point)
  return point_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::openbot_bridge::sensor_msgs::PointXYZIT >*
PointCloud::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:openbot_bridge.sensor_msgs.PointCloud.point)
  return &point_;
}
inline const ::openbot_bridge::sensor_msgs::PointXYZIT& PointCloud::_internal_point(int index) const {
  return point_.Get(index);
}
inline const ::openbot_bridge::sensor_msgs::PointXYZIT& PointCloud::point(int index) const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointCloud.point)
  return _internal_point(index);
}
inline ::openbot_bridge::sensor_msgs::PointXYZIT* PointCloud::_internal_add_point() {
  return point_.Add();
}
inline ::openbot_bridge::sensor_msgs::PointXYZIT* PointCloud::add_point() {
  // @@protoc_insertion_point(field_add:openbot_bridge.sensor_msgs.PointCloud.point)
  return _internal_add_point();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::openbot_bridge::sensor_msgs::PointXYZIT >&
PointCloud::point() const {
  // @@protoc_insertion_point(field_list:openbot_bridge.sensor_msgs.PointCloud.point)
  return point_;
}

// double measurement_time = 5;
inline void PointCloud::clear_measurement_time() {
  measurement_time_ = 0;
}
inline double PointCloud::_internal_measurement_time() const {
  return measurement_time_;
}
inline double PointCloud::measurement_time() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointCloud.measurement_time)
  return _internal_measurement_time();
}
inline void PointCloud::_internal_set_measurement_time(double value) {
  
  measurement_time_ = value;
}
inline void PointCloud::set_measurement_time(double value) {
  _internal_set_measurement_time(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointCloud.measurement_time)
}

// uint32 width = 6;
inline void PointCloud::clear_width() {
  width_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PointCloud::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PointCloud::width() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointCloud.width)
  return _internal_width();
}
inline void PointCloud::_internal_set_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  width_ = value;
}
inline void PointCloud::set_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointCloud.width)
}

// uint32 height = 7;
inline void PointCloud::clear_height() {
  height_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PointCloud::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PointCloud::height() const {
  // @@protoc_insertion_point(field_get:openbot_bridge.sensor_msgs.PointCloud.height)
  return _internal_height();
}
inline void PointCloud::_internal_set_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  height_ = value;
}
inline void PointCloud::set_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:openbot_bridge.sensor_msgs.PointCloud.height)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sensor_msgs
}  // namespace openbot_bridge

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto