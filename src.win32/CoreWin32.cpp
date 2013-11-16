// Toffee C++ Library - Core Win32 Implementation

#include "ToffeePch.h"

#include <Toffee/Core/Application.h>


namespace Toffee
{

//
// Contents
//
//   Application
//

///////////////////////////////////////////////////////////////////////////////
//
// Application
//

void Application::SetupPlatform( const ApplicationSettings& settings )
{
    auto eglView = CCEGLView::sharedOpenGLView();
    eglView->setViewName( settings.win32FrameTitle.c_str() );
    eglView->setFrameSize( settings.win32FrameWidth, settings.win32FrameHeight );

    auto fileUtils = CCFileUtils::sharedFileUtils();
    fileUtils->addSearchPath( settings.win32AssetsPath.c_str() );
}


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee
