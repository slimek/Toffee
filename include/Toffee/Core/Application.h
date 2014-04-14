// Toffee C++ Library - Core - Application Header

#ifndef __TOFFEE_CORE_APPLICATION_H
#define __TOFFEE_CORE_APPLICATION_H
#pragma once

#include <Toffee/Setup/ToffeeDefs.h>
#include <Toffee/Core/ApplicationSettings.h>


namespace Toffee
{

///////////////////////////////////////////////////////////////////////////////
//
// Application
//

class Application : public CCApplication
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
    void SetupPlatform();


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

    ApplicationSettings m_settings;
};


///////////////////////////////////////////////////////////////////////////////
//
// Android-only Functions
//

void NativeInit( Toffee::Application*& app, Toffee::ApplicationSettings& settings );


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee

#endif // __TOFFEE_CORE_APPLICATION_H
