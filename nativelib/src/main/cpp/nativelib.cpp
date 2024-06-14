#include <jni.h>
#include <string>
#include <stdio.h>
#include "logcat.h"

JNIEXPORT size_t write_file_to_local() {
    FILE *opened = fopen("/dev/null", "w");
    char *buffer = "write...........";
    fwrite(buffer, sizeof(char), sizeof(buffer), opened);
    fflush(opened);
    fclose(opened);
    return 0;
}

struct TUE_STRUCT {
    std::string first;
    std::string second;
};

JNIEXPORT void *allcation_new() {
    TUE_STRUCT *p = new TUE_STRUCT;
    return p;
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_nativelib_NativeLib_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    write_file_to_local();
    allcation_new();
    return env->NewStringUTF(hello.c_str());
}





