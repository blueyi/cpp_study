/*
 * testPair.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    pair<string, double> book1("The old man and The sea", 99.99);
    pair<string, double> book2;
    book2.first = "Harry porter";
    book2.second = 88.88;
    cout << book1.first << ": " << book1.second << endl;
    cout << book2.first << ": " << book2.second << endl;
    return 0;
}



