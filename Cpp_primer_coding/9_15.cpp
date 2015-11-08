/*
 * 9_15.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <vector>
#include <iostream>

bool vecequal(std::vector<int> vec1, std::vector<int> vec2)
{
    return vec1 == vec2;
}

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<int> v2 = {1, 2, 4, 4};
    if (vecequal(v1, v2))
      std::cout << "Equal" << std::endl;
    else
      std::cout << "Not Equal" << std::endl;
    return 0;
}

