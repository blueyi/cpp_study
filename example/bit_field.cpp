/*
 * bit_field.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

struct bit_conf {
    unsigned int a:1;    //声明一个位宽为1位的成员变量a，也就是a只能是1或0
    int b:4;        //声明一个位宽为4的成员变量b，其可表示范围为有符号的-2^2~2^2
    unsigned int c:7;
    unsigned int d:20;    //一个int占4个字节，32位，那么一个字节之内bit_conf中共可以有32个位
                          //，所以此时sizeof(bit_conf)为4，如果将d声明为21，则sizeof(bit_conf)将为8，由于内存对齐的原因，就需要占用8个字节
};

int main(void)
{
    bit_conf conf;
    conf.b = -8;    //其取值只能是-8～8
    std::cout << conf.b << std::endl;
    std::cout << "sizeof(bit_conf):" << sizeof(bit_conf) << std::endl;
    return 0;
}


