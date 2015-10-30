/*
 * testPar.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

int max(const int a, const int b = 5)
{
    return a < b ? b : a;
}

int main()
{
    cout << max(4, 3) << endl;
    return 0;
}

