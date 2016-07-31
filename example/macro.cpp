/*
 * macro.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include "macro.h"

#define PI 3.1415926   //#define指令
#define CUBE(x) (x)*(x)*(x)  //带参数的#define指令
#define AGE(x) "My age is " #x   //#运算符用于将后面的参数转成字符串
#define CON(x, y, z) x##y##z  //##运算符将其两侧的参数合并为一个符号
#define DEBUG 0
#define RUN 1
#define NODEBUG
#define IS_COMPILE true
#undef IS_COMPILE

int main(void)
{
    std::cout << PI << std::endl;
    std::cout << CUBE(PI + PI) << std::endl;
    std::cout << AGE(25) << std::endl;
    std::cout << CON(18, 19, 20) << std::endl;

#ifdef IS_COMPILE
    std::cout << "is compile" << std::endl;
#endif

#if DEBUG  //#if后面必须是个常量，如果DEBUG为真，则编译其后的代码，直到#elif，或#else，或#endif
    std::cout << "Debug" << std::endl;
#elif RUN  //同#if，与控制语句else if作用一样
    std::cout << "Run" << std::endl;
#else
    std::cout << "NONE" << std::endl;
#endif

#ifdef NODEUBG  //等价于#if defined NODEUBG
    std::cout << "NoDebug" << std::endl;
#endif

#ifndef NODEUBG  //等价于#if !defined NODEUBG
    std::cout << "no NoDebug" << std::endl;
#endif

#line 15 "my_macro.cpp"  //更改当前行为第15行，文件名为my_macro.cpp，也就是修改__LINE__和__FILE__变量的值

#if !defined(__cplusplus)   //如果没有定义__cplusplus则报错误#error+其后的字符串内容
#error C++ compiler required.
#endif

    return 0;
}

