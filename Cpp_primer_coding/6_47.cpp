/*
 * 6_47.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <cassert>
#define NDEBUG
using namespace std;
void print(vector<int> &vec)
{
#ifndef NDEBUG
    cout << "vector size: "  << vec.size() << endl;
#endif
    if (!vec.empty()) {
        int temp = vec.back();
        vec.pop_back();
        print(vec);
        cout << temp << endl;
    }
}
int main()
{
    vector<int> veci;
    for (vector<int>::size_type i = 0; i < 10; ++i) {
        veci.push_back(i + 1);
    }
    print(veci);
    return 0;
}

