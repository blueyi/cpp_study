/*
 * 4_21.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10000);
    string str = "i love china";
    cout << sizeof str << " " << endl;
    for (vector<int>::size_type index = 0;index < 10; ++index) {
        ivec.push_back(index + 1);
    }
    cout << sizeof ivec << " " << endl;
    for (vector<int>::iterator ite = ivec.begin(); ite != ivec.end(); ++ite) {
        cout << *ite << " ";
    }
    cout << endl;
    for (auto &item : ivec) {
        item = ((item / 2 != 0) ?  item*2 : item);
    }
    for (vector<int>::iterator ite = ivec.begin(); ite != ivec.end(); ++ite) {
        cout << sizeof ivec << " ";
    }
    cout << endl;

    return 0;
}




