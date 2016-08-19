/*
 * random.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

//random num range is min to max
template <typename T> T cRandom(int min, int max)
{
    return (min + static_cast<T>(max * rand() / static_cast<T>(RAND_MAX + 1)));
}

int main(void)
{
    srand((unsigned)time(NULL));
    std::cout << "int: " << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << cRandom<int>(1, 15) << " ";
    }
    std::cout << std::endl;
    std::cout << "double: " << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << cRandom<double>(1, 15) << " ";
    }
    std::cout << std::endl;
    return 0;
}


