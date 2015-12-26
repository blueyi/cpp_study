/*
 * multiArrForRange.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;
int main()
{
    int ia[2][3];
    size_t cnt = 0;
    for (auto &row : ia) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }
    }

    using int_arr = int[3];
    for (int_arr *prow = ia; prow != ia + 2; ++prow) {
        for (int *pcol = *prow; pcol != *prow + 3; ++pcol) {
            cout  << *pcol << " ";
        }
        cout << endl;
    }
    return 0;
}



