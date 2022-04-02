#include <stdio.h>

#include "jni/com_saleson_jni_JNIDemo.h"


JNIEXPORT void JNICALL Java_com_saleson_jni_JNIDemo_testHello(JNIEnv *env, jclass jc) {
/* gcc JNIDemo.c -o libJNIDemo.jnilib -dynamiclib  */
    printf("Hello Native!️❤️  \n ");
}

