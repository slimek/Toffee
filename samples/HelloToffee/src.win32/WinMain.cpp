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
    s.title = "HelloToffee";
    s.desktop.frameWidth  = 800;
    s.desktop.frameHeight = 600;
    s.desktop.assetsPath  = "..\\assets";

    return app.Run( s );
}
