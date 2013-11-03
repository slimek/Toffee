// Toffee C++ Library - Core Implementation

#include "ToffeePch.h"

#include <Toffee/Core/Application.h>
#include <Toffee/Core/Scene.h>


namespace Toffee
{

//
// Contents
//
//   Application
//   Scene
//

///////////////////////////////////////////////////////////////////////////////
//
// Application
//

Application::Application( int initialSceneId )
    : m_initialSceneId( initialSceneId )
{
}


bool Application::applicationDidFinishLaunching()
{
    auto director = CCDirector::sharedDirector();
    director->setOpenGLView( CCEGLView::sharedOpenGLView() );

    // TODO:
    // eglView->setDesignResolutionSize()

    // TODO:
    // fileUtils->set or addSearchPath()

    director->setDisplayStats( true );

    this->OnDidFinishLaunching();

    auto scene = this->CreateScene( m_initialSceneId );
    director->runWithScene( scene );

    return true;
}


void Application::applicationWillEnterForeground()
{
    CCDirector::sharedDirector()->startAnimation();
}


void Application::applicationDidEnterBackground()
{
    CCDirector::sharedDirector()->stopAnimation();
}


//
// Application Main Loop Entry
//

Int Application::Run()
{
    return CCApplication::sharedApplication()->run();
}


///////////////////////////////////////////////////////////////////////////////
//
// Scene
//

Scene::Scene()
{
    this->autorelease();
}


void Scene::onEnter()
{
    this->setContentSize( CCDirector::sharedDirector()->getWinSize() );

    this->scheduleUpdate();

    this->OnSceneEnter();
}


void Scene::onExit()
{
    this->OnSceneExit();

    this->unscheduleUpdate();
}


///////////////////////////////////////////////////////////////////////////////

} // namespace Toffee
