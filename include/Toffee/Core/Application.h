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

    // Main Loop Entry
    Int Run();


    /// CCApplicationProtocol Events ///

    bool applicationDidFinishLaunching()  override;
    void applicationWillEnterForeground() override;
    void applicationDidEnterBackground()  override;


private:
    
    // Hide some CCApplication functions
    using cocos2d::CCApplication::run;
};


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee

#endif // __TOFFEE_CORE_APPLICATION_H
