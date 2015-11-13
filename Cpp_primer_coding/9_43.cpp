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
    for (std::string::const_iterator it = s.begin(); it < s.end(); ++it) {
        std::string::const_iterator oit = oldVal.begin();
        while (*it == *oit) {
            it++;
            oit++;
            if (it == s.end() || oit == oldVal.end())
                break;
        }
        if (oit == oldVal.end()) {
            it = s.erase(it-oldVal.size(), it);
            it = s.insert(it, newVal.begin(), newVal.end());
        }
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


