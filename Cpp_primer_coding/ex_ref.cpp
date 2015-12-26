/*
 * ref.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

int mod(int &a)
{
    a = 8;
    return a;
}

int main()
{
    int b = 1;
    int &c = b;
    int *d = &b;
    std::cout << "mod(b): " << mod(b) << std::endl;
    std::cout << "b now: " << b << std::endl;
    std::cout << "c now: " << c << std::endl;
    std::cout << "d now: " << d << std::endl;
    return 0;
}


