/*
 * 10_1.cpp
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
    int tmp;
    std::cout << "Input a series of number:" << std::endl;
    while (std::cin >> tmp) {
        vint.push_back(tmp);
    }
    std::cin.clear();
    std::cin.sync();
    int val;
    std::cout << "Input a count number:" << std::endl;
    std::cin >> val;
    std::cout << count(vint.cbegin(), vint.cend(), val) << std::endl;
    return 0;
}



