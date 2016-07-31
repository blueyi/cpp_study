/*
 * extern_c.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

extern "C" {   //将头文件声明为extern "C"之后，该头文件中声明的所有函数都将在编译时以C语言的方式处理
    #include "extern_c.h"
}

extern "C" {    //此时是否加extern "C"都一样，因为整个头文件都被声明为了extern "C"
    char get(char ch)
    {
        return ch;
    }
}

int mult(int a, int b)   //不需要extern "C"，因为头文件已经被声明为extern "C"
{
    return a * b;
}

float divi(float a, float b)
{
    return a / b;
}
