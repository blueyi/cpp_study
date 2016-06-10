/*
 * fun_obj.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 * 分别使用函数指针和函数对象实现随机通过调用不同的函数随机返回两个数中较大或较小的功能
 * Max返回两个数中较大的，Min返回较小的
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <random>
#include <ctime>

//重载了函数调用运算符()的类
template <typename T> class Max{
public:
    T operator()(const T &a, const T &b) const
    {
        return a > b ? a : b;
    }
};

template <typename T> class Min{
public:
    T operator()(const T &a, const T &b, const T &c) const
    {
        return a > b ? c : c;
    }

    T operator()(const T &a, const T &b) const
    {
        return a > b ? b : a;
    }
};

//通过函数对象的方法调用函数
template <typename T, typename VST> T max_or_min(const T &a, const T &b, const VST &func)
{
    return func(a, b);
}
template <typename T, typename VST> T max_or_min(const T &a, const T &b, const T &c, const VST &func)
{
    return func(a, b, c);
}

//通过函数指针的方法调用函数
template <typename T> T max_or_min(const T &a, const T &b, T (*func)(const T&, const T&))
{
    return func(a, b);
}

int main(void)
{
    Max<int> maxObj;
    Min<int> minObj;
    std::default_random_engine e(time(NULL));
    std::uniform_int_distribution<int> u(0, 19);
    int a = 5, b = 9, c = 20;
    //通过调用函数对象的函数随机输出a,b中较大或较小的
    std::cout << "***Function object***" << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (u(e) % 2 == 0)
            std::cout << max_or_min(a, b, maxObj) << std::endl;
        else
            std::cout << max_or_min(a, b, c, minObj) << std::endl;
    }
    
    //通过调用函数指针的函数随机输出a,b中较大或较小的
    std::cout << "***Function pointer***" << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (u(e) % 2 == 0)
            std::cout << max_or_min(a, b, maxObj) << std::endl;
        else
            std::cout << max_or_min(a, b, minObj) << std::endl;
    }

    return 0;
}
