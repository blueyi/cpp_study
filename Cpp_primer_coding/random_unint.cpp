/*
 * random_unint.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <random>
#include <iostream>
#include <ctime>

double random_unint(unsigned int min, unsigned int max, unsigned int seed = 0)
{
    static std::default_random_engine e(seed);
    static std::uniform_real_distribution<double> u(min, max);
    return u(e);
}

int main(void)
{
    for (int i = 0; i < 15; ++i) {
        std::cout << random_unint(0, 15, time(NULL)) << " ";
    }
    std::cout << std::endl;
    return 0;
}



