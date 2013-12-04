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

void Application::SetupPlatform()
{
    const ApplicationSettings& as = m_settings;
    const DesktopSettings& ds = as.desktop;

    auto eglView = CCEGLView::sharedOpenGLView();
    eglView->setViewName( as.title.c_str() );
    eglView->setFrameSize( ds.frameWidth, ds.frameHeight );

    auto fileUtils = CCFileUtils::sharedFileUtils();
    fileUtils->addSearchPath( ds.assetsPath.c_str() );
}


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee
