/*
 * 6_21.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;
int max(int a, const int *b)
{
    return a > *b ? a : *b;
}

int main()
{
   cout << max(5, 7) << endl;
   return 0;
}


