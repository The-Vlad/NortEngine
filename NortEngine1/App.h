#pragma once
#include "Window.h"
#include "NortTimer.h"

class App
{
public:
	App();
	// master frame / message loop
	int Go();
private:
	void DoFrame();
private:
	Window wnd;
	NortTimer timer;	// for tests
};