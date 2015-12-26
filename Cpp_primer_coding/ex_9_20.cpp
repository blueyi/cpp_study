/*
 * 9_18.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <list>
#include <string>
#include <deque>

int main()
{
    std::deque<int> jde;
    std::deque<int> ode;
    std::list<int> lint;
    for (int i = 0; i < 10; ++i) {
        lint.push_back(i+1);
    }
    for (auto it : lint) {
        if (it % 2 == 0) {
            ode.push_back(it);
        }
        else {
            jde.push_back(it);
        }
    }
    for (auto i = jde.cbegin(); i != jde.cend(); ++i)
        std::cout << "jde: " << *i << std::endl;
    for (auto i = ode.cbegin(); i != ode.cend(); ++i)
        std::cout << "ode: " << *i << std::endl;
    std::cout << jde.max_size()  << std::endl;
    return 0;
}


