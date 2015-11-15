/*
 * convertChinesecodeinMemodict.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>

using namespace std;
string convertStr(string paramString)
{
    string localStringBuffer;
    for (int i1 = 0;; i1++)
    {
        if (i1 >= paramString.size()) {
            return localStringBuffer;
        }
        localStringBuffer.push_back((char)(-100 + (i1 ^ paramString.at(i1))));
        cout << "--" << localStringBuffer.size() << "--" << endl;
    }
}

int main()
{
    string str = "髰谤硧";
    //    setlocale(LC_ALL, "chs");
    //cout << convert("髰谤硧") << endl;
    cout << convertStr(str) << endl;
    //    wchar_t str[] = L"我";
    //    wcout << hex << (int)str[0] << endl;
    return 0;
}
