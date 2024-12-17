// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/audio_msgs/audio.proto

#include "openbot_bridge/audio_msgs/audio.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Point3D_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto;
namespace openbot_bridge {
namespace audio_msgs {
class AudioDetectionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AudioDetection> _instance;
} _AudioDetection_default_instance_;
}  // namespace audio_msgs
}  // namespace openbot_bridge
static void InitDefaultsscc_info_AudioDetection_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::audio_msgs::_AudioDetection_default_instance_;
    new (ptr) ::openbot_bridge::audio_msgs::AudioDetection();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_AudioDetection_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_AudioDetection_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto}, {
      &scc_info_Header_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto.base,
      &scc_info_Point3D_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::audio_msgs::AudioDetection, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::audio_msgs::AudioDetection, header_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::audio_msgs::AudioDetection, is_siren_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::audio_msgs::AudioDetection, moving_result_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::audio_msgs::AudioDetection, position_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::audio_msgs::AudioDetection, source_degree_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::openbot_bridge::audio_msgs::AudioDetection)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::audio_msgs::_AudioDetection_default_instance_),
};

const char descriptor_table_protodef_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%openbot_bridge/audio_msgs/audio.proto\022"
  "\031openbot_bridge.audio_msgs\032,openbot_brid"
  "ge/audio_msgs/audio_common.proto\032(openbo"
  "t_bridge/basic_msgs/geometry.proto\032&open"
  "bot_bridge/basic_msgs/header.proto\"\342\001\n\016A"
  "udioDetection\0221\n\006header\030\001 \001(\0132!.openbot_"
  "bridge.basic_msgs.Header\022\020\n\010is_siren\030\002 \001"
  "(\010\022>\n\rmoving_result\030\003 \001(\0162\'.openbot_brid"
  "ge.audio_msgs.MovingResult\0224\n\010position\030\004"
  " \001(\0132\".openbot_bridge.basic_msgs.Point3D"
  "\022\025\n\rsource_degree\030\005 \001(\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto_deps[3] = {
  &::descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_5fcommon_2eproto,
  &::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fgeometry_2eproto,
  &::descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto_sccs[1] = {
  &scc_info_AudioDetection_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto, "openbot_bridge/audio_msgs/audio.proto", 431,
  &descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto_once, descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto_sccs, descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto, 1, file_level_enum_descriptors_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto, file_level_service_descriptors_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto)), true);
namespace openbot_bridge {
namespace audio_msgs {

// ===================================================================

class AudioDetection::_Internal {
 public:
  static const ::openbot_bridge::basic_msgs::Header& header(const AudioDetection* msg);
  static const ::openbot_bridge::basic_msgs::Point3D& position(const AudioDetection* msg);
};

const ::openbot_bridge::basic_msgs::Header&
AudioDetection::_Internal::header(const AudioDetection* msg) {
  return *msg->header_;
}
const ::openbot_bridge::basic_msgs::Point3D&
AudioDetection::_Internal::position(const AudioDetection* msg) {
  return *msg->position_;
}
void AudioDetection::clear_header() {
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
void AudioDetection::clear_position() {
  if (GetArena() == nullptr && position_ != nullptr) {
    delete position_;
  }
  position_ = nullptr;
}
AudioDetection::AudioDetection(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.audio_msgs.AudioDetection)
}
AudioDetection::AudioDetection(const AudioDetection& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    header_ = new ::openbot_bridge::basic_msgs::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from._internal_has_position()) {
    position_ = new ::openbot_bridge::basic_msgs::Point3D(*from.position_);
  } else {
    position_ = nullptr;
  }
  ::memcpy(&is_siren_, &from.is_siren_,
    static_cast<size_t>(reinterpret_cast<char*>(&source_degree_) -
    reinterpret_cast<char*>(&is_siren_)) + sizeof(source_degree_));
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.audio_msgs.AudioDetection)
}

void AudioDetection::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_AudioDetection_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto.base);
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&header_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&source_degree_) -
      reinterpret_cast<char*>(&header_)) + sizeof(source_degree_));
}

