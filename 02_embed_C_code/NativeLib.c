#include <jni.h>
#include <stdio.h>
#include "NativeLib.h"

JNIEXPORT void JNICALL Java_NativeLib_hello(JNIEnv *env, jobject obj) {
    printf("Hello from C!\n");
}

