#include "EventLoop.h"

namespace zeus::network
{

	EventLoop::EventLoop()
	{

	}

	EventLoop::~EventLoop()
	{
	}

	void EventLoop::Run()
	{
		uv_run(loop_.get(), UV_RUN_DEFAULT);
	}

	void EventLoop::Stop()
	{
		uv_stop(loop_.get());
	}

	std::shared_ptr<uv_loop_t> EventLoop::GetUVLoop()
	{
		return loop_;
	}

} // namespace zeus::network
