// Toffee C++ Library - Core - Scene Header

#ifndef __TOFFEE_SCENE_H
#define __TOFFEE_SCENE_H

#include <Toffee/Toffee.h>


namespace Toffee
{

///////////////////////////////////////////////////////////////////////////////
//
// Scene
//

class Scene : public cocos2d::CCScene
{
public:

    Scene();


    /// CCNode Enter/Exit Events ///

    void onEnter() final override;
    void onExit()  final override;


private:

    /// Enter/Exit Events ///

    virtual void OnSceneEnter() {}
    virtual void OnSceneExit()  {}

};


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee

#endif // __TOFFEE_SCENE_H
