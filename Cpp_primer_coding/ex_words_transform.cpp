/*
 * words_transform.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

std::map<std::string, std::string> buildMap(std::ifstream &mapfile)
{
    std::map<std::string, std::string> trans_map;
    std::string key;
    std::string value;
    while (mapfile >> key && getline(mapfile, value)) {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            throw std::runtime_error("no rule for " + key);
    }
    return trans_map;
}

const std::string & transword(const std::string &str, const std::map<std::string, std::string> &trans_map)
{
    std::map<std::string, std::string>::const_iterator it = trans_map.find(str);
    if (it != trans_map.cend())
        return it->second;
    else 
        return str;
}

void transform(std::ifstream &infile, std::ifstream &mapfile)
{
    auto trans_map = buildMap(mapfile);
    std::string line;
    while (getline(infile, line)) {
        std::istringstream is(line);
        std::string str;
        while (is >> str) {
            std::cout << transword(str, trans_map) << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::ifstream infile("words.txt"), mapfile("trans_map.txt");
    if (infile && mapfile)
        transform(infile, mapfile);
    else
        std::cout << "Error, Can't open the file" << std::endl;
    return 0;
}


