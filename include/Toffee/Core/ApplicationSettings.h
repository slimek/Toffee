// Toffee C++ Library - Core - Application Settings Header

#ifndef __TOFFEE_CORE_APPLICATION_SETTINGS_H
#define __TOFFEE_CORE_APPLICATION_SETTINGS_H
#pragma once

#include <Toffee/Toffee.h>


namespace Toffee
{

///////////////////////////////////////////////////////////////////////////////
//
// Application Setting Structures
//

//
// Desktop Settings
// - Used by non-mobile platform, e.g. Win32 or Mac.
//
struct DesktopSettings
{
    DesktopSettings()
        : frameWidth( 800 )
        , frameHeight( 600 )
    {}

    // Both width and height are in physical pixels
    Float frameWidth;
    Float frameHeight;

    // The relative path of assets folder
    std::string assetsPath;
};


//
// All-in-One Settings Structure
//
struct ApplicationSettings
{
    std::string title;        // The name on the App's title bar
    DesktopSettings desktop;
};


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee

#endif // __TOFFEE_CORE_APPLICATION_SETTINGS_H
