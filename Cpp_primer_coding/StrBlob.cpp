/*
 * StrBlob.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include "StrBlob.h"
#include <iostream>
#include <exception>
#include <algorithm>

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> li) : data(std::make_shared<std::vector<std::string>>(li)) {}

void StrBlob::check(size_type i, const std::string &msg) const
{
    if (i >= data->size())
        throw std::out_of_range(msg);
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

std::string& StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

std::string& StrBlob::front() const 
{
    check(0, "front on empty StrBlob");
    return data->front();
}

std::vector<std::string>::iterator StrBlob::begin()
{
    check(0, "begin on empty StrBlob");
    return data->begin();
}

std::vector<std::string>::iterator StrBlob::end()
{
    check(0, "end on empty StrBlob");
    return data->end();
}

int main()
{
    StrBlob sb{"I", "love", "China"};
    std::for_each(sb.begin(), sb.end(),[](const std::string &str){ std::cout << str << " "; });
    std::cout << std::endl;
    return 0;
}




