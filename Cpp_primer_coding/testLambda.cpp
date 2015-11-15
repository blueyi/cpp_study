/*
 * testLambda.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>
using namespace std;
void fcn3()
{
   size_t v1 = 42;
   auto f = [&v1]()  {return ++v1;};
   v1 = 0;
   auto j = f(); //j为43
   cout << j << endl;
}
int main()
{
    fcn3();
    return 0;
}


