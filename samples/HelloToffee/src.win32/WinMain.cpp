// Toffee Samples "HelloToffee" - Windows Main Entry

#include <Toffee/Core/Application.h>
#include <Windows.h>


int CALLBACK wWinMain(
    HINSTANCE instance, HINSTANCE prevInstance, WCHAR* cmdLine, int cmdShow )
{
    Toffee::Application app;

    return app.Run();
}
