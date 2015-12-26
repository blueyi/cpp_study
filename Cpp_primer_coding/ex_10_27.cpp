/*
 * 10_27.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iterator>
#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> l_unique;
    std::istream_iterator<std::string> in(std::cin), eof;
    std::list<std::string> lstr(in, eof);

    std::unique_copy(lstr.begin(), lstr.end(), back_inserter(l_unique));
    for (auto str : l_unique) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0;
}


