/*
 * dynamic_arr.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>
#include <memory>

char * conc(const char *a, const char *b)
{
    char *carr = new char[sizeof(a) + sizeof(b) + 1];
    char *temp = carr;
    for (const char *pa = a; *pa != '\0'; ++pa)
       *(temp++) = *pa; 
    for (const char *pb = b; *pb != '\0'; ++pb)
       *(temp++) = *pb; 
    *temp = '\0';
    return carr;
}

std::string cons(const std::string &str1, const std::string &str2)
{
    return str1 + str2;
}

int main()
{
    char a[] = "I love china";
    const char *b = " and you!";
    char *tc = conc(a, b);
    std::cout << tc << std::endl;
    delete[] tc;

    std::cout << "Enter long: " << std::endl;
    std::size_t size{0};
    std::cin >> size;
    std::size_t i = 0;
    char ch;
    std::unique_ptr<char[]> up(new char[size + 1]);
    std::cin.ignore();
    std::cout << "Enter string:" << std::endl;
    while (std::cin.get(ch) && i < size) {
        up[i++] = ch;
    }
    up[i] = '\0';
    std::cout << up.release() << std::endl;
    return 0;
}


