/*
 * 9_18.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <deque>
#include <string>

int main()
{
    std::deque<std::string> dstr;
    std::string str;
    while (std::cin >> str) {
        dstr.push_back(str);
    }
    for (std::deque<std::string>::iterator it = dstr.begin(); it != dstr.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}


