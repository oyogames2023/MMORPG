#pragma once

#include "Forwards.h"

#include "uv.h"

namespace zeus::network
{

	class EventLoop
		: public std::enable_shared_from_this<EventLoop>
	{
	public:

		EventLoop();

		virtual ~EventLoop();

	public:

		void Run();

		void Stop();

		std::shared_ptr<uv_loop_t> GetUVLoop();

	protected:

		std::shared_ptr<uv_loop_t> loop_;
	};

} // namespace zeus::network
