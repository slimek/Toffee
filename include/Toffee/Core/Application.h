// Toffee C++ Library - Core - Application Header

#ifndef __TOFFEE_CORE_APPLICATION_H
#define __TOFFEE_CORE_APPLICATION_H

#include <Toffee/Toffee.h>


namespace Toffee
{

///////////////////////////////////////////////////////////////////////////////
//
// Application
//

class Application : public cocos2d::CCApplication
{
public:

    explicit Application( Int initialSceneId );


    // Main Loop Entry
    Int Run();


    /// CCApplicationProtocol Events ///

    bool applicationDidFinishLaunching()  final override;
    void applicationWillEnterForeground() final override;
    void applicationDidEnterBackground()  final override;


private:
    
    /// Scene Actions ///

    virtual Scene* CreateScene( int sceneId ) = 0;


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

} // namespace Toffee

#endif // __TOFFEE_CORE_APPLICATION_H
