// Toffee Samples "HelloToffee" - Application Implementation

#include "HelloToffeePch.h"
#include "HelloToffeeApp.h"

#include "MenuScene.h"


HelloToffeeApp::HelloToffeeApp()
    : Application( MenuScene::ID )
{
}


void HelloToffeeApp::OnDidFinishLaunching()
{
    auto eglView = CCEGLView::sharedOpenGLView();
    eglView->setDesignResolutionSize( 1024, 768, kResolutionShowAll );
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

