LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := HelloToffee

MY_SRC := ../../src

LOCAL_SRC_FILES := \
	../../src.android/JniMain.cpp \
	$(MY_SRC)/HelloToffeeApp.cpp \
	$(MY_SRC)/MenuScene.cpp

LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)/../../src \
	$(GIT_ROOT)/Toffee/include \
	$(GIT_ROOT)/Caramel/include \
	$(GIT_ROOT)/CandyJar/include \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/kazmath/include \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/platform/android \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/platform \
	$(GIT_ROOT)/cocos2d-x/cocos2dx \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/include

LOCAL_WHOLE_STATIC_LIBRARIES := \
	cocos2dx_static \
	Toffee
	
include $(BUILD_SHARED_LIBRARY)


include $(call import-add-path,$(GIT_ROOT)/cocos2d-x)
include $(call import-add-path,$(GIT_ROOT)/cocos2d-x/cocos2dx/platform/third_party/android/prebuilt)
include $(call import-module,cocos2dx)

include $(call import-add-path,$(GIT_ROOT)/)
include $(call import-module,Toffee/proj.android/jni)
