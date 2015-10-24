/*
 * 5_19.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str1, str2;
    do {
        cout << endl << "Enter tow string: " << endl;
        cin >> str1 >> str2;
        cout << (str1.length() > str2.length() ? str2 : str1);
    } while (str1 != str2);
    return 0;
}


