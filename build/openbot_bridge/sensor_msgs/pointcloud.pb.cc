// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/sensor_msgs/pointcloud.proto

#include "openbot_bridge/sensor_msgs/pointcloud.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PointXYZIT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto;
namespace openbot_bridge {
namespace sensor_msgs {
class PointXYZITDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PointXYZIT> _instance;
} _PointXYZIT_default_instance_;
class PointCloudDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PointCloud> _instance;
} _PointCloud_default_instance_;
}  // namespace sensor_msgs
}  // namespace openbot_bridge
static void InitDefaultsscc_info_PointCloud_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::sensor_msgs::_PointCloud_default_instance_;
    new (ptr) ::openbot_bridge::sensor_msgs::PointCloud();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_PointCloud_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_PointCloud_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto}, {
      &scc_info_Header_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto.base,
      &scc_info_PointXYZIT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.base,}};

static void InitDefaultsscc_info_PointXYZIT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::sensor_msgs::_PointXYZIT_default_instance_;
    new (ptr) ::openbot_bridge::sensor_msgs::PointXYZIT();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PointXYZIT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PointXYZIT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointXYZIT, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointXYZIT, x_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointXYZIT, y_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointXYZIT, z_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointXYZIT, intensity_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointXYZIT, timestamp_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, header_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, frame_id_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, is_dense_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, point_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, measurement_time_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, width_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::PointCloud, height_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::openbot_bridge::sensor_msgs::PointXYZIT)},
  { 10, -1, sizeof(::openbot_bridge::sensor_msgs::PointCloud)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::sensor_msgs::_PointXYZIT_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::sensor_msgs::_PointCloud_default_instance_),
};

const char descriptor_table_protodef_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+openbot_bridge/sensor_msgs/pointcloud."
  "proto\022\032openbot_bridge.sensor_msgs\032&openb"
  "ot_bridge/basic_msgs/header.proto\"S\n\nPoi"
  "ntXYZIT\022\t\n\001x\030\001 \001(\002\022\t\n\001y\030\002 \001(\002\022\t\n\001z\030\003 \001(\002"
  "\022\021\n\tintensity\030\004 \001(\r\022\021\n\ttimestamp\030\005 \001(\004\"\323"
  "\001\n\nPointCloud\0221\n\006header\030\001 \001(\0132!.openbot_"
  "bridge.basic_msgs.Header\022\020\n\010frame_id\030\002 \001"
  "(\t\022\020\n\010is_dense\030\003 \001(\010\0225\n\005point\030\004 \003(\0132&.op"
  "enbot_bridge.sensor_msgs.PointXYZIT\022\030\n\020m"
  "easurement_time\030\005 \001(\001\022\r\n\005width\030\006 \001(\r\022\016\n\006"
  "height\030\007 \001(\rb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto_deps[1] = {
  &::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto_sccs[2] = {
  &scc_info_PointCloud_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.base,
  &scc_info_PointXYZIT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto, "openbot_bridge/sensor_msgs/pointcloud.proto", 420,
  &descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto_once, descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto_sccs, descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto, 2, file_level_enum_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto, file_level_service_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto)), true);
namespace openbot_bridge {
namespace sensor_msgs {

// ===================================================================

class PointXYZIT::_Internal {
 public:
};

PointXYZIT::PointXYZIT(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.sensor_msgs.PointXYZIT)
}
PointXYZIT::PointXYZIT(const PointXYZIT& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&timestamp_) -
    reinterpret_cast<char*>(&x_)) + sizeof(timestamp_));
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.sensor_msgs.PointXYZIT)
}

void PointXYZIT::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&x_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&timestamp_) -
      reinterpret_cast<char*>(&x_)) + sizeof(timestamp_));
}

PointXYZIT::~PointXYZIT() {
  // @@protoc_insertion_point(destructor:openbot_bridge.sensor_msgs.PointXYZIT)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PointXYZIT::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void PointXYZIT::ArenaDtor(void* object) {
  PointXYZIT* _this = reinterpret_cast< PointXYZIT* >(object);
  (void)_this;
}
void PointXYZIT::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PointXYZIT::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PointXYZIT& PointXYZIT::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PointXYZIT_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.base);
  return *internal_default_instance();
}


