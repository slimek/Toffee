#include "HelloToffeePch.h"

#include "HelloToffeeApp.h"
#include <jni/JniHelper.h>
#include <jni.h>


using namespace cocos2d;

extern "C"
{

jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
    JniHelper::setJavaVM(vm);

    return JNI_VERSION_1_4;
}


void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit(
    JNIEnv* env, jobject thiz, jint w, jint h )
{
    if ( ! CCDirector::sharedDirector()->getOpenGLView() )
	{
	    auto view = CCEGLView::sharedOpenGLView();
		view->setFrameSize( w, h );
		
		auto app = new HelloToffeeApp;

		ApplicationSettings s;

		app->Run( s );
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
