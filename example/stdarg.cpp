/*
 * stdarg.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */


//参考链接<http://www.cse.unt.edu/~donr/courses/4410/NOTES/stdarg/>
//主要需要使用到cstdarg头文件中的1个类型和3个函数
//va_list varname 用于定义指向参数列表的变量varname
//va_start(varname, last_defined_arg) 用于将varname指向所有参数中最后一个确定的参数
//va_arg(varname, typename) 获取下一个类型为typename的参数
//va_end(varname)  在函数返回前调用，用于清空参数列表栈，以使函数可以正常返回
//va_copy(varname) 拷贝参数列表（C++11）
#include <cstdarg>
#include <iostream>


//切勿混合使用cstdarg与模板
double sum_arg(int argnum, ...)   //至少要有一个确定的参数
{
    double total = 0.0;
    va_list args;   //定义一个参数列表变量
    va_start(args, argnum);    //初始化参数列表变量，指向最后一个确定的参数（因为可以有多个确定的参数）
    for (int i = 0; i < argnum; ++i) {
        double num = va_arg(args, double);    //获取下一个参数
//        std::cout << "==" << num << "==" << std::endl;
        total += num;
    }
    va_end(args);   //清空系统栈，返回使用函数调用者可以正常返回
    return total;
}

int main(void)
{
    std::cout << "double-1: " << sum_arg(5, 1, 2, 3.4, 5, 6.2) << std::endl;
    std::cout << "double-2: " << sum_arg(5, 1.0, 2.0, 3.4, 5.0, 6.2) << std::endl;
    return 0;
}



