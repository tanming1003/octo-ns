/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "ThriftSpans_types.h"



int _kStatusCodeValues[] = {
  StatusCode::SUCCESS,
  StatusCode::EXCEPTION,
  StatusCode::TIMEOUT,
  StatusCode::DROP
};
const char* _kStatusCodeNames[] = {
  "SUCCESS",
  "EXCEPTION",
  "TIMEOUT",
  "DROP"
};
const std::map<int, const char*> _StatusCode_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kStatusCodeValues, _kStatusCodeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* Endpoint::ascii_fingerprint = "C7D2D58463AC91C552EE8B325EA2ACCC";
const uint8_t Endpoint::binary_fingerprint[16] = {0xC7,0xD2,0xD5,0x84,0x63,0xAC,0x91,0xC5,0x52,0xEE,0x8B,0x32,0x5E,0xA2,0xAC,0xCC};

uint32_t Endpoint::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_ip = false;
  bool isset_port = false;
  bool isset_appKey = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->ip);
          isset_ip = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->port);
          isset_port = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->appKey);
          isset_appKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_ip)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_port)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_appKey)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Endpoint::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Endpoint");
  xfer += oprot->writeFieldBegin("ip", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->ip);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("port", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->port);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("appKey", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->appKey);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* Annotation::ascii_fingerprint = "CE5BE9A8A7BD398538F703F899B08A94";
const uint8_t Annotation::binary_fingerprint[16] = {0xCE,0x5B,0xE9,0xA8,0xA7,0xBD,0x39,0x85,0x38,0xF7,0x03,0xF8,0x99,0xB0,0x8A,0x94};

uint32_t Annotation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_value = false;
  bool isset_timestamp = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->value);
          isset_value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timestamp);
          isset_timestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->duration);
          this->__isset.duration = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_value)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_timestamp)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Annotation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Annotation");
  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->value);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("timestamp", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timestamp);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.duration) {
    xfer += oprot->writeFieldBegin("duration", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32(this->duration);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* KVAnnotation::ascii_fingerprint = "07A9615F837F7D0A952B595DD3020972";
const uint8_t KVAnnotation::binary_fingerprint[16] = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};

uint32_t KVAnnotation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_key = false;
  bool isset_value = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->key);
          isset_key = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->value);
          isset_value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_key)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t KVAnnotation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("KVAnnotation");
  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->key);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->value);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* ThriftSpan::ascii_fingerprint = "B08D60902E6EF2A6DF2C5746A48261F4";
const uint8_t ThriftSpan::binary_fingerprint[16] = {0xB0,0x8D,0x60,0x90,0x2E,0x6E,0xF2,0xA6,0xDF,0x2C,0x57,0x46,0xA4,0x82,0x61,0xF4};

