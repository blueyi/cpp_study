/*
 * 6_4.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

int fact(int num);

int main()
{
    int inte = 0;
    cout << "Input an integer: ";
    cin >> inte;
    cout << inte << "! = " << fact(inte) << endl;
    return 0;
}

int fact(int num)
{
    int sum = 1;
    while (num > 1) {
        sum *= num--;
    }
    return sum;
}
