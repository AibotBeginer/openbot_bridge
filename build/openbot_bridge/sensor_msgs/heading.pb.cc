// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/sensor_msgs/heading.proto

#include "openbot_bridge/sensor_msgs/heading.pb.h"

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
namespace openbot_bridge {
namespace sensor_msgs {
class HeadingDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Heading> _instance;
} _Heading_default_instance_;
}  // namespace sensor_msgs
}  // namespace openbot_bridge
static void InitDefaultsscc_info_Heading_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::sensor_msgs::_Heading_default_instance_;
    new (ptr) ::openbot_bridge::sensor_msgs::Heading();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Heading_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Heading_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto}, {
      &scc_info_Header_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, header_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, measurement_time_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, solution_status_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, position_type_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, baseline_length_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, heading_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, pitch_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, reserved_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, heading_std_dev_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, pitch_std_dev_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, station_id_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, satellite_tracked_number_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, satellite_soulution_number_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, satellite_number_obs_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, satellite_number_multi_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, solution_source_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, extended_solution_status_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, galileo_beidou_sig_mask_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::sensor_msgs::Heading, gps_glonass_sig_mask_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::openbot_bridge::sensor_msgs::Heading)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::sensor_msgs::_Heading_default_instance_),
};

const char descriptor_table_protodef_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(openbot_bridge/sensor_msgs/heading.pro"
  "to\022\032openbot_bridge.sensor_msgs\032&openbot_"
  "bridge/basic_msgs/header.proto\"\223\004\n\007Headi"
  "ng\0221\n\006header\030\001 \001(\0132!.openbot_bridge.basi"
  "c_msgs.Header\022\030\n\020measurement_time\030\002 \001(\001\022"
  "\027\n\017solution_status\030\003 \001(\r\022\025\n\rposition_typ"
  "e\030\004 \001(\r\022\027\n\017baseline_length\030\005 \001(\002\022\017\n\007head"
  "ing\030\006 \001(\002\022\r\n\005pitch\030\007 \001(\002\022\020\n\010reserved\030\010 \001"
  "(\002\022\027\n\017heading_std_dev\030\t \001(\002\022\025\n\rpitch_std"
  "_dev\030\n \001(\002\022\022\n\nstation_id\030\013 \001(\014\022 \n\030satell"
  "ite_tracked_number\030\014 \001(\r\022\"\n\032satellite_so"
  "ulution_number\030\r \001(\r\022\034\n\024satellite_number"
  "_obs\030\016 \001(\r\022\036\n\026satellite_number_multi\030\017 \001"
  "(\r\022\027\n\017solution_source\030\020 \001(\r\022 \n\030extended_"
  "solution_status\030\021 \001(\r\022\037\n\027galileo_beidou_"
  "sig_mask\030\022 \001(\r\022\034\n\024gps_glonass_sig_mask\030\023"
  " \001(\rb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto_deps[1] = {
  &::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto_sccs[1] = {
  &scc_info_Heading_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto, "openbot_bridge/sensor_msgs/heading.proto", 652,
  &descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto_once, descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto_sccs, descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto, 1, file_level_enum_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto, file_level_service_descriptors_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto)), true);
namespace openbot_bridge {
namespace sensor_msgs {

// ===================================================================

class Heading::_Internal {
 public:
  static const ::openbot_bridge::basic_msgs::Header& header(const Heading* msg);
};

const ::openbot_bridge::basic_msgs::Header&
Heading::_Internal::header(const Heading* msg) {
  return *msg->header_;
}
void Heading::clear_header() {
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
Heading::Heading(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.sensor_msgs.Heading)
}
Heading::Heading(const Heading& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  station_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_station_id().empty()) {
    station_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_station_id(), 
      GetArena());
  }
  if (from._internal_has_header()) {
    header_ = new ::openbot_bridge::basic_msgs::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  ::memcpy(&measurement_time_, &from.measurement_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&gps_glonass_sig_mask_) -
    reinterpret_cast<char*>(&measurement_time_)) + sizeof(gps_glonass_sig_mask_));
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.sensor_msgs.Heading)
}

void Heading::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Heading_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto.base);
  station_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&header_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&gps_glonass_sig_mask_) -
      reinterpret_cast<char*>(&header_)) + sizeof(gps_glonass_sig_mask_));
}

Heading::~Heading() {
  // @@protoc_insertion_point(destructor:openbot_bridge.sensor_msgs.Heading)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Heading::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  station_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void Heading::ArenaDtor(void* object) {
  Heading* _this = reinterpret_cast< Heading* >(object);
  (void)_this;
}
void Heading::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Heading::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Heading& Heading::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Heading_openbot_5fbridge_2fsensor_5fmsgs_2fheading_2eproto.base);
  return *internal_default_instance();
}


