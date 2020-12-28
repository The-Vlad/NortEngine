#include "Window.h"


int CALLBACK WinMain(
	HINSTANCE	hInstance,
	HINSTANCE	hPrevInstance,
	LPSTR		lpCmdLine,
	int			nCmdShow )
{
	Window wnd( 800, 300, "Donkey Fart Box" );

	// message pump
	MSG msg;
	BOOL gResult;
	while ((gResult = GetMessage( &msg, nullptr, 0, 0 )) > 0) {
		TranslateMessage( &msg );		// need for WM_CHAR messages
		DispatchMessage( &msg );
	}

	if (gResult == -1)
	{
		return -1;
	}
	
	return msg.wParam;
}