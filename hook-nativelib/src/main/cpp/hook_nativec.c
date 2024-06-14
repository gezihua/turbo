//
// Created by mulei on 2024/5/30.
//
#include "logcat.h"

#ifndef MY_APPLICATION_NATIVEC_C_C
#define MY_APPLICATION_NATIVEC_C_C
#endif //MY_APPLICATION_NATIVEC_C_C
#ifndef JNIEXPORT
#define JNIEXPORT  __attribute__ ((visibility ("default")))
#endif

#include <jni.h>
#include <string.h>
#include <stdio.h>
#include "logcat.h"

JNIEXPORT size_t ext_fwrite(const void *ptr, size_t size, size_t count, FILE *stream) {
    return fwrite(ptr, size, count, stream);
}

JNIEXPORT FILE *ext_fopen(const void *ptr, const void *mode) {
    LOGI("native hook file %s mode %s", ptr, mode);
    return fopen(ptr, mode);
}


