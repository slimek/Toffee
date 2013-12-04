// Toffee Samples "HelloToffee" - Application Implementation

#include "HelloToffeePch.h"
#include "HelloToffeeApp.h"

#include "MenuScene.h"


//
// App Settings
//

const Float DESIGN_WIDTH  = 1024;
const Float DESIGN_HEIGHT = 768;


//
// Application
//

HelloToffeeApp::HelloToffeeApp()
    : Application( MenuScene::ID )
{
}


void HelloToffeeApp::OnDidFinishLaunching()
{
    auto eglView = CCEGLView::sharedOpenGLView();
    eglView->setDesignResolutionSize( DESIGN_WIDTH, DESIGN_HEIGHT, kResolutionShowAll );
}


Scene* HelloToffeeApp::CreateScene( int sceneId )
{
    switch ( sceneId )
    {
    case MenuScene::ID:
        return new MenuScene;

    default:
        return nullptr;
    }
}

