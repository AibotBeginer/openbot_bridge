// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/localization_msgs/pose.proto

#include "openbot_bridge/localization_msgs/pose.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Point3D_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PointENU_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Quaternion_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto;
namespace openbot_bridge {
namespace localization_msgs {
class PoseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Pose> _instance;
} _Pose_default_instance_;
}  // namespace localization_msgs
}  // namespace openbot_bridge
static void InitDefaultsscc_info_Pose_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::localization_msgs::_Pose_default_instance_;
    new (ptr) ::openbot_bridge::localization_msgs::Pose();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Pose_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_Pose_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto}, {
      &scc_info_PointENU_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto.base,
      &scc_info_Quaternion_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto.base,
      &scc_info_Point3D_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, position_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, orientation_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, linear_velocity_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, linear_acceleration_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, angular_velocity_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, heading_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, linear_acceleration_vrf_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, angular_velocity_vrf_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::localization_msgs::Pose, euler_angles_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::openbot_bridge::localization_msgs::Pose)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::localization_msgs::_Pose_default_instance_),
};

const char descriptor_table_protodef_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+openbot_bridge/localization_msgs/pose."
  "proto\022 openbot_bridge.localization_msgs\032"
  "(openbot_bridge/basic_msgs/geometry.prot"
  "o\"\207\004\n\004Pose\0225\n\010position\030\001 \001(\0132#.openbot_b"
  "ridge.basic_msgs.PointENU\022:\n\013orientation"
  "\030\002 \001(\0132%.openbot_bridge.basic_msgs.Quate"
  "rnion\022;\n\017linear_velocity\030\003 \001(\0132\".openbot"
  "_bridge.basic_msgs.Point3D\022\?\n\023linear_acc"
  "eleration\030\004 \001(\0132\".openbot_bridge.basic_m"
  "sgs.Point3D\022<\n\020angular_velocity\030\005 \001(\0132\"."
  "openbot_bridge.basic_msgs.Point3D\022\017\n\007hea"
  "ding\030\006 \001(\001\022C\n\027linear_acceleration_vrf\030\007 "
  "\001(\0132\".openbot_bridge.basic_msgs.Point3D\022"
  "@\n\024angular_velocity_vrf\030\010 \001(\0132\".openbot_"
  "bridge.basic_msgs.Point3D\0228\n\014euler_angle"
  "s\030\t \001(\0132\".openbot_bridge.basic_msgs.Poin"
  "t3Db\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto_deps[1] = {
  &::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto_sccs[1] = {
  &scc_info_Pose_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto, "openbot_bridge/localization_msgs/pose.proto", 651,
  &descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto_once, descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto_sccs, descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto, 1, file_level_enum_descriptors_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto, file_level_service_descriptors_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto)), true);
