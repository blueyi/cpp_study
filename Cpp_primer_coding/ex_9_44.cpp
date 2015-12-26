/*
 * 9_43.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>

void replacestr(std::string &s, std::string const &oldVal, std::string const newVal)
{
    for (std::string::size_type pos = 0; pos < s.size();) {
        if (oldVal == s.substr(pos, oldVal.size())) {
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        else
            pos++;
    }
}

int main(int argc, char **argv)
{
    std::string s = "I think tho is a good tho in china";
    std::string oldVal = "tho";
    std::string newVal = "though";
    replacestr(s, oldVal, newVal);
    std::cout << s << std::endl;
    return 0;
}