void PointXYZIT::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.sensor_msgs.PointXYZIT)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timestamp_) -
      reinterpret_cast<char*>(&x_)) + sizeof(timestamp_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PointXYZIT::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // uint32 intensity = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          intensity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 timestamp = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PointXYZIT::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.sensor_msgs.PointXYZIT)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  // float z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_z(), target);
  }

  // uint32 intensity = 4;
  if (this->intensity() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_intensity(), target);
  }

  // uint64 timestamp = 5;
  if (this->timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(5, this->_internal_timestamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.sensor_msgs.PointXYZIT)
  return target;
}

size_t PointXYZIT::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.sensor_msgs.PointXYZIT)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 4;
  }

  // float z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    total_size += 1 + 4;
  }

  // uint32 intensity = 4;
  if (this->intensity() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_intensity());
  }

  // uint64 timestamp = 5;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_timestamp());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PointXYZIT::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.sensor_msgs.PointXYZIT)
  GOOGLE_DCHECK_NE(&from, this);
  const PointXYZIT* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PointXYZIT>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.sensor_msgs.PointXYZIT)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.sensor_msgs.PointXYZIT)
    MergeFrom(*source);
  }
}

void PointXYZIT::MergeFrom(const PointXYZIT& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.sensor_msgs.PointXYZIT)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
  if (!(from.z() <= 0 && from.z() >= 0)) {
    _internal_set_z(from._internal_z());
  }
  if (from.intensity() != 0) {
    _internal_set_intensity(from._internal_intensity());
  }
  if (from.timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
}

void PointXYZIT::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.sensor_msgs.PointXYZIT)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PointXYZIT::CopyFrom(const PointXYZIT& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.sensor_msgs.PointXYZIT)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PointXYZIT::IsInitialized() const {
  return true;
}

void PointXYZIT::InternalSwap(PointXYZIT* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PointXYZIT, timestamp_)
      + sizeof(PointXYZIT::timestamp_)
      - PROTOBUF_FIELD_OFFSET(PointXYZIT, x_)>(
          reinterpret_cast<char*>(&x_),
          reinterpret_cast<char*>(&other->x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PointXYZIT::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class PointCloud::_Internal {
 public:
  static const ::openbot_bridge::basic_msgs::Header& header(const PointCloud* msg);
};

const ::openbot_bridge::basic_msgs::Header&
PointCloud::_Internal::header(const PointCloud* msg) {
  return *msg->header_;
}
void PointCloud::clear_header() {
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
PointCloud::PointCloud(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  point_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.sensor_msgs.PointCloud)
}
PointCloud::PointCloud(const PointCloud& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      point_(from.point_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  frame_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_frame_id().empty()) {
    frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_frame_id(), 
      GetArena());
  }
  if (from._internal_has_header()) {
    header_ = new ::openbot_bridge::basic_msgs::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  ::memcpy(&is_dense_, &from.is_dense_,
    static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&is_dense_)) + sizeof(height_));
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.sensor_msgs.PointCloud)
}

void PointCloud::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PointCloud_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.base);
  frame_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&header_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&height_) -
      reinterpret_cast<char*>(&header_)) + sizeof(height_));
}

PointCloud::~PointCloud() {
  // @@protoc_insertion_point(destructor:openbot_bridge.sensor_msgs.PointCloud)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PointCloud::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  frame_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void PointCloud::ArenaDtor(void* object) {
  PointCloud* _this = reinterpret_cast< PointCloud* >(object);
  (void)_this;
}
void PointCloud::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PointCloud::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PointCloud& PointCloud::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PointCloud_openbot_5fbridge_2fsensor_5fmsgs_2fpointcloud_2eproto.base);
  return *internal_default_instance();
}


