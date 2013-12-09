#
# Pre-built Libraries for Toffee App
#

LOCAL_PATH := $(call my-dir)

CANDY_LIB := $(GIT_ROOT)/CandyJar/lib/Android.Ndk/$(TARGET_ARCH_ABI)
COCOS_LIB := $(GIT_ROOT)/Cocos2d-x/lib/Android.Ndk/$(TARGET_ARCH_ABI)

include $(CLAER_VARS)
LOCAL_MODULE := boost-chrono
LOCAL_SRC_FILES := $(CANDY_LIB)/libboost-chrono.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLAER_VARS)
LOCAL_MODULE := boost-date_time
LOCAL_SRC_FILES := $(CANDY_LIB)/libboost-date_time.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLAER_VARS)
LOCAL_MODULE := boost-system
LOCAL_SRC_FILES := $(CANDY_LIB)/libboost-system.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := cocos2dx_static
LOCAL_SRC_FILES := $(COCOS_LIB)/libcocos2d.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := cocos_jpeg_static
LOCAL_SRC_FILES := $(COCOS_LIB)/libjpeg.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := cocos_libpng_static
LOCAL_SRC_FILES := $(COCOS_LIB)/libpng.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := cocos_libtiff_static
LOCAL_SRC_FILES := $(COCOS_LIB)/libtiff.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := cocos_libwebp_static
LOCAL_SRC_FILES := $(COCOS_LIB)/libwebp.a
include $(PREBUILT_STATIC_LIBRARY)


#
# Common Variables for Toffee App
#

TOFFEE_C_INCLUDES := \
	$(GIT_ROOT)/Toffee/include \
	$(GIT_ROOT)/Caramel/include \
	$(GIT_ROOT)/CandyJar/include \
	$(GIT_ROOT)/Cocos2d-x/cocos2dx/kazmath/include \
	$(GIT_ROOT)/Cocos2d-x/cocos2dx/platform/android \
	$(GIT_ROOT)/Cocos2d-x/cocos2dx/include \
	$(GIT_ROOT)/Cocos2d-x/cocos2dx

TOFFEE_LDLIBS := \
	-lGLESv2 \
	-llog \
	-lz
	
TOFFEE_STATIC_LIBRARIES := \
	boost-chrono \
	boost-date_time \
	boost-system \
	cocos2dx_static \
	cocos_jpeg_static \
	cocos_libpng_static \
	cocos_libtiff_static \
	cocos_libwebp_static
	