namespace openbot_bridge {
namespace localization_msgs {

// ===================================================================

class Pose::_Internal {
 public:
  static const ::openbot_bridge::basic_msgs::PointENU& position(const Pose* msg);
  static const ::openbot_bridge::basic_msgs::Quaternion& orientation(const Pose* msg);
  static const ::openbot_bridge::basic_msgs::Point3D& linear_velocity(const Pose* msg);
  static const ::openbot_bridge::basic_msgs::Point3D& linear_acceleration(const Pose* msg);
  static const ::openbot_bridge::basic_msgs::Point3D& angular_velocity(const Pose* msg);
  static const ::openbot_bridge::basic_msgs::Point3D& linear_acceleration_vrf(const Pose* msg);
  static const ::openbot_bridge::basic_msgs::Point3D& angular_velocity_vrf(const Pose* msg);
  static const ::openbot_bridge::basic_msgs::Point3D& euler_angles(const Pose* msg);
};

const ::openbot_bridge::basic_msgs::PointENU&
Pose::_Internal::position(const Pose* msg) {
  return *msg->position_;
}
const ::openbot_bridge::basic_msgs::Quaternion&
Pose::_Internal::orientation(const Pose* msg) {
  return *msg->orientation_;
}
const ::openbot_bridge::basic_msgs::Point3D&
Pose::_Internal::linear_velocity(const Pose* msg) {
  return *msg->linear_velocity_;
}
const ::openbot_bridge::basic_msgs::Point3D&
Pose::_Internal::linear_acceleration(const Pose* msg) {
  return *msg->linear_acceleration_;
}
const ::openbot_bridge::basic_msgs::Point3D&
Pose::_Internal::angular_velocity(const Pose* msg) {
  return *msg->angular_velocity_;
}
const ::openbot_bridge::basic_msgs::Point3D&
Pose::_Internal::linear_acceleration_vrf(const Pose* msg) {
  return *msg->linear_acceleration_vrf_;
}
const ::openbot_bridge::basic_msgs::Point3D&
Pose::_Internal::angular_velocity_vrf(const Pose* msg) {
  return *msg->angular_velocity_vrf_;
}
const ::openbot_bridge::basic_msgs::Point3D&
Pose::_Internal::euler_angles(const Pose* msg) {
  return *msg->euler_angles_;
}
void Pose::clear_position() {
  if (GetArena() == nullptr && position_ != nullptr) {
    delete position_;
  }
  position_ = nullptr;
}
void Pose::clear_orientation() {
  if (GetArena() == nullptr && orientation_ != nullptr) {
    delete orientation_;
  }
  orientation_ = nullptr;
}
void Pose::clear_linear_velocity() {
  if (GetArena() == nullptr && linear_velocity_ != nullptr) {
    delete linear_velocity_;
  }
  linear_velocity_ = nullptr;
}
void Pose::clear_linear_acceleration() {
  if (GetArena() == nullptr && linear_acceleration_ != nullptr) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = nullptr;
}
void Pose::clear_angular_velocity() {
  if (GetArena() == nullptr && angular_velocity_ != nullptr) {
    delete angular_velocity_;
  }
  angular_velocity_ = nullptr;
}
void Pose::clear_linear_acceleration_vrf() {
  if (GetArena() == nullptr && linear_acceleration_vrf_ != nullptr) {
    delete linear_acceleration_vrf_;
  }
  linear_acceleration_vrf_ = nullptr;
}
void Pose::clear_angular_velocity_vrf() {
  if (GetArena() == nullptr && angular_velocity_vrf_ != nullptr) {
    delete angular_velocity_vrf_;
  }
  angular_velocity_vrf_ = nullptr;
}
void Pose::clear_euler_angles() {
  if (GetArena() == nullptr && euler_angles_ != nullptr) {
    delete euler_angles_;
  }
  euler_angles_ = nullptr;
}
Pose::Pose(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.localization_msgs.Pose)
}
Pose::Pose(const Pose& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_position()) {
    position_ = new ::openbot_bridge::basic_msgs::PointENU(*from.position_);
  } else {
    position_ = nullptr;
  }
  if (from._internal_has_orientation()) {
    orientation_ = new ::openbot_bridge::basic_msgs::Quaternion(*from.orientation_);
  } else {
    orientation_ = nullptr;
  }
  if (from._internal_has_linear_velocity()) {
    linear_velocity_ = new ::openbot_bridge::basic_msgs::Point3D(*from.linear_velocity_);
  } else {
    linear_velocity_ = nullptr;
  }
  if (from._internal_has_linear_acceleration()) {
    linear_acceleration_ = new ::openbot_bridge::basic_msgs::Point3D(*from.linear_acceleration_);
  } else {
    linear_acceleration_ = nullptr;
  }
  if (from._internal_has_angular_velocity()) {
    angular_velocity_ = new ::openbot_bridge::basic_msgs::Point3D(*from.angular_velocity_);
  } else {
    angular_velocity_ = nullptr;
  }
  if (from._internal_has_linear_acceleration_vrf()) {
    linear_acceleration_vrf_ = new ::openbot_bridge::basic_msgs::Point3D(*from.linear_acceleration_vrf_);
  } else {
    linear_acceleration_vrf_ = nullptr;
  }
  if (from._internal_has_angular_velocity_vrf()) {
    angular_velocity_vrf_ = new ::openbot_bridge::basic_msgs::Point3D(*from.angular_velocity_vrf_);
  } else {
    angular_velocity_vrf_ = nullptr;
  }
  if (from._internal_has_euler_angles()) {
    euler_angles_ = new ::openbot_bridge::basic_msgs::Point3D(*from.euler_angles_);
  } else {
    euler_angles_ = nullptr;
  }
  heading_ = from.heading_;
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.localization_msgs.Pose)
}

