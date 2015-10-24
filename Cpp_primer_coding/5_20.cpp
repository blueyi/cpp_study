/*
 * 5_20.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;
int main()
{
    string cstr, pstr;
    while (cin >> cstr) {
        if (cstr == pstr) {
            cout << cstr << " appear two times." << endl;
            break;
        }
        pstr = cstr;
    }
    if (cin.eof()) 
      cout << "None" << endl;
    return 0;
}



