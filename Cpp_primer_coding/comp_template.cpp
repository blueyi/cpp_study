/*
 * comp_template.cpp
 * Copyright (C) 2016 blueyi <blueyi@debian>
 *
 * Distributed under terms of the MIT license.
 */

#include "comp_template.h"
#include <iostream>

int main()
{
    std::cout << compare(3, 1) << std::endl;
    std::cout << compare("you", "Youl") << std::endl;
    return 0;
}

