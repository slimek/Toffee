// Toffee Samples "HelloToffee" - Windows Main Entry

#include "HelloToffeePch.h"

#include "HelloToffeeApp.h"
#include <Windows.h>

#if defined( _DEBUG )
#include <vld.h>
#endif


int CALLBACK wWinMain(
    HINSTANCE instance, HINSTANCE prevInstance, WCHAR* cmdLine, int cmdShow )
{
    HelloToffeeApp app;

    ApplicationSettings s;
    s.win32FrameWidth  = 800;
    s.win32FrameHeight = 600;
    s.win32FrameTitle  = "HelloToffee";
    s.win32AssetsPath  = "..\\assets";

    return app.Run( s );
}
