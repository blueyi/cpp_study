/*
 * bit_operator.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

int main(void)
{
    int a = 15;
    std::cout << (a & 1) << std::endl;
    std::cout << (!(a & (a - 1)) && a) << std::endl;
    return 0;
}


