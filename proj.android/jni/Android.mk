LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := Toffee

TF_SRC := ../../src
TF_SRC_ANDROID := ../../src.android

LOCAL_SRC_FILES := \
	$(TF_SRC)/Core.cpp \
	$(TF_SRC_ANDROID)/CoreAndroid.cpp
	
LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)/../../src.android \
	$(LOCAL_PATH)/../../src \
	$(LOCAL_PATH)/../../include \
	$(GIT_ROOT)/Caramel/include \
	$(GIT_ROOT)/CandyJar/include \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/kazmath/include \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/platform/android \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/platform \
	$(GIT_ROOT)/cocos2d-x/cocos2dx \
	$(GIT_ROOT)/cocos2d-x/cocos2dx/include
	
include $(BUILD_STATIC_LIBRARY)
