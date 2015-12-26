/*
 * 10_3.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vint;
    for (int i = 0; i < 100; ++i) {
        vint.push_back(i+1);
    }
    std::cout << accumulate(vint.cbegin(), vint.cend(), 0) << std::endl;
    return 0;
}


