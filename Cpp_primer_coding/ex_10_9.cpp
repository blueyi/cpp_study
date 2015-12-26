/*
 * 10_9.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimDups(std::vector<std::string> &words) 
{
    std::sort(words.begin(), words.end());
    auto unique_list = std::unique(words.begin(), words.end());
    words.erase(unique_list, words.end());
}

int main()
{
    std::vector<std::string> words;
    std::string str;
    while (std::cin >> str) {
        words.push_back(str);
    }
    elimDups(words);
    for (auto const &s : words) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}


