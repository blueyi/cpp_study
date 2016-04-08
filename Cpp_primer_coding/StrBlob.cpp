/*
 * StrBlob.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include "StrBlobPtr.h"
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

//std::vector<std::string>::iterator StrBlob::begin()
//{
//    check(0, "begin on empty StrBlob");
//    return data->begin();
//}
//
//std::vector<std::string>::iterator StrBlob::end()
//{
//    check(0, "end on empty StrBlob");
//    return data->end();
//}
//
std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i, const std::string &msg) const
{
    auto ret = wptr.lock();
    if (!ret)
        throw std::runtime_error("Unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string& StrBlobPtr::deref() const
{
    auto p = check(curr, "increase past end of StrBlobPtr");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incrr()
{
    check(curr, "increase past end of StrBlobPtr");
    ++curr;
    return *this;
}

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { auto ret = StrBlobPtr(*this, data->size()); return ret; }

int main()
{
    StrBlob sb{"I", "love", "China"};
    StrBlobPtr pb = sb;
    for (auto i = sb.begin(); i != sb.end();i.incrr())
        std::cout << i.deref() << " ";
    std::cout << std::endl;
    return 0;
}




