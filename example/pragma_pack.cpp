/*
 * pragma_pack.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#pragma pack(2)
// 指定对齐大小为2

class node3 {
    char a;    // a按1字节对齐，占用为0
    int b;     //b按2字节对齐，占用为2~5
    short c;   //c按2字节对齐，占用为6~7
};
//整个类node3的大小应该是2的整数倍，即8

int main(void)
{
    std::cout << "node3: " << sizeof(node3) << std::endl;
    return 0;
}

