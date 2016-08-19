/*
 * readconf.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    std::ifstream in("inp.txt");
    std::string str;
    std::vector<void *> ls;
    std::string s;
    int a;
    double b;
    ls.push_back(&s);
    ls.push_back(&a);
    ls.push_back(&b);
    std::vector<void *>::size_type i = 0;
    while (getline(in, str)) {
        std::cout << str << std::endl;
        std::istringstream is(str);
        if (i < 3)
          is >> *(ls[i++]);
        else 
          break;
    }
    return 0;
}


