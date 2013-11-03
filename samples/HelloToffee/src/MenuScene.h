// Toffee Samples "HelloToffee" - Menu Scene Header

#ifndef __HELLO_TOFFEE_MENU_SCENE_H
#define __HELLO_TOFFEE_MENU_SCENE_H

#include <Toffee/Core/Scene.h>


class MenuScene : public Scene
{
public:

    enum { ID = 1 };


    /// Scene Enter/Exit Events ///

    void OnSceneEnter();

};


#endif // __HELLO_TOFFEE_MENU_SCENE_H
