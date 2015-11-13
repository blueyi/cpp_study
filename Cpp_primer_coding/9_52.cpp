/*
 * 9_52.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <stack>

int main()
{
    std::stack<char> stk;
    std::string oldStr("This is (pizy).");
    bool beSeen = false;
    for (const char &ch : oldStr) {
        if (ch == '(') {
            beSeen = true;
            continue;
        }
        if (ch == ')') 
            beSeen = false;
        if (beSeen)
            stk.push(ch);
    }
    std::string rstk;
    while (!stk.empty()) {
        rstk += stk.top();
        stk.pop();
    }
    oldStr.replace(oldStr.find('(') + 1, rstk.size(), rstk);
    std::cout << oldStr << std::endl;
    return 0;
}



