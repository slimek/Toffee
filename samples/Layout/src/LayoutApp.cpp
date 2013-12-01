// Toffee Samples "Layout" - Application Implementation

#include "LayoutPch.h"
#include "LayoutApp.h"

#include "MenuScene.h"


///////////////////////////////////////////////////////////////////////////////
//
// Layout Application
//

LayoutApp::LayoutApp()
    : Application( SCENE_MENU )
{
}


//
// Scene Actions
//

Scene* LayoutApp::CreateScene( Int sceneId )
{
    switch ( sceneId )
    {
    case SCENE_MENU:
        return new MenuScene;

    default:
        return nullptr;
    }
}


///////////////////////////////////////////////////////////////////////////////