void Heading::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.sensor_msgs.Heading)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  station_id_.ClearToEmpty();
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  ::memset(&measurement_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&gps_glonass_sig_mask_) -
      reinterpret_cast<char*>(&measurement_time_)) + sizeof(gps_glonass_sig_mask_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Heading::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // double measurement_time = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          measurement_time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // uint32 solution_status = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          solution_status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 position_type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          position_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float baseline_length = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          baseline_length_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float heading = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53)) {
          heading_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float pitch = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61)) {
          pitch_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float reserved = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 69)) {
          reserved_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float heading_std_dev = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 77)) {
          heading_std_dev_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float pitch_std_dev = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 85)) {
          pitch_std_dev_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // bytes station_id = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          auto str = _internal_mutable_station_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 satellite_tracked_number = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          satellite_tracked_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 satellite_soulution_number = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 104)) {
          satellite_soulution_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 satellite_number_obs = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 112)) {
          satellite_number_obs_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 satellite_number_multi = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 120)) {
          satellite_number_multi_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 solution_source = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 128)) {
          solution_source_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 extended_solution_status = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 136)) {
          extended_solution_status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 galileo_beidou_sig_mask = 18;
      case 18:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 144)) {
          galileo_beidou_sig_mask_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 gps_glonass_sig_mask = 19;
      case 19:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 152)) {
          gps_glonass_sig_mask_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Heading::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.sensor_msgs.Heading)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // double measurement_time = 2;
  if (!(this->measurement_time() <= 0 && this->measurement_time() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_measurement_time(), target);
  }

  // uint32 solution_status = 3;
  if (this->solution_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_solution_status(), target);
  }

  // uint32 position_type = 4;
  if (this->position_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_position_type(), target);
  }

  // float baseline_length = 5;
  if (!(this->baseline_length() <= 0 && this->baseline_length() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_baseline_length(), target);
  }

  // float heading = 6;
  if (!(this->heading() <= 0 && this->heading() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(6, this->_internal_heading(), target);
  }

  // float pitch = 7;
  if (!(this->pitch() <= 0 && this->pitch() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(7, this->_internal_pitch(), target);
  }

  // float reserved = 8;
  if (!(this->reserved() <= 0 && this->reserved() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(8, this->_internal_reserved(), target);
  }

  // float heading_std_dev = 9;
  if (!(this->heading_std_dev() <= 0 && this->heading_std_dev() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(9, this->_internal_heading_std_dev(), target);
  }

  // float pitch_std_dev = 10;
  if (!(this->pitch_std_dev() <= 0 && this->pitch_std_dev() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(10, this->_internal_pitch_std_dev(), target);
  }

  // bytes station_id = 11;
  if (this->station_id().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        11, this->_internal_station_id(), target);
  }

  // uint32 satellite_tracked_number = 12;
  if (this->satellite_tracked_number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(12, this->_internal_satellite_tracked_number(), target);
  }

  // uint32 satellite_soulution_number = 13;
  if (this->satellite_soulution_number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(13, this->_internal_satellite_soulution_number(), target);
  }

  // uint32 satellite_number_obs = 14;
  if (this->satellite_number_obs() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(14, this->_internal_satellite_number_obs(), target);
  }

  // uint32 satellite_number_multi = 15;
  if (this->satellite_number_multi() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(15, this->_internal_satellite_number_multi(), target);
  }

  // uint32 solution_source = 16;
  if (this->solution_source() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(16, this->_internal_solution_source(), target);
  }

  // uint32 extended_solution_status = 17;
  if (this->extended_solution_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(17, this->_internal_extended_solution_status(), target);
  }

  // uint32 galileo_beidou_sig_mask = 18;
  if (this->galileo_beidou_sig_mask() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(18, this->_internal_galileo_beidou_sig_mask(), target);
  }

  // uint32 gps_glonass_sig_mask = 19;
  if (this->gps_glonass_sig_mask() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(19, this->_internal_gps_glonass_sig_mask(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.sensor_msgs.Heading)
  return target;
}

size_t Heading::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.sensor_msgs.Heading)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes station_id = 11;
  if (this->station_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_station_id());
  }

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // double measurement_time = 2;
  if (!(this->measurement_time() <= 0 && this->measurement_time() >= 0)) {
    total_size += 1 + 8;
  }

  // uint32 solution_status = 3;
  if (this->solution_status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_solution_status());
  }

  // uint32 position_type = 4;
  if (this->position_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_position_type());
  }

  // float baseline_length = 5;
  if (!(this->baseline_length() <= 0 && this->baseline_length() >= 0)) {
    total_size += 1 + 4;
  }

  // float heading = 6;
  if (!(this->heading() <= 0 && this->heading() >= 0)) {
    total_size += 1 + 4;
  }

  // float pitch = 7;
  if (!(this->pitch() <= 0 && this->pitch() >= 0)) {
    total_size += 1 + 4;
  }

  // float reserved = 8;
  if (!(this->reserved() <= 0 && this->reserved() >= 0)) {
    total_size += 1 + 4;
  }

  // float heading_std_dev = 9;
  if (!(this->heading_std_dev() <= 0 && this->heading_std_dev() >= 0)) {
    total_size += 1 + 4;
  }

  // float pitch_std_dev = 10;
  if (!(this->pitch_std_dev() <= 0 && this->pitch_std_dev() >= 0)) {
    total_size += 1 + 4;
  }

  // uint32 satellite_tracked_number = 12;
  if (this->satellite_tracked_number() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_satellite_tracked_number());
  }

  // uint32 satellite_soulution_number = 13;
  if (this->satellite_soulution_number() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_satellite_soulution_number());
  }

  // uint32 satellite_number_obs = 14;
  if (this->satellite_number_obs() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_satellite_number_obs());
  }

  // uint32 satellite_number_multi = 15;
  if (this->satellite_number_multi() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_satellite_number_multi());
  }

  // uint32 solution_source = 16;
  if (this->solution_source() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_solution_source());
  }

  // uint32 extended_solution_status = 17;
  if (this->extended_solution_status() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_extended_solution_status());
  }

  // uint32 galileo_beidou_sig_mask = 18;
  if (this->galileo_beidou_sig_mask() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_galileo_beidou_sig_mask());
  }

  // uint32 gps_glonass_sig_mask = 19;
  if (this->gps_glonass_sig_mask() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_gps_glonass_sig_mask());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Heading::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.sensor_msgs.Heading)
  GOOGLE_DCHECK_NE(&from, this);
  const Heading* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Heading>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.sensor_msgs.Heading)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.sensor_msgs.Heading)
    MergeFrom(*source);
  }
}

