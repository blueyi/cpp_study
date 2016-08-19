/*
 * ifstream_test.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <fstream>
#include "common.h"

int main(void)
{
    std::ifstream inf("inipol.002");
    if (!inf)
        std::cout << "file Error" << std::endl;
    XYZ<double> num;
    int i = 0;
    while (inf >> num.x >> num.y >> num.z && i++ < 10)
        std::cout << num.x << " " << num.y << " " << num.z << " ";
    inf.close();
    std::cout << std::endl;
    double d = 2.9999999999999999;
    double z = 0.0000000000000001;
    double c = d + z;
    std::cout << c << std::endl;

    return 0;
}




