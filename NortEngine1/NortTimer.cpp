#include "NortTimer.h"

using namespace std::chrono;

NortTimer::NortTimer()
{
	last = steady_clock::now();
}

float NortTimer::Mark()
{
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;
	return frameTime.count();
}

float NortTimer::Peek() const
{
	return duration<float>( steady_clock::now() - last ).count();
}