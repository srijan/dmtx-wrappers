/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_libdmtx_DMTXImage */

#ifndef _Included_org_libdmtx_DMTXImage
#define _Included_org_libdmtx_DMTXImage
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_libdmtx_DMTXImage
 * Method:    createTag
 * Signature: (Ljava/lang/String;)Lorg/libdmtx/DMTXImage;
 */
JNIEXPORT jobject JNICALL Java_org_libdmtx_DMTXImage_createTag
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_libdmtx_DMTXImage
 * Method:    getTags
 * Signature: (II)[Lorg/libdmtx/DMTXTag;
 */
JNIEXPORT jobjectArray JNICALL Java_org_libdmtx_DMTXImage_getTags
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif