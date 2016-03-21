/*
 * notype_tem.cpp
 * Copyright (C) 2016 blueyi <blueyi@debian>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <cstring>

template<unsigned N, unsigned M> int compare(const char (&p1)[N], const char (&p2)[M])
{
    return strcmp(p1, p2);
}

int main()
{
    std::cout << compare("moom", "mom") << std::endl;
    return 0;
}

