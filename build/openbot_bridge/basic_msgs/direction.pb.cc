// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/basic_msgs/direction.proto

#include "openbot_bridge/basic_msgs/direction.pb.h"

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
namespace openbot_bridge {
namespace basic_msgs {
}  // namespace basic_msgs
}  // namespace openbot_bridge
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n)openbot_bridge/basic_msgs/direction.pr"
  "oto\022\031openbot_bridge.basic_msgs*q\n\tDirect"
  "ion\022\010\n\004EAST\020\000\022\010\n\004WEST\020\001\022\t\n\005SOUTH\020\002\022\t\n\005NO"
  "RTH\020\003\022\r\n\tNORTHEAST\020\004\022\r\n\tSOUTHEAST\020\005\022\r\n\tS"
  "OUTHWEST\020\006\022\r\n\tNORTHWEST\020\007b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto, "openbot_bridge/basic_msgs/direction.proto", 193,
  &descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto_once, descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto_sccs, descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto, 0, file_level_enum_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto, file_level_service_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto)), true);
namespace openbot_bridge {
namespace basic_msgs {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Direction_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto);
  return file_level_enum_descriptors_openbot_5fbridge_2fbasic_5fmsgs_2fdirection_2eproto[0];
}
bool Direction_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace basic_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>