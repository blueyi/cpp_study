/*
 * 13_13.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>

class Employee {
    public:
        Employee() {
            static int num = 1;
            id = num++;
        }
        Employee(std::string &str) : name(str) {
            static int num = 1;
            id = num++;
        }
    private:
        std::string name;
        int id;
};

int main()
{
    return 0;
}

