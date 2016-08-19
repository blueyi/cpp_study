/*
 * te.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */
#include <iostream>
class a {
public:
    a(int i) : x(i) {}
    void p()
    {
        std::cout << x << std::endl;
    }
    void asgin(a &b)
    {
        int t = x;
        x = b.x;
        b.x = t;
    }
private:
    int x;
};

int main(void)
{
    a aa(5);
    a bb(7);
    aa.asgin(bb);
    aa.p();
    bb.p();
    return 0;    

}
