#include <jni.h>
#include <stdio.h>
#include "NativeLib.h"

JNIEXPORT void JNICALL Java_NativeLib_print(JNIEnv *env, jobject obj) {
    printf("Hello from C!\n");
}

JNIEXPORT void JNICALL Java_NativeLib_print2(JNIEnv *env, jobject obj) {
    printf("another Hello from C!\n");
}