AudioDetection::~AudioDetection() {
  // @@protoc_insertion_point(destructor:openbot_bridge.audio_msgs.AudioDetection)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AudioDetection::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete position_;
}

void AudioDetection::ArenaDtor(void* object) {
  AudioDetection* _this = reinterpret_cast< AudioDetection* >(object);
  (void)_this;
}
void AudioDetection::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AudioDetection::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AudioDetection& AudioDetection::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AudioDetection_openbot_5fbridge_2faudio_5fmsgs_2faudio_2eproto.base);
  return *internal_default_instance();
}


void AudioDetection::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.audio_msgs.AudioDetection)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  if (GetArena() == nullptr && position_ != nullptr) {
    delete position_;
  }
  position_ = nullptr;
  ::memset(&is_siren_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&source_degree_) -
      reinterpret_cast<char*>(&is_siren_)) + sizeof(source_degree_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AudioDetection::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // bool is_siren = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          is_siren_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.audio_msgs.MovingResult moving_result = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_moving_result(static_cast<::openbot_bridge::audio_msgs::MovingResult>(val));
        } else goto handle_unusual;
        continue;
      // .openbot_bridge.basic_msgs.Point3D position = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_position(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double source_degree = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          source_degree_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

::PROTOBUF_NAMESPACE_ID::uint8* AudioDetection::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.audio_msgs.AudioDetection)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // bool is_siren = 2;
  if (this->is_siren() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_is_siren(), target);
  }

  // .openbot_bridge.audio_msgs.MovingResult moving_result = 3;
  if (this->moving_result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_moving_result(), target);
  }

  // .openbot_bridge.basic_msgs.Point3D position = 4;
  if (this->has_position()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::position(this), target, stream);
  }

  // double source_degree = 5;
  if (!(this->source_degree() <= 0 && this->source_degree() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_source_degree(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.audio_msgs.AudioDetection)
  return target;
}

size_t AudioDetection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.audio_msgs.AudioDetection)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .openbot_bridge.basic_msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .openbot_bridge.basic_msgs.Point3D position = 4;
  if (this->has_position()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // bool is_siren = 2;
  if (this->is_siren() != 0) {
    total_size += 1 + 1;
  }

  // .openbot_bridge.audio_msgs.MovingResult moving_result = 3;
  if (this->moving_result() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_moving_result());
  }

  // double source_degree = 5;
  if (!(this->source_degree() <= 0 && this->source_degree() >= 0)) {
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

void AudioDetection::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.audio_msgs.AudioDetection)
  GOOGLE_DCHECK_NE(&from, this);
  const AudioDetection* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AudioDetection>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.audio_msgs.AudioDetection)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.audio_msgs.AudioDetection)
    MergeFrom(*source);
  }
}

void AudioDetection::MergeFrom(const AudioDetection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.audio_msgs.AudioDetection)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    _internal_mutable_header()->::openbot_bridge::basic_msgs::Header::MergeFrom(from._internal_header());
  }
  if (from.has_position()) {
    _internal_mutable_position()->::openbot_bridge::basic_msgs::Point3D::MergeFrom(from._internal_position());
  }
  if (from.is_siren() != 0) {
    _internal_set_is_siren(from._internal_is_siren());
  }
  if (from.moving_result() != 0) {
    _internal_set_moving_result(from._internal_moving_result());
  }
  if (!(from.source_degree() <= 0 && from.source_degree() >= 0)) {
    _internal_set_source_degree(from._internal_source_degree());
  }
}

void AudioDetection::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.audio_msgs.AudioDetection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AudioDetection::CopyFrom(const AudioDetection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.audio_msgs.AudioDetection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AudioDetection::IsInitialized() const {
  return true;
}

void AudioDetection::InternalSwap(AudioDetection* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AudioDetection, source_degree_)
      + sizeof(AudioDetection::source_degree_)
      - PROTOBUF_FIELD_OFFSET(AudioDetection, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AudioDetection::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace audio_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::openbot_bridge::audio_msgs::AudioDetection* Arena::CreateMaybeMessage< ::openbot_bridge::audio_msgs::AudioDetection >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::audio_msgs::AudioDetection >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>