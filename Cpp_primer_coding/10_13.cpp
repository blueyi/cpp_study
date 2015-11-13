/*
 * 10_13.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

bool isLarge(const std::string &str)
{
    return str.size() >= 5;
}

int main()
{
    std::string str = "the quick red fox jumps over the slow red turtle";
    std::istringstream is(str);
    std::vector<std::string> words;
    std::string tstr;
    while (is >> tstr) {
        words.push_back(tstr);
    }
    std::vector<std::string>::iterator p_iterator = std::partition(words.begin(), words.end(), isLarge);
    words.erase(p_iterator, words.end());
    for (const auto word : words) {
        std::cout << word << " ";
    }
    
    std::cout << std::endl;
    return 0;
}


