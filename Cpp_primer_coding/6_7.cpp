/*
 * 6_7.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

int func();
int main()
{
   for (int i = 0; i < 10; ++i)  {
       cout << func() << endl;
   }
   return 0;
}

int func()
{
    static int i = 0;
    return ++i;
}

