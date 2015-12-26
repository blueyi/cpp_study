/*
 * 10_6.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vint;
    std::fill_n(std::back_inserter(vint), 10, 0);
    for (auto i : vint) {
        std::cout << i << std::endl;
    }
    return 0;
}


