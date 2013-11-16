// Toffee Samples "HelloToffee" - Application Header

#ifndef __HELLO_TOFFEE_HELLO_TOFFEE_APP_H
#define __HELLO_TOFFEE_HELLO_TOFFEE_APP_H

#include <Toffee/Core/Application.h>


class HelloToffeeApp : public Application
{
public:
    
    HelloToffeeApp();

    
    /// Application Scene Actions ///

    Scene* CreateScene( int sceneId ) override;
};


#endif // __HELLO_TOFFEE_HELLO_TOFFEE_APP_H
