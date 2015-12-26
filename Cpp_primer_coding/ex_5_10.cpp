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
        switch (ch) {
            case 'a' : case 'A': 
                ++acnt;
                break;
            case 'e' : case 'E': 
                ++ecnt;
                break;
            case 'i' : case 'I': 
                ++icnt;
                break;
            case 'o' : case 'O': 
                ++ocnt;
                break;
            case 'u' : case 'U': 
                ++ucnt;
                break;
        }
    }
    cout << "a: " << acnt << endl;
    cout << "e: " << ecnt << endl;
    cout << "i: " << icnt << endl;
    cout << "o: " << ocnt << endl;
    cout << "u: " << ucnt << endl;
    return 0;
}



