/*
 * 8_1.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>

std::istream& print(std::istream& in)
{
    std::string str;
    while (in >> str) {
        std::cout << str << std::endl;
    }
    return in;
}
int main()
{
    std::istream &is = print(std::cin);
    std::cout << is.rdstate()  << std::endl;
    return 0;
}


