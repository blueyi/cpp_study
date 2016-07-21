/*
 * static_stack.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

int func()
{
    static int a = 3;
    return a--;
}
int main(void)
{
    std::cout << func() << std::endl;
    std::cout << func() << std::endl;
    return 0;
}



