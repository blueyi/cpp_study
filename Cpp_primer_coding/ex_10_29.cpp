/*
 * 10_29.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ifstream in("test.cpp");
    std::istream_iterator<std::string> in_ter(in), eof;
    std::vector<std::string> vecstr(in_ter, eof);
    std::ostream_iterator<std::string> out(std::cout, " ");
    std::copy(vecstr.begin(), vecstr.end(), out);
    std::cout << std::endl;
    return 0;
}


