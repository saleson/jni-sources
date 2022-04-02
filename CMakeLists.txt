cmake_minimum_required(VERSION 3.15)
project(jni_sources)

set(CMAKE_CXX_STANDARD 14)

add_library(jni_sources SHARED jni/com_saleson_jni_JNIDemo.h JNIDemo.c)