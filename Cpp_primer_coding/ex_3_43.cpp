/*
 * 3_43.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;
int main()
{
    int ia[3][4];
    for (size_t row = 0; row < 3; ++row) {
        for (size_t col = 0; col < 4; ++col) {
            ia[row][col] = col + row * 4;
        }
    }
    //使用C++11中的using来简化定义指向数组的指针
    using int_arr = int[4];
    //for (const int_arr &row : ia) {  //类型别名控制外部循环
    //使用引用输出
    cout << "Reference" << endl;
    for (const int (&row)[4] : ia) {
        for (const int col : row) {
            cout << col << " ";
        }
    }
    cout << endl << "Subscript" << endl;
    //使用下标输出
    for (size_t row = 0; row < 3; ++row) {
        for (size_t col = 0; col < 4; ++col) {
            cout << ia[row][col] << " ";
        }
    }
    cout << endl << "Pointer" << endl;
    //使用指针输出
    for (const int_arr *row = ia; row != ia + 3; ++row) {  //使用类型别名，row是一个指向含有4个int型元素的指针，ia中含有3个int *型的元素，每个元素又含有4个int的整型
   // for (const int (*row)[4] = ia; row != ia + 3; ++row) {
        for (const int *col = *row; col != *row + 4; ++col) {
            cout << *col << " ";
        }
    }
    cout << endl << "auto" << endl;
    //使用auto
    for (const auto &row : ia) {
        for (auto col : row) {
            cout << col << " ";
        }
    }

    cout << endl;
    return 0;
}



