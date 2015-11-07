/*
 * 9_4.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>

std::vector<int>::const_iterator find(std::vector<int>::const_iterator start, std::vector<int>::const_iterator last, int val)
{
    while (start != last) {
        start++;
        if (*start == val)
          return start;
    }
    return last;
}

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back((i + 1) * 2);
    }
    std::vector<int>::const_iterator a, b;
    a = vec.begin();
    b = vec.end();
    std::cout << vec.value_type << std::endl;
    return 0;
}


