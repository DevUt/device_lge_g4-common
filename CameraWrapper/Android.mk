LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	CameraWrapper.cpp \
	CameraWrapper2.cpp \
	CameraWrapper3.cpp

LOCAL_SHARED_LIBRARIES := \
    liblog \
	libhardware \
    libcamera_client \
    libutils \
    libcutils \
    android.hidl.token@1.0-utils \
    android.hardware.graphics.bufferqueue@1.0 \
    android.hardware.graphics.bufferqueue@2.0

LOCAL_STATIC_LIBRARIES := \
	libarect \
	libbase

LOCAL_HEADER_LIBRARIES := libnativebase_headers

LOCAL_C_INCLUDES := \
	frameworks/native/libs/nativewindow/include \
	frameworks/native/libs/arect/include \
	frameworks/av/media/ndk/include \
	system/media/camera/include

LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_MODULE := camera.$(TARGET_BOARD_PLATFORM)
LOCAL_MODULE_TAGS := optional
LOCAL_VENDOR_MODULE := true

include $(BUILD_SHARED_LIBRARY)