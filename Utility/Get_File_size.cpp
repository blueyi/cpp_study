/*
 * Get_File_size.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <fstream>
#include <iostream>

std::ifstream::pos_type filesize(const char* filename)
{
    std::ifstream in(filename, std::ios::binary | std::ios::ate);
    return in.tellg();
}

int main(void)
{
    std::cout << "The size of " << "temp.txt" << " is " << filesize("temp.txt") / 1024.0 << "kb" << std::endl;
    return 0;
}

