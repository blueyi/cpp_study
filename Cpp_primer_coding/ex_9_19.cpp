/*
 * 9_18.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::string> lstr;
    std::string str;
    while (std::cin >> str) {
        lstr.push_back(str);
    }
    for (std::list<std::string>::const_iterator it = lstr.cbegin(); it != lstr.cend(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}


