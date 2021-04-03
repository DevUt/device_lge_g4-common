/*
 * Copyright (C) 2017, The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <utils/String8.h>
#include <hardware/hardware.h>
#include <hardware/camera.h>
#include <camera/Camera.h>
#include <camera/CameraParameters.h>

static android::Mutex gCameraWrapperLock;

static const char AUDIO_ZOOM_OFF[] = "audio-zoom";
static const char AUDIO_ZOOM_ON[] = "audio-zoom";
static const char BEAUTY_SHOT_OFF[] = "beauty-shot";
static const char BEAUTY_SHOT_ON[] = "beauty-shot";
static const char BURST_SHOT_OFF[] = "burst-shot";
static const char BURST_SHOT_ON[] = "burst-shot";
static const char KEY_AUDIO_ZOOM[] = "audio-zoom";
static const char KEY_AUDIO_ZOOM_SUPPORTED[] = "audio-zoom-supported";
static const char KEY_BEAUTY_SHOT[] = "beauty-shot";
static const char KEY_BEAUTY_SHOT_SUPPORTED[] = "beauty-shot-supported";
static const char KEY_BURST_SHOT[] = "burst-shot";
static const char KEY_BURST_SHOT_SUPPORTED[] = "burst-shot-supported";
static const char KEY_FOCUS_MODE_OBJECT_TRACKING[] = "object-tracking";
static const char KEY_FOCUS_MODE_OBJECT_TRACKING_SUPPORTED[] = "object-tracking-supported";
static const char KEY_ISO_MODE[] = "iso";
static const char KEY_LGE_CAMERA[] = "lge-camera";
static const char KEY_LGE_ISO_MODE[] = "lg-iso";
static const char KEY_SUPPORTED_ISO_MODES[] = "iso-values";
static const char KEY_VIDEO_WDR[] = "video-wdr";
static const char KEY_VIDEO_WDR_SUPPORTED[] = "video-wdr-supported";
static const char VIDEO_WDR_OFF[] = "video-wdr";
static const char VIDEO_WDR_ON[] = "video-wdr";
static const char OBJECT_TRACKING_ON[] = "object-tracking";
static const char OBJECT_TRACKING_OFF[] = "object-tracking";
static const char FOCUS_MODE_MANUAL_POSITION[] = "manual";
static const char WHITE_BALANCE_MANUAL_CCT[] = "manual-cct";

