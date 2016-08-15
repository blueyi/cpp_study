/*
 * std_move.cpp
 * Copyright (C) 2016 blueyi <blueyi@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <utility>
#include <iostream>

int main(void)
{
    int a = 5;
    int &&ra = std::move(a);
    ra = 23;
    a = 6;
    std::cout << &a << std::endl;
    std::cout << &ra << std::endl;

    int i = 4;  //变量i是个左值
    int &ri = i; //将一个左值引用绑定到一个左值上，变量ri同样为左值
    int &&rri = ri; //错误：不能将右值引用绑定到一个左值
    int &r2 = i * 3; //错误：i * 3是一个右值
    int &&rr2 = i * 3; //正确：将一个右值引用绑定右值
    const int &r3 = i * 3; //正确：将一个const的引用绑定到右值
    int &&rr4 = rr2; //错误：变量rr2为左值，虽然rr2为右值引用，但其本身是个变量，变量是左值


    return 0;
}


