/*
 * tuple.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <list>

int main(void)
{
    //定义并初始化一个tuple
    std::tuple<int, std::string, std::vector<double>, std::list<int>>
        tuVal(5, "blueyi", {0.1, 0.2, 0.3, 0.4}, {1, 2, 3, 4});
    typedef decltype(tuVal) tuType; //定义一个tuVal的类型的别名
    int cnt = std::tuple_size<tuType>::value; //获取tuVal中成员个数
    std::cout << cnt << std::endl;
    std::tuple_element<0, tuType>::type ti = std::get<0>(tuVal); //获取tuVal中的第1个成员，其中ti类型为int
    //tuple_element<i, tupleType>::type中的i必须是一个const值
    std::cout << "0: " << ti << std::endl;
    std::tuple_element<1, tuType>::type ts = std::get<1>(tuVal); //获取tuVal中的第2个成员，其中ti类型为int
    std::cout << "1: " << ts << std::endl;

    std::tuple_element<2, tuType>::type tv = std::get<2>(tuVal); //获取tuVal中的第3个成员，其中tv类型为vector
    std::cout << "2: " << std::endl;
    for (auto t : tv) {
        std::cout << t << " ";
    }
    std::cout << std::endl;
 
    std::tuple_element<3, tuType>::type tl = std::get<3>(tuVal); //获取tuVal中的第4个成员，其中tv类型为list
    std::cout << "3: " << std::endl;
    for (auto t : tl) {
        std::cout << t << " ";
    }
    std::cout << std::endl;
    
    return 0;
}


