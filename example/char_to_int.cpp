/*
 * char_to_int.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

int ctoi(char ch)
{
    return ch - '0';
}
char itoc(int i)
{
    return i + '0';
}
int main(void)
{
    char ch = '8';
    std::cout << ctoi(ch) + 2 << std::endl;
    std::cout << itoc(7) << std::endl;
}


