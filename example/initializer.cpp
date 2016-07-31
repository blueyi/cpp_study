/*
 * initializer.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <initializer_list>
#include <iostream>

template <typename T> T sum(std::initializer_list<T> args)
{
    T total = 0.0;
    for (const auto &item : args) {
        total += item;
    }
    return total;
}

int main(void)
{
    std::cout << sum<int>({1, 2, 3, 4, 5}) << std::endl;
    std::cout << sum<double>({1, 1.2, 3, 14.4}) << std::endl;
    return 0;
}




