/*
 * funcPointer_arr.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

float f1(float a, int b)
{
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    return a + b;
}

float f2(float a, int b)
{
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    return a * b;
}

int main(void)
{
    //定义并初始化函数指针数组
    float (*pfa[2])(float, int) = {f1, f2};
    //调用该函数指针数组
    for (int i = 0; i < 2; ++i) {
        pfa[i](3, 9);
    }
    
    //使用typedef简化定义
    typedef float (*f_type)(float, int);
    f_type pfa2[] = {f1, f2};
    //调用该函数指针数组
    for (int i = 0; i < 2; ++i) {
        pfa2[i](6, 8);
    }

    return 0;
}

