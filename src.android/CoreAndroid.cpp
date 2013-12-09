// Toffee C++ Library - Core Android Implementation

#include "ToffeePch.h"

#include <Toffee/Core/Application.h>
#include <jni/JniHelper.h>
#include <jni.h>


namespace Toffee
{

//
// Contents
//
//   Application
//   JNI Native Functions
//

///////////////////////////////////////////////////////////////////////////////
//
// Application
//

void Application::SetupPlatform()
{
}


} // namespace Toffee

///////////////////////////////////////////////////////////////////////////////
//
// JNI Native Functions
//

extern "C"
{

using namespace cocos2d;

jint JNI_OnLoad( JavaVM* vm, void* reserved )
{
    JniHelper::setJavaVM( vm );
    return JNI_VERSION_1_4;
}


void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit(
    JNIEnv* env, jobject thiz, jint width, jint height )
{
    if ( ! CCDirector::sharedDirector()->getOpenGLView() )
    {
        auto eglView = CCEGLView::sharedOpenGLView();
        eglView->setFrameSize( width, height );
        
        Toffee::Application* app = nullptr;
        Toffee::ApplicationSettings settings;
        
        Toffee::NativeInit( app, settings );
        
        app->Run( settings );  // Don't delete this pointer !
    }
    else
    {
        ccGLInvalidateStateCache();
        CCShaderCache::sharedShaderCache()->reloadDefaultShaders();
        ccDrawInit();
        CCTextureCache::reloadAllTextures();
        
        CCNotificationCenter::sharedNotificationCenter()->
            postNotification( EVENT_COME_TO_FOREGROUND, NULL );
        CCDirector::sharedDirector()->setGLDefaultValues();
    }
}   

} // extern "C"

///////////////////////////////////////////////////////////////////////////////

