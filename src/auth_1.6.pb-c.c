/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#include "auth_1.6.pb-c.h"
void   pbuf__pid__init
                     (Pbuf__Pid         *message)
{
  static Pbuf__Pid init_value = PBUF__PID__INIT;
  *message = init_value;
}
size_t pbuf__pid__get_packed_size
                     (const Pbuf__Pid *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pid__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__pid__pack
                     (const Pbuf__Pid *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pid__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__pid__pack_to_buffer
                     (const Pbuf__Pid *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pid__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Pid *
       pbuf__pid__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Pid *)
     protobuf_c_message_unpack (&pbuf__pid__descriptor,
                                allocator, len, data);
}
void   pbuf__pid__free_unpacked
                     (Pbuf__Pid *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pid__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__demo__init
                     (Pbuf__Demo         *message)
{
  static Pbuf__Demo init_value = PBUF__DEMO__INIT;
  *message = init_value;
}
size_t pbuf__demo__get_packed_size
                     (const Pbuf__Demo *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__demo__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__demo__pack
                     (const Pbuf__Demo *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__demo__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__demo__pack_to_buffer
                     (const Pbuf__Demo *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__demo__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Demo *
       pbuf__demo__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Demo *)
     protobuf_c_message_unpack (&pbuf__demo__descriptor,
                                allocator, len, data);
}
void   pbuf__demo__free_unpacked
                     (Pbuf__Demo *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__demo__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__pi__init
                     (Pbuf__Pi         *message)
{
  static Pbuf__Pi init_value = PBUF__PI__INIT;
  *message = init_value;
}
size_t pbuf__pi__get_packed_size
                     (const Pbuf__Pi *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pi__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__pi__pack
                     (const Pbuf__Pi *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pi__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__pi__pack_to_buffer
                     (const Pbuf__Pi *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pi__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Pi *
       pbuf__pi__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Pi *)
     protobuf_c_message_unpack (&pbuf__pi__descriptor,
                                allocator, len, data);
}
void   pbuf__pi__free_unpacked
                     (Pbuf__Pi *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pi__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__pa__init
                     (Pbuf__Pa         *message)
{
  static Pbuf__Pa init_value = PBUF__PA__INIT;
  *message = init_value;
}
size_t pbuf__pa__get_packed_size
                     (const Pbuf__Pa *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pa__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__pa__pack
                     (const Pbuf__Pa *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pa__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__pa__pack_to_buffer
                     (const Pbuf__Pa *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pa__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Pa *
       pbuf__pa__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Pa *)
     protobuf_c_message_unpack (&pbuf__pa__descriptor,
                                allocator, len, data);
}
void   pbuf__pa__free_unpacked
                     (Pbuf__Pa *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pa__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__pfa__init
                     (Pbuf__Pfa         *message)
{
  static Pbuf__Pfa init_value = PBUF__PFA__INIT;
  *message = init_value;
}
size_t pbuf__pfa__get_packed_size
                     (const Pbuf__Pfa *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pfa__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__pfa__pack
                     (const Pbuf__Pfa *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pfa__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__pfa__pack_to_buffer
                     (const Pbuf__Pfa *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pfa__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Pfa *
       pbuf__pfa__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Pfa *)
     protobuf_c_message_unpack (&pbuf__pfa__descriptor,
                                allocator, len, data);
}
void   pbuf__pfa__free_unpacked
                     (Pbuf__Pfa *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pfa__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__dob__init
                     (Pbuf__Dob         *message)
{
  static Pbuf__Dob init_value = PBUF__DOB__INIT;
  *message = init_value;
}
size_t pbuf__dob__get_packed_size
                     (const Pbuf__Dob *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__dob__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__dob__pack
                     (const Pbuf__Dob *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__dob__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__dob__pack_to_buffer
                     (const Pbuf__Dob *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__dob__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Dob *
       pbuf__dob__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Dob *)
     protobuf_c_message_unpack (&pbuf__dob__descriptor,
                                allocator, len, data);
}
void   pbuf__dob__free_unpacked
                     (Pbuf__Dob *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__dob__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__bios__init
                     (Pbuf__Bios         *message)
{
  static Pbuf__Bios init_value = PBUF__BIOS__INIT;
  *message = init_value;
}
size_t pbuf__bios__get_packed_size
                     (const Pbuf__Bios *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bios__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__bios__pack
                     (const Pbuf__Bios *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bios__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__bios__pack_to_buffer
                     (const Pbuf__Bios *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bios__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Bios *
       pbuf__bios__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Bios *)
     protobuf_c_message_unpack (&pbuf__bios__descriptor,
                                allocator, len, data);
}
void   pbuf__bios__free_unpacked
                     (Pbuf__Bios *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bios__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__bio__init
                     (Pbuf__Bio         *message)
{
  static Pbuf__Bio init_value = PBUF__BIO__INIT;
  *message = init_value;
}
size_t pbuf__bio__get_packed_size
                     (const Pbuf__Bio *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bio__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__bio__pack
                     (const Pbuf__Bio *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bio__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__bio__pack_to_buffer
                     (const Pbuf__Bio *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bio__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Bio *
       pbuf__bio__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Bio *)
     protobuf_c_message_unpack (&pbuf__bio__descriptor,
                                allocator, len, data);
}
void   pbuf__bio__free_unpacked
                     (Pbuf__Bio *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__bio__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pbuf__pv__init
                     (Pbuf__Pv         *message)
{
  static Pbuf__Pv init_value = PBUF__PV__INIT;
  *message = init_value;
}
size_t pbuf__pv__get_packed_size
                     (const Pbuf__Pv *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pv__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pbuf__pv__pack
                     (const Pbuf__Pv *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pv__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pbuf__pv__pack_to_buffer
                     (const Pbuf__Pv *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pv__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pbuf__Pv *
       pbuf__pv__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pbuf__Pv *)
     protobuf_c_message_unpack (&pbuf__pv__descriptor,
                                allocator, len, data);
}
void   pbuf__pv__free_unpacked
                     (Pbuf__Pv *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pbuf__pv__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor pbuf__pid__field_descriptors[9] =
{
  {
    "ver",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, ver),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ts",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, ts),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "demo",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, demo),
    &pbuf__demo__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "bios",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, bios),
    &pbuf__bios__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "pv",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, pv),
    &pbuf__pv__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ts1",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, ts1),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ts2",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, ts2),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ts3",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, ts3),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ts4",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pid, ts4),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__pid__field_indices_by_name[] = {
  3,   /* field[3] = bios */
  2,   /* field[2] = demo */
  4,   /* field[4] = pv */
  1,   /* field[1] = ts */
  5,   /* field[5] = ts1 */
  6,   /* field[6] = ts2 */
  7,   /* field[7] = ts3 */
  8,   /* field[8] = ts4 */
  0,   /* field[0] = ver */
};
static const ProtobufCIntRange pbuf__pid__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor pbuf__pid__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Pid",
  "Pid",
  "Pbuf__Pid",
  "pbuf",
  sizeof(Pbuf__Pid),
  9,
  pbuf__pid__field_descriptors,
  pbuf__pid__field_indices_by_name,
  1,  pbuf__pid__number_ranges,
  (ProtobufCMessageInit) pbuf__pid__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbuf__demo__field_descriptors[5] =
{
  {
    "lang",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Pbuf__Demo, has_lang),
    PROTOBUF_C_OFFSETOF(Pbuf__Demo, lang),
    &pbuf__lang_code__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "pi",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Demo, pi),
    &pbuf__pi__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "pa",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Demo, pa),
    &pbuf__pa__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "pfa",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Demo, pfa),
    &pbuf__pfa__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "name",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Demo, name),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__demo__field_indices_by_name[] = {
  0,   /* field[0] = lang */
  4,   /* field[4] = name */
  2,   /* field[2] = pa */
  3,   /* field[3] = pfa */
  1,   /* field[1] = pi */
};
static const ProtobufCIntRange pbuf__demo__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor pbuf__demo__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Demo",
  "Demo",
  "Pbuf__Demo",
  "pbuf",
  sizeof(Pbuf__Demo),
  5,
  pbuf__demo__field_descriptors,
  pbuf__demo__field_indices_by_name,
  1,  pbuf__demo__number_ranges,
  (ProtobufCMessageInit) pbuf__demo__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue pbuf__pi__gender__enum_values_by_number[3] =
{
  { "F", "PBUF__PI__GENDER__F", 1 },
  { "M", "PBUF__PI__GENDER__M", 2 },
  { "T", "PBUF__PI__GENDER__T", 3 },
};
static const ProtobufCIntRange pbuf__pi__gender__value_ranges[] = {
{1, 0},{0, 3}
};
const ProtobufCEnumValueIndex pbuf__pi__gender__enum_values_by_name[3] =
{
  { "F", 0 },
  { "M", 1 },
  { "T", 2 },
};
const ProtobufCEnumDescriptor pbuf__pi__gender__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "pbuf.Pi.Gender",
  "Gender",
  "Pbuf__Pi__Gender",
  "pbuf",
  3,
  pbuf__pi__gender__enum_values_by_number,
  3,
  pbuf__pi__gender__enum_values_by_name,
  1,
  pbuf__pi__gender__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue pbuf__pi__dobt__enum_values_by_number[3] =
{
  { "V", "PBUF__PI__DOBT__V", 1 },
  { "D", "PBUF__PI__DOBT__D", 2 },
  { "A", "PBUF__PI__DOBT__A", 3 },
};
static const ProtobufCIntRange pbuf__pi__dobt__value_ranges[] = {
{1, 0},{0, 3}
};
const ProtobufCEnumValueIndex pbuf__pi__dobt__enum_values_by_name[3] =
{
  { "A", 2 },
  { "D", 1 },
  { "V", 0 },
};
const ProtobufCEnumDescriptor pbuf__pi__dobt__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "pbuf.Pi.Dobt",
  "Dobt",
  "Pbuf__Pi__Dobt",
  "pbuf",
  3,
  pbuf__pi__dobt__enum_values_by_number,
  3,
  pbuf__pi__dobt__enum_values_by_name,
  1,
  pbuf__pi__dobt__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor pbuf__pi__field_descriptors[11] =
{
  {
    "ms",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, has_ms),
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, ms),
    &pbuf__ms__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "name",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, name),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "mv",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, has_mv),
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, mv),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "lname",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, lname),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "lmv",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, has_lmv),
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, lmv),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "gender",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, has_gender),
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, gender),
    &pbuf__pi__gender__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "dob",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, dob),
    &pbuf__dob__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "dobt",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, has_dobt),
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, dobt),
    &pbuf__pi__dobt__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "age",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, has_age),
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, age),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "email",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, email),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "phone",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pi, phone),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__pi__field_indices_by_name[] = {
  8,   /* field[8] = age */
  6,   /* field[6] = dob */
  7,   /* field[7] = dobt */
  9,   /* field[9] = email */
  5,   /* field[5] = gender */
  4,   /* field[4] = lmv */
  3,   /* field[3] = lname */
  0,   /* field[0] = ms */
  2,   /* field[2] = mv */
  1,   /* field[1] = name */
  10,   /* field[10] = phone */
};
static const ProtobufCIntRange pbuf__pi__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 11 }
};
const ProtobufCMessageDescriptor pbuf__pi__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Pi",
  "Pi",
  "Pbuf__Pi",
  "pbuf",
  sizeof(Pbuf__Pi),
  11,
  pbuf__pi__field_descriptors,
  pbuf__pi__field_indices_by_name,
  1,  pbuf__pi__number_ranges,
  (ProtobufCMessageInit) pbuf__pi__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbuf__pa__field_descriptors[12] =
{
  {
    "ms",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, has_ms),
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, ms),
    &pbuf__ms__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "co",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, co),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "house",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, house),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "street",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, street),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "lm",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, lm),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "loc",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, loc),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "vtc",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, vtc),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "subdist",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, subdist),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "dist",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, dist),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "state",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, state),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "pc",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, pc),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "po",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pa, po),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__pa__field_indices_by_name[] = {
  1,   /* field[1] = co */
  8,   /* field[8] = dist */
  2,   /* field[2] = house */
  4,   /* field[4] = lm */
  5,   /* field[5] = loc */
  0,   /* field[0] = ms */
  10,   /* field[10] = pc */
  11,   /* field[11] = po */
  9,   /* field[9] = state */
  3,   /* field[3] = street */
  7,   /* field[7] = subdist */
  6,   /* field[6] = vtc */
};
static const ProtobufCIntRange pbuf__pa__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 12 }
};
const ProtobufCMessageDescriptor pbuf__pa__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Pa",
  "Pa",
  "Pbuf__Pa",
  "pbuf",
  sizeof(Pbuf__Pa),
  12,
  pbuf__pa__field_descriptors,
  pbuf__pa__field_indices_by_name,
  1,  pbuf__pa__number_ranges,
  (ProtobufCMessageInit) pbuf__pa__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbuf__pfa__field_descriptors[5] =
{
  {
    "ms",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, has_ms),
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, ms),
    &pbuf__ms__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "av",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, av),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "mv",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, has_mv),
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, mv),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "lav",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, lav),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "lmv",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, has_lmv),
    PROTOBUF_C_OFFSETOF(Pbuf__Pfa, lmv),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__pfa__field_indices_by_name[] = {
  1,   /* field[1] = av */
  3,   /* field[3] = lav */
  4,   /* field[4] = lmv */
  0,   /* field[0] = ms */
  2,   /* field[2] = mv */
};
static const ProtobufCIntRange pbuf__pfa__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor pbuf__pfa__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Pfa",
  "Pfa",
  "Pbuf__Pfa",
  "pbuf",
  sizeof(Pbuf__Pfa),
  5,
  pbuf__pfa__field_descriptors,
  pbuf__pfa__field_indices_by_name,
  1,  pbuf__pfa__number_ranges,
  (ProtobufCMessageInit) pbuf__pfa__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbuf__dob__field_descriptors[3] =
{
  {
    "year",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Dob, year),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "month",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Pbuf__Dob, has_month),
    PROTOBUF_C_OFFSETOF(Pbuf__Dob, month),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "day",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Pbuf__Dob, has_day),
    PROTOBUF_C_OFFSETOF(Pbuf__Dob, day),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__dob__field_indices_by_name[] = {
  2,   /* field[2] = day */
  1,   /* field[1] = month */
  0,   /* field[0] = year */
};
static const ProtobufCIntRange pbuf__dob__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor pbuf__dob__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Dob",
  "Dob",
  "Pbuf__Dob",
  "pbuf",
  sizeof(Pbuf__Dob),
  3,
  pbuf__dob__field_descriptors,
  pbuf__dob__field_indices_by_name,
  1,  pbuf__dob__number_ranges,
  (ProtobufCMessageInit) pbuf__dob__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbuf__bios__field_descriptors[1] =
{
  {
    "bio",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Pbuf__Bios, n_bio),
    PROTOBUF_C_OFFSETOF(Pbuf__Bios, bio),
    &pbuf__bio__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__bios__field_indices_by_name[] = {
  0,   /* field[0] = bio */
};
static const ProtobufCIntRange pbuf__bios__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor pbuf__bios__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Bios",
  "Bios",
  "Pbuf__Bios",
  "pbuf",
  sizeof(Pbuf__Bios),
  1,
  pbuf__bios__field_descriptors,
  pbuf__bios__field_indices_by_name,
  1,  pbuf__bios__number_ranges,
  (ProtobufCMessageInit) pbuf__bios__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbuf__bio__field_descriptors[3] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Bio, type),
    &pbuf__bio_type__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "posh",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Bio, posh),
    &pbuf__position__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "content",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Bio, content),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__bio__field_indices_by_name[] = {
  2,   /* field[2] = content */
  1,   /* field[1] = posh */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange pbuf__bio__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor pbuf__bio__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Bio",
  "Bio",
  "Pbuf__Bio",
  "pbuf",
  sizeof(Pbuf__Bio),
  3,
  pbuf__bio__field_descriptors,
  pbuf__bio__field_indices_by_name,
  1,  pbuf__bio__number_ranges,
  (ProtobufCMessageInit) pbuf__bio__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbuf__pv__field_descriptors[2] =
{
  {
    "otp",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pv, otp),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "pin",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pbuf__Pv, pin),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned pbuf__pv__field_indices_by_name[] = {
  0,   /* field[0] = otp */
  1,   /* field[1] = pin */
};
static const ProtobufCIntRange pbuf__pv__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor pbuf__pv__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "pbuf.Pv",
  "Pv",
  "Pbuf__Pv",
  "pbuf",
  sizeof(Pbuf__Pv),
  2,
  pbuf__pv__field_descriptors,
  pbuf__pv__field_indices_by_name,
  1,  pbuf__pv__number_ranges,
  (ProtobufCMessageInit) pbuf__pv__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue pbuf__lang_code__enum_values_by_number[13] =
{
  { "Assamese", "PBUF__LANG_CODE__ASSAMESE", 1 },
  { "Bengali", "PBUF__LANG_CODE__BENGALI", 2 },
  { "Gujarati", "PBUF__LANG_CODE__GUJARATI", 5 },
  { "Hindi", "PBUF__LANG_CODE__HINDI", 6 },
  { "Kannada", "PBUF__LANG_CODE__KANNADA", 7 },
  { "Malayalam", "PBUF__LANG_CODE__MALAYALAM", 11 },
  { "Manipuri", "PBUF__LANG_CODE__MANIPURI", 12 },
  { "Marathi", "PBUF__LANG_CODE__MARATHI", 13 },
  { "Oriya", "PBUF__LANG_CODE__ORIYA", 15 },
  { "Punjabi", "PBUF__LANG_CODE__PUNJABI", 16 },
  { "Tamil", "PBUF__LANG_CODE__TAMIL", 20 },
  { "Telugu", "PBUF__LANG_CODE__TELUGU", 21 },
  { "Urdu", "PBUF__LANG_CODE__URDU", 22 },
};
static const ProtobufCIntRange pbuf__lang_code__value_ranges[] = {
{1, 0},{5, 2},{11, 5},{15, 8},{20, 10},{0, 13}
};
const ProtobufCEnumValueIndex pbuf__lang_code__enum_values_by_name[13] =
{
  { "Assamese", 0 },
  { "Bengali", 1 },
  { "Gujarati", 2 },
  { "Hindi", 3 },
  { "Kannada", 4 },
  { "Malayalam", 5 },
  { "Manipuri", 6 },
  { "Marathi", 7 },
  { "Oriya", 8 },
  { "Punjabi", 9 },
  { "Tamil", 10 },
  { "Telugu", 11 },
  { "Urdu", 12 },
};
const ProtobufCEnumDescriptor pbuf__lang_code__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "pbuf.LangCode",
  "LangCode",
  "Pbuf__LangCode",
  "pbuf",
  13,
  pbuf__lang_code__enum_values_by_number,
  13,
  pbuf__lang_code__enum_values_by_name,
  5,
  pbuf__lang_code__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue pbuf__ms__enum_values_by_number[3] =
{
  { "E", "PBUF__MS__E", 1 },
  { "P", "PBUF__MS__P", 2 },
  { "F", "PBUF__MS__F", 3 },
};
static const ProtobufCIntRange pbuf__ms__value_ranges[] = {
{1, 0},{0, 3}
};
const ProtobufCEnumValueIndex pbuf__ms__enum_values_by_name[3] =
{
  { "E", 0 },
  { "F", 2 },
  { "P", 1 },
};
const ProtobufCEnumDescriptor pbuf__ms__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "pbuf.Ms",
  "Ms",
  "Pbuf__Ms",
  "pbuf",
  3,
  pbuf__ms__enum_values_by_number,
  3,
  pbuf__ms__enum_values_by_name,
  1,
  pbuf__ms__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue pbuf__bio_type__enum_values_by_number[3] =
{
  { "FMR", "PBUF__BIO_TYPE__FMR", 0 },
  { "FIR", "PBUF__BIO_TYPE__FIR", 1 },
  { "IIR", "PBUF__BIO_TYPE__IIR", 2 },
};
static const ProtobufCIntRange pbuf__bio_type__value_ranges[] = {
{0, 0},{0, 3}
};
const ProtobufCEnumValueIndex pbuf__bio_type__enum_values_by_name[3] =
{
  { "FIR", 1 },
  { "FMR", 0 },
  { "IIR", 2 },
};
const ProtobufCEnumDescriptor pbuf__bio_type__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "pbuf.BioType",
  "BioType",
  "Pbuf__BioType",
  "pbuf",
  3,
  pbuf__bio_type__enum_values_by_number,
  3,
  pbuf__bio_type__enum_values_by_name,
  1,
  pbuf__bio_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue pbuf__position__enum_values_by_number[12] =
{
  { "LEFT_IRIS", "PBUF__POSITION__LEFT_IRIS", 1 },
  { "RIGHT_IRIS", "PBUF__POSITION__RIGHT_IRIS", 2 },
  { "LEFT_INDEX", "PBUF__POSITION__LEFT_INDEX", 3 },
  { "LEFT_LITTLE", "PBUF__POSITION__LEFT_LITTLE", 4 },
  { "LEFT_MIDDLE", "PBUF__POSITION__LEFT_MIDDLE", 5 },
  { "LEFT_RING", "PBUF__POSITION__LEFT_RING", 6 },
  { "LEFT_THUMB", "PBUF__POSITION__LEFT_THUMB", 7 },
  { "RIGHT_INDEX", "PBUF__POSITION__RIGHT_INDEX", 8 },
  { "RIGHT_LITTLE", "PBUF__POSITION__RIGHT_LITTLE", 9 },
  { "RIGHT_MIDDLE", "PBUF__POSITION__RIGHT_MIDDLE", 10 },
  { "RIGHT_RING", "PBUF__POSITION__RIGHT_RING", 11 },
  { "RIGHT_THUMB", "PBUF__POSITION__RIGHT_THUMB", 12 },
};
static const ProtobufCIntRange pbuf__position__value_ranges[] = {
{1, 0},{0, 12}
};
const ProtobufCEnumValueIndex pbuf__position__enum_values_by_name[12] =
{
  { "LEFT_INDEX", 2 },
  { "LEFT_IRIS", 0 },
  { "LEFT_LITTLE", 3 },
  { "LEFT_MIDDLE", 4 },
  { "LEFT_RING", 5 },
  { "LEFT_THUMB", 6 },
  { "RIGHT_INDEX", 7 },
  { "RIGHT_IRIS", 1 },
  { "RIGHT_LITTLE", 8 },
  { "RIGHT_MIDDLE", 9 },
  { "RIGHT_RING", 10 },
  { "RIGHT_THUMB", 11 },
};
const ProtobufCEnumDescriptor pbuf__position__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "pbuf.Position",
  "Position",
  "Pbuf__Position",
  "pbuf",
  12,
  pbuf__position__enum_values_by_number,
  12,
  pbuf__position__enum_values_by_name,
  1,
  pbuf__position__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