void PointCloud::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.sensor_msgs.PointCloud)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  point_.Clear();
  frame_id_.ClearToEmpty();
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  ::memset(&is_dense_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&height_) -
      reinterpret_cast<char*>(&is_dense_)) + sizeof(height_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PointCloud::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .openbot_bridge.basic_msgs.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string frame_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_frame_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "openbot_bridge.sensor_msgs.PointCloud.frame_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool is_dense = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          is_dense_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .openbot_bridge.sensor_msgs.PointXYZIT point = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_point(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // double measurement_time = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          measurement_time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // uint32 width = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 height = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PointCloud::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.sensor_msgs.PointCloud)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // string frame_id = 2;
  if (this->frame_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_frame_id().data(), static_cast<int>(this->_internal_frame_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "openbot_bridge.sensor_msgs.PointCloud.frame_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_frame_id(), target);
  }

  // bool is_dense = 3;
  if (this->is_dense() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_is_dense(), target);
  }

  // repeated .openbot_bridge.sensor_msgs.PointXYZIT point = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_point_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_point(i), target, stream);
  }

  // double measurement_time = 5;
  if (!(this->measurement_time() <= 0 && this->measurement_time() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_measurement_time(), target);
  }

  // uint32 width = 6;
  if (this->width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(6, this->_internal_width(), target);
  }

  // uint32 height = 7;
  if (this->height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(7, this->_internal_height(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.sensor_msgs.PointCloud)
  return target;
}

size_t PointCloud::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.sensor_msgs.PointCloud)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .openbot_bridge.sensor_msgs.PointXYZIT point = 4;
  total_size += 1UL * this->_internal_point_size();
  for (const auto& msg : this->point_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string frame_id = 2;
  if (this->frame_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_frame_id());
  }

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // bool is_dense = 3;
  if (this->is_dense() != 0) {
    total_size += 1 + 1;
  }

  // uint32 width = 6;
  if (this->width() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_width());
  }

  // double measurement_time = 5;
  if (!(this->measurement_time() <= 0 && this->measurement_time() >= 0)) {
    total_size += 1 + 8;
  }

  // uint32 height = 7;
  if (this->height() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_height());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PointCloud::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.sensor_msgs.PointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  const PointCloud* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PointCloud>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.sensor_msgs.PointCloud)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.sensor_msgs.PointCloud)
    MergeFrom(*source);
  }
}

void PointCloud::MergeFrom(const PointCloud& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.sensor_msgs.PointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  point_.MergeFrom(from.point_);
  if (from.frame_id().size() > 0) {
    _internal_set_frame_id(from._internal_frame_id());
  }
  if (from.has_header()) {
    _internal_mutable_header()->::openbot_bridge::basic_msgs::Header::MergeFrom(from._internal_header());
  }
  if (from.is_dense() != 0) {
    _internal_set_is_dense(from._internal_is_dense());
  }
  if (from.width() != 0) {
    _internal_set_width(from._internal_width());
  }
  if (!(from.measurement_time() <= 0 && from.measurement_time() >= 0)) {
    _internal_set_measurement_time(from._internal_measurement_time());
  }
  if (from.height() != 0) {
    _internal_set_height(from._internal_height());
  }
}

void PointCloud::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.sensor_msgs.PointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PointCloud::CopyFrom(const PointCloud& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.sensor_msgs.PointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PointCloud::IsInitialized() const {
  return true;
}

void PointCloud::InternalSwap(PointCloud* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  point_.InternalSwap(&other->point_);
  frame_id_.Swap(&other->frame_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PointCloud, height_)
      + sizeof(PointCloud::height_)
      - PROTOBUF_FIELD_OFFSET(PointCloud, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PointCloud::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sensor_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::openbot_bridge::sensor_msgs::PointXYZIT* Arena::CreateMaybeMessage< ::openbot_bridge::sensor_msgs::PointXYZIT >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::sensor_msgs::PointXYZIT >(arena);
}
template<> PROTOBUF_NOINLINE ::openbot_bridge::sensor_msgs::PointCloud* Arena::CreateMaybeMessage< ::openbot_bridge::sensor_msgs::PointCloud >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::sensor_msgs::PointCloud >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>