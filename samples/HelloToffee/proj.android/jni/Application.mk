APP_PLATFORM := android-10
APP_ABI := x86 armeabi
APP_STL := gnustl_static
APP_CFLAGS := -g -fexceptions -DCOCOS2D_DEBUG=1
APP_CPPFLAGS := -std=c++11 -frtti $(APP_CFLAGS)

NDK_TOOLCHAIN_VERSION := 4.8