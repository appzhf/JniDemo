//
// Created by Administrator on 2017/3/30.
//
#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_zhf_jnidemo_MainActivity_getTextFromCpp
        (JNIEnv *env, jobject /*this*/) {
    std::string text = "Text From C++";
    return env->NewStringUTF(text.c_str());
}
extern "C"
jstring
Java_com_example_zhf_jnidemo_MainActivity_getTextFromCpp1
        (JNIEnv *env, jobject /*this*/) {
    std::string text = "C++";
    return env->NewStringUTF(text.c_str());
}
extern "C"
jint
Java_com_example_zhf_jnidemo_MainActivity_getNumCpp(JNIEnv *env, jint i, jint j) {
    i = 20;
    j = 30;
    jint sum = i + j;
    return sum;
}
extern "C"
jint
Java_com_example_zhf_jnidemo_MainActivity_getIteratorCpp(JNIEnv *env, jint sum) {
    sum = 0;
    for (int i = 0; i <= 100; ++i) {
        sum += i;
    }
    return sum;
}
extern "C"{
    jstring
    Java_com_example_zhf_jnidemo_MainActivity_getTextShowCpp(JNIEnv * env){
        return env->NewStringUTF("你好!这是java native interface");
    }
}


