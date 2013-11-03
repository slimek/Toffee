// Toffee C++ Library - Core Implementation

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

bool Application::applicationDidFinishLaunching()
{
    return true;
}


void Application::applicationWillEnterForeground()
{
}


void Application::applicationDidEnterBackground()
{
}


//
// Application Main Loop Entry
//

Int Application::Run()
{
    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee
