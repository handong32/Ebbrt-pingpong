// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: GlobalIdMessage.capnp

#ifndef CAPNP_INCLUDED_ab1ac5096afdee55_
#define CAPNP_INCLUDED_ab1ac5096afdee55_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 4000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace ebbrt {
namespace global_id_map_message {

struct GetRequest {
  GetRequest() = delete;

  class Reader;
  class Builder;
  class Pipeline;
};

struct SetRequest {
  SetRequest() = delete;

  class Reader;
  class Builder;
  class Pipeline;
};

struct Request {
  Request() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  enum Which: uint16_t {
    GET_REQUEST,
    SET_REQUEST,
  };
};

struct GetReply {
  GetReply() = delete;

  class Reader;
  class Builder;
  class Pipeline;
};

struct SetReply {
  SetReply() = delete;

  class Reader;
  class Builder;
  class Pipeline;
};

struct Reply {
  Reply() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  enum Which: uint16_t {
    GET_REPLY,
    SET_REPLY,
  };
};

}  // namespace
}  // namespace

// =======================================================================================

namespace capnp {
namespace schemas {

extern const ::capnp::_::RawSchema s_c596fb1db1a58c1e;
extern const ::capnp::_::RawSchema s_839b9a6b51c7e9f9;
extern const ::capnp::_::RawSchema s_f43a482fee6f3f71;
extern const ::capnp::_::RawSchema s_eb3cfd52d42daba2;
extern const ::capnp::_::RawSchema s_ce28e5d81cdac729;
extern const ::capnp::_::RawSchema s_dbf0ba0d65a6f20c;

}  // namespace schemas
namespace _ {  // private

CAPNP_DECLARE_STRUCT(
    ::ebbrt::global_id_map_message::GetRequest, c596fb1db1a58c1e,
    2, 0, INLINE_COMPOSITE);
CAPNP_DECLARE_STRUCT(
    ::ebbrt::global_id_map_message::SetRequest, 839b9a6b51c7e9f9,
    2, 1, INLINE_COMPOSITE);
CAPNP_DECLARE_STRUCT(
    ::ebbrt::global_id_map_message::Request, f43a482fee6f3f71,
    1, 1, INLINE_COMPOSITE);
CAPNP_DECLARE_STRUCT(
    ::ebbrt::global_id_map_message::GetReply, eb3cfd52d42daba2,
    1, 1, INLINE_COMPOSITE);
CAPNP_DECLARE_STRUCT(
    ::ebbrt::global_id_map_message::SetReply, ce28e5d81cdac729,
    1, 0, EIGHT_BYTES);
CAPNP_DECLARE_STRUCT(
    ::ebbrt::global_id_map_message::Reply, dbf0ba0d65a6f20c,
    1, 1, INLINE_COMPOSITE);

}  // namespace _ (private)
}  // namespace capnp

// =======================================================================================

namespace ebbrt {
namespace global_id_map_message {

class GetRequest::Reader {
public:
  typedef GetRequest Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline  ::uint64_t getMessageId() const;

