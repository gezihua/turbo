#ifndef LOGCAT_LOGCAT_H
#define LOGCAT_LOGCAT_H
#include <android/log.h>
#define TAG "MyNativeLib"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)
#endif
