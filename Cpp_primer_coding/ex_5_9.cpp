/*
 * 5_9.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

int main()
{
    char ch;
    unsigned int acnt, ecnt, icnt, ocnt, ucnt;
    acnt = ecnt = icnt = ocnt = ucnt = 0;
    while (cin >> ch) {
        if (ch == 'a') ++acnt;
        else if (ch == 'e') ++ecnt;
        else if (ch == 'i') ++icnt;
        else if (ch == 'o') ++ocnt;
        else if (ch == 'u') ++ucnt;
    }
    cout << "a: " << acnt << endl;
    cout << "e: " << ecnt << endl;
    cout << "i: " << icnt << endl;
    cout << "o: " << ocnt << endl;
    cout << "u: " << ucnt << endl;
    return 0;
}



