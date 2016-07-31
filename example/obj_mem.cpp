/*
 * obj_mem.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

class Bass {
public:
    Bass(int num = 0) : a(num) {}
    Bass(const Bass &b);
    ~Bass() = default;
    int a;
};

Bass::Bass(const Bass &b)
{
    a = b.a;
}

int main(void)
{
    Bass b(5);
    std::cout << b.a << std::endl;

    return 0;
}