void Pose::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Pose_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto.base);
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&position_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&heading_) -
      reinterpret_cast<char*>(&position_)) + sizeof(heading_));
}

Pose::~Pose() {
  // @@protoc_insertion_point(destructor:openbot_bridge.localization_msgs.Pose)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Pose::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete position_;
  if (this != internal_default_instance()) delete orientation_;
  if (this != internal_default_instance()) delete linear_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_;
  if (this != internal_default_instance()) delete angular_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_vrf_;
  if (this != internal_default_instance()) delete angular_velocity_vrf_;
  if (this != internal_default_instance()) delete euler_angles_;
}

void Pose::ArenaDtor(void* object) {
  Pose* _this = reinterpret_cast< Pose* >(object);
  (void)_this;
}
void Pose::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Pose::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Pose& Pose::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Pose_openbot_5fbridge_2flocalization_5fmsgs_2fpose_2eproto.base);
  return *internal_default_instance();
}


void Pose::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.localization_msgs.Pose)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && position_ != nullptr) {
    delete position_;
  }
  position_ = nullptr;
  if (GetArena() == nullptr && orientation_ != nullptr) {
    delete orientation_;
  }
  orientation_ = nullptr;
  if (GetArena() == nullptr && linear_velocity_ != nullptr) {
    delete linear_velocity_;
  }
  linear_velocity_ = nullptr;
  if (GetArena() == nullptr && linear_acceleration_ != nullptr) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = nullptr;
  if (GetArena() == nullptr && angular_velocity_ != nullptr) {
    delete angular_velocity_;
  }
  angular_velocity_ = nullptr;
  if (GetArena() == nullptr && linear_acceleration_vrf_ != nullptr) {
    delete linear_acceleration_vrf_;
  }
  linear_acceleration_vrf_ = nullptr;
  if (GetArena() == nullptr && angular_velocity_vrf_ != nullptr) {
    delete angular_velocity_vrf_;
  }
  angular_velocity_vrf_ = nullptr;
  if (GetArena() == nullptr && euler_angles_ != nullptr) {
    delete euler_angles_;
  }
  euler_angles_ = nullptr;
  heading_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Pose::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .openbot_bridge.basic_msgs.PointENU position = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_position(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Quaternion orientation = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_orientation(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Point3D linear_velocity = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_velocity(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Point3D linear_acceleration = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_acceleration(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Point3D angular_velocity = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_angular_velocity(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double heading = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          heading_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Point3D linear_acceleration_vrf = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_acceleration_vrf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Point3D angular_velocity_vrf = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_angular_velocity_vrf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Point3D euler_angles = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ctx->ParseMessage(_internal_mutable_euler_angles(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Pose::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.localization_msgs.Pose)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .openbot_bridge.basic_msgs.PointENU position = 1;
  if (this->has_position()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::position(this), target, stream);
  }

  // .openbot_bridge.basic_msgs.Quaternion orientation = 2;
  if (this->has_orientation()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::orientation(this), target, stream);
  }

  // .openbot_bridge.basic_msgs.Point3D linear_velocity = 3;
  if (this->has_linear_velocity()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::linear_velocity(this), target, stream);
  }

  // .openbot_bridge.basic_msgs.Point3D linear_acceleration = 4;
  if (this->has_linear_acceleration()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::linear_acceleration(this), target, stream);
  }

  // .openbot_bridge.basic_msgs.Point3D angular_velocity = 5;
  if (this->has_angular_velocity()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::angular_velocity(this), target, stream);
  }

  // double heading = 6;
  if (!(this->heading() <= 0 && this->heading() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_heading(), target);
  }

  // .openbot_bridge.basic_msgs.Point3D linear_acceleration_vrf = 7;
  if (this->has_linear_acceleration_vrf()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::linear_acceleration_vrf(this), target, stream);
  }

  // .openbot_bridge.basic_msgs.Point3D angular_velocity_vrf = 8;
  if (this->has_angular_velocity_vrf()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::angular_velocity_vrf(this), target, stream);
  }

  // .openbot_bridge.basic_msgs.Point3D euler_angles = 9;
  if (this->has_euler_angles()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        9, _Internal::euler_angles(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.localization_msgs.Pose)
  return target;
}

