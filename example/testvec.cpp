/*
 * testvec.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec(20);
    for (auto &v : vec)
        v = 3;
    for (auto v : vec)
        std::cout << v << " ";
    std::cout << std::endl;
    return 0;
}


