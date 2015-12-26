/*
 * 5_17.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec1{0, 1, 1, 2};
    vector<int> vec2{0, 1, 1, 3, 3, 7, 8, 9};
    vector<int>::iterator ite1 = vec1.begin(); 
    vector<int>::iterator ite2 = vec2.begin(); 
    while (ite1 != vec1.end()) {
        if (*ite1 != *ite2) {
            cout << "False" << endl;
            break;
        }
        ++ite1;
        ++ite2;
    }
    if (ite1 == vec1.end())
      cout << "True" << endl;
}



