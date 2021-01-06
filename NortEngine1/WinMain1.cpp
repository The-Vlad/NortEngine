#include "Window.h"
#include <sstream>


int CALLBACK WinMain(
	HINSTANCE	hInstance,
	HINSTANCE	hPrevInstance,
	LPSTR		lpCmdLine,
	int			nCmdShow )
{
	try
	{
		Window wnd( 800, 600, "Donkey Fart Box" );

		// message pump
		MSG msg;
		BOOL gResult;
		while ((gResult = GetMessage( &msg, nullptr, 0, 0 )) > 0) {
			// TranslateMessage will post auxiliary WM_CHAR messages
			TranslateMessage( &msg );		// need for WM_CHAR messages
			DispatchMessage( &msg );
		}

		// check if GetMessage call itself borked
		if (gResult == -1)
		{
			return -1;
		}

		// wParam here is the value passed to PostQuitMessage
		return msg.wParam;
	}
	catch (const NortException& e)
	{
		MessageBox( nullptr, e.what(), e.GetType(), MB_OK | MB_ICONEXCLAMATION );
	}
	catch (const std::exception& e)
	{
		MessageBox( nullptr, e.what(), "Standart Exception", MB_OK | MB_ICONEXCLAMATION );
	}
	catch (...)
	{
		MessageBox( nullptr, "No details available", "Unknown Exception", MB_OK | MB_ICONEXCLAMATION );
	}
	return -1;
}