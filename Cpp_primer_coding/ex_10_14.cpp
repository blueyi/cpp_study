/*
 * 10_14.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

int main()
{
    int a = 5;
    int b = 6;
    auto add = [a](int b){return a + b;};
    std::cout << add(8) << std::endl;
    return 0;
}


