/*
 * 6_17.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <ctype>

using namespace std;
bool is_contain_capital(const string &str)
{
    for (char ch : str) {
        if (isupper(ch))
          return true;
    }
    return false;
}

int main()
{

}



