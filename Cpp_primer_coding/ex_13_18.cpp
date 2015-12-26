/*
 * 13_18.cpp
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include "ex_13_18.h"

int Employee::s_increment = 1;

Employee::Employee()
{
    id_ = s_increment++;
}

Employee::Employee(const std::string &str) 
{
    id_ = s_increment++;
    name_ = str;
}

int main()
{
    return 0;
}


