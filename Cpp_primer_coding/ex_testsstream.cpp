/*
 * testsstream.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    string str = "12love12.33";
    istringstream is(str);
    for (string::size_type i = 0; i < str.size(); ++i) {
        cout << (char)is.get() << endl;
    }
    cout << "*******" << endl;
    if ((char)is.peek() == EOF)
      cout <<  "EOF" << endl;
    else if ((char)is.peek() == EOF)
      cout <<  "EOF" << endl;
    return 0;
}


