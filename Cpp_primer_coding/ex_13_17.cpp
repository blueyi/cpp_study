/*
 * 13_17.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

class numbered {
    public:
        numbered()
        {
            static int unique = 10;
//            mysn = unique++;
        }
    private:
        int mysn;
};

void f(numbered s)
{
    std::cout << s.mysn << std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
}


