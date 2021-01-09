#pragma once
#include <chrono>

class NortTimer
{
public:
	NortTimer();
	float Mark();
	float Peek() const;
private:
	std::chrono::steady_clock::time_point last;
};