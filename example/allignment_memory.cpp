/*
 * allignment_memory.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

class node4 {  //整体按double的8个字节对齐
    int a[5];  //a按4字节对齐，占用0-19
    double d;   //d按8字节对齐，占用24-31
    char c;  //c按1字节对齐，占用32
    short s[3]; //s按2字节对齐，占用34-39
};

register int a = 10;
int main(void)
{
    std::cout << sizeof(node4) << std::endl;
    std::cout << a << std::endl;
    return 0;
}