  inline  ::uint32_t getEbbId() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(GetRequest::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(GetRequest::Reader reader) {
  return ::capnp::_::structString<GetRequest>(reader._reader);
}

class GetRequest::Builder {
public:
  typedef GetRequest Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline  ::uint64_t getMessageId();
  inline void setMessageId( ::uint64_t value);

  inline  ::uint32_t getEbbId();
  inline void setEbbId( ::uint32_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(GetRequest::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(GetRequest::Builder builder) {
  return ::capnp::_::structString<GetRequest>(builder._builder.asReader());
}

class GetRequest::Pipeline {
public:
  typedef GetRequest Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

class SetRequest::Reader {
public:
  typedef SetRequest Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline  ::uint64_t getMessageId() const;

  inline  ::uint32_t getEbbId() const;

  inline bool hasData() const;
  inline  ::capnp::Data::Reader getData() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(SetRequest::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(SetRequest::Reader reader) {
  return ::capnp::_::structString<SetRequest>(reader._reader);
}

class SetRequest::Builder {
public:
  typedef SetRequest Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline  ::uint64_t getMessageId();
  inline void setMessageId( ::uint64_t value);

  inline  ::uint32_t getEbbId();
  inline void setEbbId( ::uint32_t value);

  inline bool hasData();
  inline  ::capnp::Data::Builder getData();
  inline void setData( ::capnp::Data::Reader value);
  inline  ::capnp::Data::Builder initData(unsigned int size);
  inline void adoptData(::capnp::Orphan< ::capnp::Data>&& value);
  inline ::capnp::Orphan< ::capnp::Data> disownData();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(SetRequest::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(SetRequest::Builder builder) {
  return ::capnp::_::structString<SetRequest>(builder._builder.asReader());
}

class SetRequest::Pipeline {
public:
  typedef SetRequest Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

class Request::Reader {
public:
  typedef Request Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline Which which() const;
  inline bool isGetRequest() const;
  inline bool hasGetRequest() const;
  inline  ::ebbrt::global_id_map_message::GetRequest::Reader getGetRequest() const;

  inline bool isSetRequest() const;
  inline bool hasSetRequest() const;
  inline  ::ebbrt::global_id_map_message::SetRequest::Reader getSetRequest() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Request::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Request::Reader reader) {
  return ::capnp::_::structString<Request>(reader._reader);
}

class Request::Builder {
public:
  typedef Request Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline Which which();
  inline bool isGetRequest();
  inline bool hasGetRequest();
  inline  ::ebbrt::global_id_map_message::GetRequest::Builder getGetRequest();
  inline void setGetRequest( ::ebbrt::global_id_map_message::GetRequest::Reader value);
  inline  ::ebbrt::global_id_map_message::GetRequest::Builder initGetRequest();
  inline void adoptGetRequest(::capnp::Orphan< ::ebbrt::global_id_map_message::GetRequest>&& value);
  inline ::capnp::Orphan< ::ebbrt::global_id_map_message::GetRequest> disownGetRequest();

  inline bool isSetRequest();
  inline bool hasSetRequest();
  inline  ::ebbrt::global_id_map_message::SetRequest::Builder getSetRequest();
  inline void setSetRequest( ::ebbrt::global_id_map_message::SetRequest::Reader value);
  inline  ::ebbrt::global_id_map_message::SetRequest::Builder initSetRequest();
  inline void adoptSetRequest(::capnp::Orphan< ::ebbrt::global_id_map_message::SetRequest>&& value);
  inline ::capnp::Orphan< ::ebbrt::global_id_map_message::SetRequest> disownSetRequest();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Request::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Request::Builder builder) {
  return ::capnp::_::structString<Request>(builder._builder.asReader());
}

class Request::Pipeline {
public:
  typedef Request Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

class GetReply::Reader {
public:
  typedef GetReply Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline  ::uint64_t getMessageId() const;

  inline bool hasData() const;
  inline  ::capnp::Data::Reader getData() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(GetReply::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(GetReply::Reader reader) {
  return ::capnp::_::structString<GetReply>(reader._reader);
}

class GetReply::Builder {
public:
  typedef GetReply Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline  ::uint64_t getMessageId();
  inline void setMessageId( ::uint64_t value);

  inline bool hasData();
  inline  ::capnp::Data::Builder getData();
  inline void setData( ::capnp::Data::Reader value);
  inline  ::capnp::Data::Builder initData(unsigned int size);
  inline void adoptData(::capnp::Orphan< ::capnp::Data>&& value);
  inline ::capnp::Orphan< ::capnp::Data> disownData();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(GetReply::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(GetReply::Builder builder) {
  return ::capnp::_::structString<GetReply>(builder._builder.asReader());
}

class GetReply::Pipeline {
public:
  typedef GetReply Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

class SetReply::Reader {
public:
  typedef SetReply Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline  ::uint64_t getMessageId() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(SetReply::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(SetReply::Reader reader) {
  return ::capnp::_::structString<SetReply>(reader._reader);
}

class SetReply::Builder {
public:
  typedef SetReply Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline  ::uint64_t getMessageId();
  inline void setMessageId( ::uint64_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(SetReply::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(SetReply::Builder builder) {
  return ::capnp::_::structString<SetReply>(builder._builder.asReader());
}

class SetReply::Pipeline {
public:
  typedef SetReply Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

class Reply::Reader {
public:
  typedef Reply Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

  inline Which which() const;
  inline bool isGetReply() const;
  inline bool hasGetReply() const;
  inline  ::ebbrt::global_id_map_message::GetReply::Reader getGetReply() const;

  inline bool isSetReply() const;
  inline bool hasSetReply() const;
  inline  ::ebbrt::global_id_map_message::SetReply::Reader getSetReply() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Reply::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Reply::Reader reader) {
  return ::capnp::_::structString<Reply>(reader._reader);
}

class Reply::Builder {
public:
  typedef Reply Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }

  inline Which which();
  inline bool isGetReply();
  inline bool hasGetReply();
  inline  ::ebbrt::global_id_map_message::GetReply::Builder getGetReply();
  inline void setGetReply( ::ebbrt::global_id_map_message::GetReply::Reader value);
  inline  ::ebbrt::global_id_map_message::GetReply::Builder initGetReply();
  inline void adoptGetReply(::capnp::Orphan< ::ebbrt::global_id_map_message::GetReply>&& value);
  inline ::capnp::Orphan< ::ebbrt::global_id_map_message::GetReply> disownGetReply();

  inline bool isSetReply();
  inline bool hasSetReply();
  inline  ::ebbrt::global_id_map_message::SetReply::Builder getSetReply();
  inline void setSetReply( ::ebbrt::global_id_map_message::SetReply::Reader value);
  inline  ::ebbrt::global_id_map_message::SetReply::Builder initSetReply();
  inline void adoptSetReply(::capnp::Orphan< ::ebbrt::global_id_map_message::SetReply>&& value);
  inline ::capnp::Orphan< ::ebbrt::global_id_map_message::SetReply> disownSetReply();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Reply::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Reply::Builder builder) {
  return ::capnp::_::structString<Reply>(builder._builder.asReader());
}

class Reply::Pipeline {
public:
  typedef Reply Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
};

// =======================================================================================

inline  ::uint64_t GetRequest::Reader::getMessageId() const {
  return _reader.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint64_t GetRequest::Builder::getMessageId() {
  return _builder.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}
inline void GetRequest::Builder::setMessageId( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t GetRequest::Reader::getEbbId() const {
  return _reader.getDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS);
}

inline  ::uint32_t GetRequest::Builder::getEbbId() {
  return _builder.getDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS);
}
inline void GetRequest::Builder::setEbbId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t SetRequest::Reader::getMessageId() const {
  return _reader.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint64_t SetRequest::Builder::getMessageId() {
  return _builder.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}
inline void SetRequest::Builder::setMessageId( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t SetRequest::Reader::getEbbId() const {
  return _reader.getDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS);
}

inline  ::uint32_t SetRequest::Builder::getEbbId() {
  return _builder.getDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS);
}
inline void SetRequest::Builder::setEbbId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS, value);
}

inline bool SetRequest::Reader::hasData() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool SetRequest::Builder::hasData() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Data::Reader SetRequest::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::Data::Builder SetRequest::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void SetRequest::Builder::setData( ::capnp::Data::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::Data::Builder SetRequest::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void SetRequest::Builder::adoptData(
    ::capnp::Orphan< ::capnp::Data>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Data> SetRequest::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline Request::Which Request::Reader::which() const {
  return _reader.getDataField<Which>(0 * ::capnp::ELEMENTS);
}
inline Request::Which Request::Builder::which() {
  return _builder.getDataField<Which>(0 * ::capnp::ELEMENTS);
}

inline bool Request::Reader::isGetRequest() const {
  return which() == Request::GET_REQUEST;
}
inline bool Request::Builder::isGetRequest() {
  return which() == Request::GET_REQUEST;
}
inline bool Request::Reader::hasGetRequest() const {
  if (which() != Request::GET_REQUEST) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool Request::Builder::hasGetRequest() {
  if (which() != Request::GET_REQUEST) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::ebbrt::global_id_map_message::GetRequest::Reader Request::Reader::getGetRequest() const {
  KJ_IREQUIRE(which() == Request::GET_REQUEST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetRequest>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::ebbrt::global_id_map_message::GetRequest::Builder Request::Builder::getGetRequest() {
  KJ_IREQUIRE(which() == Request::GET_REQUEST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetRequest>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Request::Builder::setGetRequest( ::ebbrt::global_id_map_message::GetRequest::Reader value) {
  _builder.setDataField<Request::Which>(
      0 * ::capnp::ELEMENTS, Request::GET_REQUEST);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetRequest>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::ebbrt::global_id_map_message::GetRequest::Builder Request::Builder::initGetRequest() {
  _builder.setDataField<Request::Which>(
      0 * ::capnp::ELEMENTS, Request::GET_REQUEST);
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetRequest>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Request::Builder::adoptGetRequest(
    ::capnp::Orphan< ::ebbrt::global_id_map_message::GetRequest>&& value) {
  _builder.setDataField<Request::Which>(
      0 * ::capnp::ELEMENTS, Request::GET_REQUEST);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetRequest>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::ebbrt::global_id_map_message::GetRequest> Request::Builder::disownGetRequest() {
  KJ_IREQUIRE(which() == Request::GET_REQUEST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetRequest>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool Request::Reader::isSetRequest() const {
  return which() == Request::SET_REQUEST;
}
inline bool Request::Builder::isSetRequest() {
  return which() == Request::SET_REQUEST;
}
inline bool Request::Reader::hasSetRequest() const {
  if (which() != Request::SET_REQUEST) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool Request::Builder::hasSetRequest() {
  if (which() != Request::SET_REQUEST) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::ebbrt::global_id_map_message::SetRequest::Reader Request::Reader::getSetRequest() const {
  KJ_IREQUIRE(which() == Request::SET_REQUEST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetRequest>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::ebbrt::global_id_map_message::SetRequest::Builder Request::Builder::getSetRequest() {
  KJ_IREQUIRE(which() == Request::SET_REQUEST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetRequest>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Request::Builder::setSetRequest( ::ebbrt::global_id_map_message::SetRequest::Reader value) {
  _builder.setDataField<Request::Which>(
      0 * ::capnp::ELEMENTS, Request::SET_REQUEST);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetRequest>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::ebbrt::global_id_map_message::SetRequest::Builder Request::Builder::initSetRequest() {
  _builder.setDataField<Request::Which>(
      0 * ::capnp::ELEMENTS, Request::SET_REQUEST);
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetRequest>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Request::Builder::adoptSetRequest(
    ::capnp::Orphan< ::ebbrt::global_id_map_message::SetRequest>&& value) {
  _builder.setDataField<Request::Which>(
      0 * ::capnp::ELEMENTS, Request::SET_REQUEST);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetRequest>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::ebbrt::global_id_map_message::SetRequest> Request::Builder::disownSetRequest() {
  KJ_IREQUIRE(which() == Request::SET_REQUEST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetRequest>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline  ::uint64_t GetReply::Reader::getMessageId() const {
  return _reader.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint64_t GetReply::Builder::getMessageId() {
  return _builder.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}
inline void GetReply::Builder::setMessageId( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline bool GetReply::Reader::hasData() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool GetReply::Builder::hasData() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Data::Reader GetReply::Reader::getData() const {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::Data::Builder GetReply::Builder::getData() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void GetReply::Builder::setData( ::capnp::Data::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::Data::Builder GetReply::Builder::initData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void GetReply::Builder::adoptData(
    ::capnp::Orphan< ::capnp::Data>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Data> GetReply::Builder::disownData() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline  ::uint64_t SetReply::Reader::getMessageId() const {
  return _reader.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint64_t SetReply::Builder::getMessageId() {
  return _builder.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}
inline void SetReply::Builder::setMessageId( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline Reply::Which Reply::Reader::which() const {
  return _reader.getDataField<Which>(0 * ::capnp::ELEMENTS);
}
inline Reply::Which Reply::Builder::which() {
  return _builder.getDataField<Which>(0 * ::capnp::ELEMENTS);
}

inline bool Reply::Reader::isGetReply() const {
  return which() == Reply::GET_REPLY;
}
inline bool Reply::Builder::isGetReply() {
  return which() == Reply::GET_REPLY;
}
inline bool Reply::Reader::hasGetReply() const {
  if (which() != Reply::GET_REPLY) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool Reply::Builder::hasGetReply() {
  if (which() != Reply::GET_REPLY) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::ebbrt::global_id_map_message::GetReply::Reader Reply::Reader::getGetReply() const {
  KJ_IREQUIRE(which() == Reply::GET_REPLY,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetReply>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::ebbrt::global_id_map_message::GetReply::Builder Reply::Builder::getGetReply() {
  KJ_IREQUIRE(which() == Reply::GET_REPLY,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetReply>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Reply::Builder::setGetReply( ::ebbrt::global_id_map_message::GetReply::Reader value) {
  _builder.setDataField<Reply::Which>(
      0 * ::capnp::ELEMENTS, Reply::GET_REPLY);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetReply>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::ebbrt::global_id_map_message::GetReply::Builder Reply::Builder::initGetReply() {
  _builder.setDataField<Reply::Which>(
      0 * ::capnp::ELEMENTS, Reply::GET_REPLY);
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetReply>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Reply::Builder::adoptGetReply(
    ::capnp::Orphan< ::ebbrt::global_id_map_message::GetReply>&& value) {
  _builder.setDataField<Reply::Which>(
      0 * ::capnp::ELEMENTS, Reply::GET_REPLY);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetReply>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::ebbrt::global_id_map_message::GetReply> Reply::Builder::disownGetReply() {
  KJ_IREQUIRE(which() == Reply::GET_REPLY,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::GetReply>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

inline bool Reply::Reader::isSetReply() const {
  return which() == Reply::SET_REPLY;
}
inline bool Reply::Builder::isSetReply() {
  return which() == Reply::SET_REPLY;
}
inline bool Reply::Reader::hasSetReply() const {
  if (which() != Reply::SET_REPLY) return false;
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool Reply::Builder::hasSetReply() {
  if (which() != Reply::SET_REPLY) return false;
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::ebbrt::global_id_map_message::SetReply::Reader Reply::Reader::getSetReply() const {
  KJ_IREQUIRE(which() == Reply::SET_REPLY,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetReply>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::ebbrt::global_id_map_message::SetReply::Builder Reply::Builder::getSetReply() {
  KJ_IREQUIRE(which() == Reply::SET_REPLY,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetReply>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Reply::Builder::setSetReply( ::ebbrt::global_id_map_message::SetReply::Reader value) {
  _builder.setDataField<Reply::Which>(
      0 * ::capnp::ELEMENTS, Reply::SET_REPLY);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetReply>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::ebbrt::global_id_map_message::SetReply::Builder Reply::Builder::initSetReply() {
  _builder.setDataField<Reply::Which>(
      0 * ::capnp::ELEMENTS, Reply::SET_REPLY);
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetReply>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void Reply::Builder::adoptSetReply(
    ::capnp::Orphan< ::ebbrt::global_id_map_message::SetReply>&& value) {
  _builder.setDataField<Reply::Which>(
      0 * ::capnp::ELEMENTS, Reply::SET_REPLY);
  ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetReply>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::ebbrt::global_id_map_message::SetReply> Reply::Builder::disownSetReply() {
  KJ_IREQUIRE(which() == Reply::SET_REPLY,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::ebbrt::global_id_map_message::SetReply>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_ab1ac5096afdee55_
