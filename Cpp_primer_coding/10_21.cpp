/*
 * 10_21.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

void func(int &num)
{
    auto isZero = [&num]() { return --num == 0 ? false : true;};
    while (isZero())
        std::cout << num << " ";
}

int main()
{
    int num;
    std::cin >> num;
    func(num);
    std::cout << std::endl;
    return 0;
}


