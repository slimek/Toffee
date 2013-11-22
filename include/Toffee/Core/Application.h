// Toffee C++ Library - Core - Application Header

#ifndef __TOFFEE_CORE_APPLICATION_H
#define __TOFFEE_CORE_APPLICATION_H

#pragma once

#include <Toffee/Toffee.h>


namespace Toffee
{

///////////////////////////////////////////////////////////////////////////////
//
// Application Settings
//

struct ApplicationSettings
{
    ApplicationSettings()
        : win32FrameWidth( 800 )
        , win32FrameHeight( 600 )
    {}
    
    /// Win32 Only ///

    Float win32FrameWidth;        // in pixels
    Float win32FrameHeight;       // in pixels
    std::string win32FrameTitle;  // The name on the Window's title bar.
    std::string win32AssetsPath;
};


///////////////////////////////////////////////////////////////////////////////
//
// Application
//

class Application : public cocos2d::CCApplication
{
public:

    explicit Application( Int initialSceneId );


    // Main Loop Entry
    Int Run( const ApplicationSettings& settings );


    /// CCApplicationProtocol Events ///

    bool applicationDidFinishLaunching()  final override;
    void applicationWillEnterForeground() final override;
    void applicationDidEnterBackground()  final override;


private:
    
    /// Setup ///

    // Implementation is platform dependent.
    void SetupPlatform( const ApplicationSettings& settings );


    /// Scene Actions ///

    virtual Scene* CreateScene( Int sceneId ) = 0;


    /// Application Events ///

    virtual void OnDidFinishLaunching()  {}
    virtual void OnWillEnterForeground() {}
    virtual void OnDidEnterBackground()  {}


    // Hide some CCApplication functions
    using cocos2d::CCApplication::run;


    /// Data Members ///

    int m_initialSceneId;
};


///////////////////////////////////////////////////////////////////////////////
//
// Android-only Functions
//

void NativeInit( Toffee::Application*& app, Toffee::ApplicationSettings& settings );


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee

#endif // __TOFFEE_CORE_APPLICATION_H
