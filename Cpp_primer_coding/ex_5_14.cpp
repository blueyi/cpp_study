/*
 * 5_14.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str ;
    string cWord;
    vector<string> words;
    while (cin >> str) {
        words.push_back(str);
    }
    unsigned sumc = 0;
    unsigned sum = 0;
    for (vector<string>::iterator ite = words.begin(); ite != words.end(); ++ite) {
        sumc = 0;
        for (vector<string>::iterator itec = ite; itec != words.end(); ++itec) {
            if (*ite == *itec)
              ++sumc;
        }
        if (sumc > sum) {
          sum = sumc;
          cWord = *ite;
        }
    }
    cout << cWord << ": " << sum << endl;
    return 0;
}



