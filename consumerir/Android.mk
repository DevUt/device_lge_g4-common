# Copyright (C) 2013 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := consumerir.$(TARGET_BOARD_PLATFORM)
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_SRC_FILES := consumerir.c
LOCAL_SHARED_LIBRARIES := liblog libcutils libcir_driver
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)

# Dummy libcir_driver
ifneq ($(TARGET_SUPPORTS_CONSUMERIR),true)

include $(CLEAR_VARS)
LOCAL_MODULE := libcir_driver
LOCAL_VENDOR_MODULE := true
LOCAL_SRC_FILES := consumerir.c
include $(BUILD_SHARED_LIBRARY)

endif
