LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
    query.c

LOCAL_SHARED_LIBRARIES := \
	libutils \
	liblog

LOCAL_MODULE := devut-cap
LOCAL_MODULE_TAGS := optional
LOCAL_VENDOR_MODULE := true

include $(BUILD_EXECUTABLE) 