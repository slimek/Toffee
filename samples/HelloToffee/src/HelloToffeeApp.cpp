// Toffee Samples "HelloToffee" - Application Implementation

#include "HelloToffeePch.h"
#include "HelloToffeeApp.h"

#include "MenuScene.h"


HelloToffeeApp::HelloToffeeApp()
    : Application( MenuScene::ID )
{
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

