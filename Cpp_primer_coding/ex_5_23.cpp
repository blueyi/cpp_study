/*
 * 5_23.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    for (int num1, num2; cout << "Enter two number: " << endl, cin >> num1 >> num2;) {
        try {
            if (num2 == 0) {
                throw runtime_error("Zero is error!");
            }
            cout << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << endl;
        } catch (runtime_error err) {
            cout << err.what()  << endl << "Enter \"y\" to continue or \"n\" to end" << endl;
            char ch;
            cin >> ch;
            if (!cin || ch != 'y')
              break;
        }
    }
    return 0;
}



