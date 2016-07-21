/*
 * memory_alignment.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

//以起始位置分析
class node1 {   
//未指定内存对齐，默认以类中占用最大的元素大小对齐，x64系统，所以p指针会占用8个字节
    char c;     //c的起始位置为0,占用1,占用位置为0
    char *p;    //p起始位置需要是8的倍数，所以占用位置为8~15
    int a;      //a的起始位置需要是4的倍数，即16~19
    short b;    //b的起始位置需要是2的倍数，即20~21
};
// 根据上面的分析，node1的占用应该是从0~21即22个字节，由于整个类需要以8字节对齐，即占用需要是8的倍数，所以总共占用应该是24。

// 以占用分析
class node2 {
// 未指定内存对齐，默认以类中占用最大的元素大小对齐
// 如果里面含有结构体或类类型，则该类型的对齐大小以其中的占用最大元素大小来定，即8
    int a;      //a大小为4字节，按4字节对齐，占用8字节内存块的前4字节
    char b;     //b大小为1，按1字节对齐，由于后面的float类型的c需要4个字节
    float c;    //所以，而这个8字节的内存块放不下，需要将c存到下一个内存块
    node1 n;    //导致b与c之间会有3个字节的空闲。n占用24个字节，显然c后面剩余的那个
                //内存块的4节点放不下，n也需要存到下一个内存块
};
// 根据上面的分析node2占用应该为4+1+3+8+24=40

int main(void)
{
    std::cout << "node1: " << sizeof(node1) << std::endl;
    std::cout << "node2: " << sizeof(node2) << std::endl;
    return 0;
}
