//
// Created by Martin Kleinhans on 24.08.17.
//

#ifndef TRADINGLIB_SAMPLE_JNIV8GENERICOBJECT_H
#define TRADINGLIB_SAMPLE_JNIV8GENERICOBJECT_H

#include "JNIV8Object.h"

class JNIV8GenericObject : public JNIScope<JNIV8GenericObject, JNIV8Object> {
public:
    JNIV8GenericObject(jobject obj, JNIClassInfo *info) : JNIScope(obj, info) {};

    static bool isWrappableV8Object(v8::Local<v8::Object> object);
    static void initializeJNIBindings(JNIClassInfo *info, bool isReload);

    static jobject jniCreate(JNIEnv *env, jobject obj, jobject engineObj);
};

BGJS_JNI_LINK_DEF(JNIV8GenericObject)

#endif //TRADINGLIB_SAMPLE_JNIV8GENERICOBJECT_H
