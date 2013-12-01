// Toffee Samples "Layout" - Application Header

#ifndef __LAYOUT_LAYOUT_APP_H
#define __LAYOUT_LAYOUT_APP_H

#include <Toffee/Core/Application.h>


///////////////////////////////////////////////////////////////////////////////
//
// Layout Application
//

class LayoutApp : public Application
{
public:

    LayoutApp();

private:

    /// Scene Actions ///

    Scene* CreateScene( Int sceneId ) override;
};


///////////////////////////////////////////////////////////////////////////////
//
// Enumerations
//

enum SceneId
{
    SCENE_MENU = 0,
};


///////////////////////////////////////////////////////////////////////////////

#endif // __LAYOUT_LAYOUT_APP_H
