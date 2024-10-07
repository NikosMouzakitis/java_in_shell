#include <jni.h>
#include <stdio.h>
#include "NativeLib.h"
#include "customlib.h" 


JNIEXPORT void JNICALL Java_NativeLib_print(JNIEnv *env, jobject obj) {
    printf("Hello from C!\n");
}

JNIEXPORT void JNICALL Java_NativeLib_print2(JNIEnv *env, jobject obj) {
    printf("another Hello from C!\n");
}

JNIEXPORT int JNICALL Java_NativeLib_add(JNIEnv *env, jobject obj, jint a, jint b) {
	return a+b;
}

JNIEXPORT int JNICALL Java_NativeLib_sub(JNIEnv *env, jobject obj, jint a, jint b) {
	return subtract(a,b);
}

