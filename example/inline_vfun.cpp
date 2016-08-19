/*
 * inline_vfun.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

class A {
public:
    inline virtual void func()
    {
        std::cout << "A inline virtual func" << std::endl;
    }
     static void sf()
    {
        std::cout << "static" << std::endl;
    }
};

class B : public A {
public:
    inline void func() override
    {
        std::cout << "B inline virtual func" << std::endl;
    }
};

int main(void)
{
    B *pb = new B();
    A *pa = pb;
    pb->func();
    pa->func();
    A a;
    a.sf();
    A::sf();

    return 0;
}
