#pragma once

// error exception helper macro
#define NORTWND_EXCEPT( hr ) Window::HrException( __LINE__, __FILE__, (hr) )
#define NORTWND_LAST_EXCEPT() Window::HrException( __LINE__, __FILE__, GetLastError() )
#define NORTWND_NOGFX_EXCEPT() Window::NoGfxException( __LINE__, __FILE__ )