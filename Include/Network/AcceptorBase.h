#pragma once

#include "Forwards.h"

#include "uv.h"

namespace zeus::network
{

	class AcceptorBase
		: public std::enable_shared_from_this<AcceptorBase>
	{
	public:

		AcceptorBase(EventLoopPtr loop, const std::string& ip, int32_t port);

		virtual ~AcceptorBase() = default;

	public:

		std::string GetListenAddress() const;

		int32_t GetListenPort() const;

	private:

		EventLoopPtr loop_ = nullptr;

		uv_tcp_t server_;

		std::string ip_;

		int32_t port_ = 0;
	};

} // namespace zeus::network
