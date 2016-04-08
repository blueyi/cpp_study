/*
 * new_test.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>>  new_vec()
{
    //return new std::vector<int>();
    return std::make_shared<std::vector<int>>();
}

void cin_vec(std::shared_ptr<std::vector<int>>  vec)
{
    std::cout << "Enter num:" << std::endl;
    int num;
    while (std::cin >> num)
        vec->push_back(num);
}

void cout_vec(std::shared_ptr<std::vector<int>>  vec)
{
    std::cout << "Your num: " << std::endl;
    for (int i : *vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}



int main()
{
    std::shared_ptr<std::vector<int>> pvec = new_vec();
    cin_vec(pvec);
    cout_vec(pvec);
    return 0;
}