size_t Pose::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.localization_msgs.Pose)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .openbot_bridge.basic_msgs.PointENU position = 1;
  if (this->has_position()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // .openbot_bridge.basic_msgs.Quaternion orientation = 2;
  if (this->has_orientation()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *orientation_);
  }

  // .openbot_bridge.basic_msgs.Point3D linear_velocity = 3;
  if (this->has_linear_velocity()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *linear_velocity_);
  }

  // .openbot_bridge.basic_msgs.Point3D linear_acceleration = 4;
  if (this->has_linear_acceleration()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *linear_acceleration_);
  }

  // .openbot_bridge.basic_msgs.Point3D angular_velocity = 5;
  if (this->has_angular_velocity()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *angular_velocity_);
  }

  // .openbot_bridge.basic_msgs.Point3D linear_acceleration_vrf = 7;
  if (this->has_linear_acceleration_vrf()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *linear_acceleration_vrf_);
  }

  // .openbot_bridge.basic_msgs.Point3D angular_velocity_vrf = 8;
  if (this->has_angular_velocity_vrf()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *angular_velocity_vrf_);
  }

  // .openbot_bridge.basic_msgs.Point3D euler_angles = 9;
  if (this->has_euler_angles()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *euler_angles_);
  }

  // double heading = 6;
  if (!(this->heading() <= 0 && this->heading() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Pose::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.localization_msgs.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  const Pose* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Pose>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.localization_msgs.Pose)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.localization_msgs.Pose)
    MergeFrom(*source);
  }
}

void Pose::MergeFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.localization_msgs.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_position()) {
    _internal_mutable_position()->::openbot_bridge::basic_msgs::PointENU::MergeFrom(from._internal_position());
  }
  if (from.has_orientation()) {
    _internal_mutable_orientation()->::openbot_bridge::basic_msgs::Quaternion::MergeFrom(from._internal_orientation());
  }
  if (from.has_linear_velocity()) {
    _internal_mutable_linear_velocity()->::openbot_bridge::basic_msgs::Point3D::MergeFrom(from._internal_linear_velocity());
  }
  if (from.has_linear_acceleration()) {
    _internal_mutable_linear_acceleration()->::openbot_bridge::basic_msgs::Point3D::MergeFrom(from._internal_linear_acceleration());
  }
  if (from.has_angular_velocity()) {
    _internal_mutable_angular_velocity()->::openbot_bridge::basic_msgs::Point3D::MergeFrom(from._internal_angular_velocity());
  }
  if (from.has_linear_acceleration_vrf()) {
    _internal_mutable_linear_acceleration_vrf()->::openbot_bridge::basic_msgs::Point3D::MergeFrom(from._internal_linear_acceleration_vrf());
  }
  if (from.has_angular_velocity_vrf()) {
    _internal_mutable_angular_velocity_vrf()->::openbot_bridge::basic_msgs::Point3D::MergeFrom(from._internal_angular_velocity_vrf());
  }
  if (from.has_euler_angles()) {
    _internal_mutable_euler_angles()->::openbot_bridge::basic_msgs::Point3D::MergeFrom(from._internal_euler_angles());
  }
  if (!(from.heading() <= 0 && from.heading() >= 0)) {
    _internal_set_heading(from._internal_heading());
  }
}

void Pose::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.localization_msgs.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pose::CopyFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.localization_msgs.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose::IsInitialized() const {
  return true;
}

void Pose::InternalSwap(Pose* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Pose, heading_)
      + sizeof(Pose::heading_)
      - PROTOBUF_FIELD_OFFSET(Pose, position_)>(
          reinterpret_cast<char*>(&position_),
          reinterpret_cast<char*>(&other->position_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Pose::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace localization_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::openbot_bridge::localization_msgs::Pose* Arena::CreateMaybeMessage< ::openbot_bridge::localization_msgs::Pose >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::localization_msgs::Pose >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>