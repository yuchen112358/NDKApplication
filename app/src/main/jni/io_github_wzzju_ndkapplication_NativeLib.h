/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_github_wzzju_ndkapplication_NativeLib */

#ifndef _Included_io_github_wzzju_ndkapplication_NativeLib
#define _Included_io_github_wzzju_ndkapplication_NativeLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_github_wzzju_ndkapplication_NativeLib
 * Method:    Init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_wzzju_ndkapplication_NativeLib_Init
  (JNIEnv *, jclass);

/*
 * Class:     io_github_wzzju_ndkapplication_NativeLib
 * Method:    GetGPUCurFreq
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_github_wzzju_ndkapplication_NativeLib_GetGPUCurFreq
  (JNIEnv *, jclass);

/*
 * Class:     io_github_wzzju_ndkapplication_NativeLib
 * Method:    GetCPUCurFreq
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_github_wzzju_ndkapplication_NativeLib_GetCPUCurFreq
  (JNIEnv *, jclass, jint);

/*
 * Class:     io_github_wzzju_ndkapplication_NativeLib
 * Method:    GetCPUTemp
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_github_wzzju_ndkapplication_NativeLib_GetCPUTemp
  (JNIEnv *, jclass, jint);

/*
 * Class:     io_github_wzzju_ndkapplication_NativeLib
 * Method:    OpenINA231
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_io_github_wzzju_ndkapplication_NativeLib_OpenINA231
  (JNIEnv *, jclass);

/*
 * Class:     io_github_wzzju_ndkapplication_NativeLib
 * Method:    CloseINA231
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_wzzju_ndkapplication_NativeLib_CloseINA231
  (JNIEnv *, jclass);

/*
 * Class:     io_github_wzzju_ndkapplication_NativeLib
 * Method:    GetINA231
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_github_wzzju_ndkapplication_NativeLib_GetINA231
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
