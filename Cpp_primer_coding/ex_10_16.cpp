/*
 * 10_16.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void elimDups(std::vector<std::string> &words)
{
    std::sort(words.begin(), words.end());
    std::vector<std::string>::iterator unique_ite = std::unique(words.begin(), words.end());
    words.erase(unique_ite, words.end());
}

std::string make_plural(int count, std::string str)
{
    return count < 1 ? str : str + "s";
}

void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz)
{
    /*
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), [](const std::string &a, const std::string &b){ return a.size() < b.size(); });
    std::vector<std::string>::iterator find_ite = std::find_if(words.begin(), words.end(), [sz](const std::string &a){ return a.size() >= sz;});
    int count = words.end() - find_ite;
    */
    int count = count_if(words.begin(), words.end(), [](const std::string &word) {return word.size() >= 6;});
    std::cout << count << " " << make_plural(count, "word") << " of length " << sz << " or longer." << std::endl;
    //for_each(find_ite, words.end(), [](const std::string &str){ std::cout << str << " "; });
    for_each(words.begin(), words.end(), [](const std::string &word) { if (word.size() >= 6) std::cout << word << " ";});
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> words;
    std::string str;
    while (std::cin >> str) {
        words.push_back(str);
    }
    biggies(words, 5);
    return 0;
}


