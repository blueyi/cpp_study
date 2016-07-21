/*
 * static_b.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

extern int func();
extern int a;

int main(void)
{
    std::cout << func() << std::endl;
    std::cout << a << std::endl;

    return 0;
}

