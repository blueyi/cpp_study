/*
 * 11_7.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>

int main()
{
    std::map<std::string, std::vector<std::string>> family;
    std::string family_name, children_name;
    std::cout << "Family: " << std::endl;
    while (std::cin >> family_name && family_name != "NONE") {
        std::vector<std::string> children;
        std::cout << "Childen: " << std::endl;
        while (std::cin >> children_name && children_name != "NONE") {
            children.push_back(children_name);
        }
        family[family_name] = children;
        std::cout << "Family: " << std::endl;
    }
    std::ostream_iterator<std::string> out_it(std::cout, ", ");
    for (const auto &fa : family) {
        std::cout << fa.first << ": ";
        std::copy(fa.second.begin(), fa.second.end(), out_it);
        std::cout << std::endl;
    }
    return 0;
}


