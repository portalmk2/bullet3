// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: pybullet.proto
#ifndef GRPC_pybullet_2eproto__INCLUDED
#define GRPC_pybullet_2eproto__INCLUDED

#include "pybullet.pb.h"

#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace pybullet_grpc {

class PyBulletAPI final {
 public:
  static constexpr char const* service_full_name() {
    return "pybullet_grpc.PyBulletAPI";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sends a greeting
    virtual ::grpc::Status SubmitCommand(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::pybullet_grpc::PyBulletStatus* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pybullet_grpc::PyBulletStatus>> AsyncSubmitCommand(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pybullet_grpc::PyBulletStatus>>(AsyncSubmitCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pybullet_grpc::PyBulletStatus>> PrepareAsyncSubmitCommand(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pybullet_grpc::PyBulletStatus>>(PrepareAsyncSubmitCommandRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pybullet_grpc::PyBulletStatus>* AsyncSubmitCommandRaw(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pybullet_grpc::PyBulletStatus>* PrepareAsyncSubmitCommandRaw(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SubmitCommand(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::pybullet_grpc::PyBulletStatus* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>> AsyncSubmitCommand(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>>(AsyncSubmitCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>> PrepareAsyncSubmitCommand(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>>(PrepareAsyncSubmitCommandRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>* AsyncSubmitCommandRaw(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>* PrepareAsyncSubmitCommandRaw(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SubmitCommand_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sends a greeting
    virtual ::grpc::Status SubmitCommand(::grpc::ServerContext* context, const ::pybullet_grpc::PyBulletCommand* request, ::pybullet_grpc::PyBulletStatus* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SubmitCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SubmitCommand() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SubmitCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitCommand(::grpc::ServerContext* context, const ::pybullet_grpc::PyBulletCommand* request, ::pybullet_grpc::PyBulletStatus* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubmitCommand(::grpc::ServerContext* context, ::pybullet_grpc::PyBulletCommand* request, ::grpc::ServerAsyncResponseWriter< ::pybullet_grpc::PyBulletStatus>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SubmitCommand<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SubmitCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SubmitCommand() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SubmitCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitCommand(::grpc::ServerContext* context, const ::pybullet_grpc::PyBulletCommand* request, ::pybullet_grpc::PyBulletStatus* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SubmitCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SubmitCommand() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SubmitCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubmitCommand(::grpc::ServerContext* context, const ::pybullet_grpc::PyBulletCommand* request, ::pybullet_grpc::PyBulletStatus* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubmitCommand(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SubmitCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SubmitCommand() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::pybullet_grpc::PyBulletCommand, ::pybullet_grpc::PyBulletStatus>(std::bind(&WithStreamedUnaryMethod_SubmitCommand<BaseClass>::StreamedSubmitCommand, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SubmitCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SubmitCommand(::grpc::ServerContext* context, const ::pybullet_grpc::PyBulletCommand* request, ::pybullet_grpc::PyBulletStatus* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSubmitCommand(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::pybullet_grpc::PyBulletCommand,::pybullet_grpc::PyBulletStatus>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SubmitCommand<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SubmitCommand<Service > StreamedService;
};

}  // namespace pybullet_grpc


#endif  // GRPC_pybullet_2eproto__INCLUDED
