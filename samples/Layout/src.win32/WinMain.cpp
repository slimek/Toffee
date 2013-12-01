// Toffee Samples "Layout" - Windows Main Entry

#include "LayoutPch.h"

#include "LayoutApp.h"
#include <Windows.h>

#if defined( _DEBUG )
#include <vld.h>
#endif


int CALLBACK wWinMain(
    HINSTANCE instance, HINSTANCE prevInstance, WCHAR* cmdLine, int cmdShow )
{
    LayoutApp app;

    ApplicationSettings s;
    s.win32FrameWidth  = 800;
    s.win32FrameHeight = 600;
    s.win32FrameTitle  = "Layout";
    s.win32AssetsPath  = "..\\assets";

    return app.Run( s );
}