uint32_t ThriftSpan::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_traceId = false;
  bool isset_spanId = false;
  bool isset_spanName = false;
  bool isset_local = false;
  bool isset_remote = false;
  bool isset_start = false;
  bool isset_duration = false;
  bool isset_clientSide = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->traceId);
          isset_traceId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->spanId);
          isset_spanId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->spanName);
          isset_spanName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->local.read(iprot);
          isset_local = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->remote.read(iprot);
          isset_remote = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->start);
          isset_start = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->duration);
          isset_duration = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->clientSide);
          isset_clientSide = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->annotations.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            iprot->readListBegin(_etype3, _size0);
            this->annotations.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->annotations[_i4].read(iprot);
            }
            iprot->readListEnd();
          }
          this->__isset.annotations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->type);
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->packageSize);
          this->__isset.packageSize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->infraName);
          this->__isset.infraName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->infraVersion);
          this->__isset.infraVersion = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->kvAnnotations.clear();
            uint32_t _size5;
            ::apache::thrift::protocol::TType _etype8;
            iprot->readListBegin(_etype8, _size5);
            this->kvAnnotations.resize(_size5);
            uint32_t _i9;
            for (_i9 = 0; _i9 < _size5; ++_i9)
            {
              xfer += this->kvAnnotations[_i9].read(iprot);
            }
            iprot->readListEnd();
          }
          this->__isset.kvAnnotations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 15:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast10;
          xfer += iprot->readI32(ecast10);
          this->status = (StatusCode::type)ecast10;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 16:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mask);
          this->__isset.mask = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_traceId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_spanId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_spanName)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_local)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_remote)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_start)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_duration)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_clientSide)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ThriftSpan::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ThriftSpan");
  xfer += oprot->writeFieldBegin("traceId", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->traceId);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("spanId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->spanId);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("spanName", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->spanName);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("local", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += this->local.write(oprot);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("remote", ::apache::thrift::protocol::T_STRUCT, 5);
  xfer += this->remote.write(oprot);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("start", ::apache::thrift::protocol::T_I64, 6);
  xfer += oprot->writeI64(this->start);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("duration", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->duration);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("clientSide", ::apache::thrift::protocol::T_BOOL, 8);
  xfer += oprot->writeBool(this->clientSide);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.annotations) {
    xfer += oprot->writeFieldBegin("annotations", ::apache::thrift::protocol::T_LIST, 9);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->annotations.size()));
      std::vector<Annotation> ::const_iterator _iter11;
      for (_iter11 = this->annotations.begin(); _iter11 != this->annotations.end(); ++_iter11)
      {
        xfer += (*_iter11).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.type) {
    xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_STRING, 10);
    xfer += oprot->writeString(this->type);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.packageSize) {
    xfer += oprot->writeFieldBegin("packageSize", ::apache::thrift::protocol::T_I32, 11);
    xfer += oprot->writeI32(this->packageSize);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.infraName) {
    xfer += oprot->writeFieldBegin("infraName", ::apache::thrift::protocol::T_STRING, 12);
    xfer += oprot->writeString(this->infraName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.infraVersion) {
    xfer += oprot->writeFieldBegin("infraVersion", ::apache::thrift::protocol::T_STRING, 13);
    xfer += oprot->writeString(this->infraVersion);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.kvAnnotations) {
    xfer += oprot->writeFieldBegin("kvAnnotations", ::apache::thrift::protocol::T_LIST, 14);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->kvAnnotations.size()));
      std::vector<KVAnnotation> ::const_iterator _iter12;
      for (_iter12 = this->kvAnnotations.begin(); _iter12 != this->kvAnnotations.end(); ++_iter12)
      {
        xfer += (*_iter12).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.status) {
    xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 15);
    xfer += oprot->writeI32((int32_t)this->status);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.mask) {
    xfer += oprot->writeFieldBegin("mask", ::apache::thrift::protocol::T_I32, 16);
    xfer += oprot->writeI32(this->mask);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* ThriftSpanList::ascii_fingerprint = "01BB7DF5DC125F694C08EE3ED02BB420";
const uint8_t ThriftSpanList::binary_fingerprint[16] = {0x01,0xBB,0x7D,0xF5,0xDC,0x12,0x5F,0x69,0x4C,0x08,0xEE,0x3E,0xD0,0x2B,0xB4,0x20};

uint32_t ThriftSpanList::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_spans = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->spans.clear();
            uint32_t _size13;
            ::apache::thrift::protocol::TType _etype16;
            iprot->readListBegin(_etype16, _size13);
            this->spans.resize(_size13);
            uint32_t _i17;
            for (_i17 = 0; _i17 < _size13; ++_i17)
            {
              xfer += this->spans[_i17].read(iprot);
            }
            iprot->readListEnd();
          }
          isset_spans = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->var1);
          this->__isset.var1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->var2);
          this->__isset.var2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_spans)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ThriftSpanList::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ThriftSpanList");
  xfer += oprot->writeFieldBegin("spans", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->spans.size()));
    std::vector<ThriftSpan> ::const_iterator _iter18;
    for (_iter18 = this->spans.begin(); _iter18 != this->spans.end(); ++_iter18)
    {
      xfer += (*_iter18).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  if (this->__isset.var1) {
    xfer += oprot->writeFieldBegin("var1", ::apache::thrift::protocol::T_I32, 2);
    xfer += oprot->writeI32(this->var1);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.var2) {
    xfer += oprot->writeFieldBegin("var2", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->var2);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