void Heading::MergeFrom(const Heading& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.sensor_msgs.Heading)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.station_id().size() > 0) {
    _internal_set_station_id(from._internal_station_id());
  }
  if (from.has_header()) {
    _internal_mutable_header()->::openbot_bridge::basic_msgs::Header::MergeFrom(from._internal_header());
  }
  if (!(from.measurement_time() <= 0 && from.measurement_time() >= 0)) {
    _internal_set_measurement_time(from._internal_measurement_time());
  }
  if (from.solution_status() != 0) {
    _internal_set_solution_status(from._internal_solution_status());
  }
  if (from.position_type() != 0) {
    _internal_set_position_type(from._internal_position_type());
  }
  if (!(from.baseline_length() <= 0 && from.baseline_length() >= 0)) {
    _internal_set_baseline_length(from._internal_baseline_length());
  }
  if (!(from.heading() <= 0 && from.heading() >= 0)) {
    _internal_set_heading(from._internal_heading());
  }
  if (!(from.pitch() <= 0 && from.pitch() >= 0)) {
    _internal_set_pitch(from._internal_pitch());
  }
  if (!(from.reserved() <= 0 && from.reserved() >= 0)) {
    _internal_set_reserved(from._internal_reserved());
  }
  if (!(from.heading_std_dev() <= 0 && from.heading_std_dev() >= 0)) {
    _internal_set_heading_std_dev(from._internal_heading_std_dev());
  }
  if (!(from.pitch_std_dev() <= 0 && from.pitch_std_dev() >= 0)) {
    _internal_set_pitch_std_dev(from._internal_pitch_std_dev());
  }
  if (from.satellite_tracked_number() != 0) {
    _internal_set_satellite_tracked_number(from._internal_satellite_tracked_number());
  }
  if (from.satellite_soulution_number() != 0) {
    _internal_set_satellite_soulution_number(from._internal_satellite_soulution_number());
  }
  if (from.satellite_number_obs() != 0) {
    _internal_set_satellite_number_obs(from._internal_satellite_number_obs());
  }
  if (from.satellite_number_multi() != 0) {
    _internal_set_satellite_number_multi(from._internal_satellite_number_multi());
  }
  if (from.solution_source() != 0) {
    _internal_set_solution_source(from._internal_solution_source());
  }
  if (from.extended_solution_status() != 0) {
    _internal_set_extended_solution_status(from._internal_extended_solution_status());
  }
  if (from.galileo_beidou_sig_mask() != 0) {
    _internal_set_galileo_beidou_sig_mask(from._internal_galileo_beidou_sig_mask());
  }
  if (from.gps_glonass_sig_mask() != 0) {
    _internal_set_gps_glonass_sig_mask(from._internal_gps_glonass_sig_mask());
  }
}

void Heading::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.sensor_msgs.Heading)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Heading::CopyFrom(const Heading& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.sensor_msgs.Heading)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Heading::IsInitialized() const {
  return true;
}

void Heading::InternalSwap(Heading* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  station_id_.Swap(&other->station_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Heading, gps_glonass_sig_mask_)
      + sizeof(Heading::gps_glonass_sig_mask_)
      - PROTOBUF_FIELD_OFFSET(Heading, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Heading::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sensor_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::openbot_bridge::sensor_msgs::Heading* Arena::CreateMaybeMessage< ::openbot_bridge::sensor_msgs::Heading >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::sensor_msgs::Heading >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>