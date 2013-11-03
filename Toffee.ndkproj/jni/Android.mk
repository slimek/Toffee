LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := Toffee

MY_SRC := ../../src

LOCAL_SRC_FILES := \
	$(MY_SRC)/Core.cpp
	
LOCAL_C_INCLUDES := \
	$(LOCAL_PATh)/../../src \
	$(LOCAL_PATH)/../../include \
	$(GIT_ROOT)/Caramel/include \
	$(GIT_ROOT)/CandyJar/include \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/kazmath/include \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/platform/android \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/platform \
	$(GIT_ROOT)/cocos2d-x/cocos2dx \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/include
	
include $(BUILD_STATIC_LIBRARY)
