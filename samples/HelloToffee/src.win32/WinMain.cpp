// Toffee Samples "HelloToffee" - Windows Main Entry

#include "HelloToffeePch.h"

#include "HelloToffeeApp.h"
#include <Windows.h>

#if defined( _DEBUG )
#include <vld.h>
#endif


using namespace cocos2d;

int CALLBACK wWinMain(
    HINSTANCE instance, HINSTANCE prevInstance, WCHAR* cmdLine, int cmdShow )
{
    HelloToffeeApp app;

    auto eglView = CCEGLView::sharedOpenGLView();
    eglView->setViewName( "HelloToffee" );
    eglView->setFrameSize( 800, 600 );

    return app.Run();
}
