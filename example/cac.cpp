/*
 * cac.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>

using namespace std;
bool csc(const string &str)
{
    for (string::const_iterator b = str.begin(), e = str.end() - 1; b < e; ++b, --e)  {
        cout << *b << " * " << *e << endl;
        if (*b != *e) 
            return false;
    }
    return true;
}

int main(void)
{
    string s;
    while (cin >> s && s != "quit") {
        if (csc(s))
            cout << "OK" << endl;
        else
            cout << "NO" << endl;
        cout << endl;

    }
    return 0;
}


