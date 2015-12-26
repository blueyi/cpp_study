/*
 * 10_30.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::istream_iterator<int> in(std::cin), ieof;
    std::vector<int> vint;
    std::copy(in, ieof, std::back_inserter(vint));
    std::sort(vint.begin(), vint.end());
    std::ostream_iterator<int> out(std::cout, " ");
    std::copy(vint.begin(), vint.end(), out);
    return 0;
}


