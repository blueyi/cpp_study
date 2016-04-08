/*
 * pointer_example.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

int m_value = 1;

//p是个指针，即p中存储的值是地址，地址即变量在内存中的位置，
//所以可以通过指针在函数内部修改外部的变量
//修改之后原变量就为1
void func0(int *p)
{
    *p = m_value;
}

//函数是按值传递，所以p在函数内部参与计算的实际是p本身的拷贝，而p的指向并不会变，
//只是编译器为p本身新建了一个临时变量，该临时变量中存储的依然是同一个地址，
//即它依然指向原变量，所以在函数内部对指针的重新绑定无效。
//但指针指向的地址就是实实在在的变量本身，所以可以通过指针形参来修改传递进去的参数值，如func0
//无法修改原变量的值 
void func1(int *p)
{
    p = &m_value;
}

//p是指针的指针，传递到函数内部的是指针的指针的副本，但指针p却指向*p的地址
//所以对*p赋值，就是修改*p的值，即使*p存储的是m_value的地址
//与func1实现的功能类似，将修改*p的值，即将*p重新绑定到m_value，但无法修改*p原指向的变量的值，具体看调用
void func2(int **p)
{
    *p = &m_value;
}

//p是一个引用指针，即p代表某个指针本身的引用，引用即实际变量的别名
//对引用操作，相当于对原变量进行操作，即修改传递进来的指针的绑定
//但无法修改p所指向的原来变量的值
void func3(int *&p)
{
    p = &m_value;
}

//普通的引用
//可以修改实参的值，相当于将m_value中的值赋给p所引用的变量
void func4(int &p)
{
    p = m_value;
}

//无法修改实参的值，传递的是实参的副本
void func5(int p)
{
    p = m_value;
}

void print(const std::string &func, const int num1, const int num2)
{
    std::cout << "*****************" << std::endl;
    std::cout << func << ":" << std::endl;
    std::cout << "*pn" << ": " << num1 << std::endl;
    std::cout << "l_value" << ": " << num2 << std::endl;
    std::cout << "*****************" << std::endl;
}

int main(int argv, char **argc)
{
    int l_value = 5;
    int *pn = &l_value;
    int &ref = l_value;
    
    std::cout << "sizeof(pn): " << sizeof(pn) << std::endl;
    std::cout << "sizeof(*pn): " << sizeof(*pn) << std::endl;
    std::cout << "sizeof(ref): " << sizeof(ref) << std::endl;

    std::cout << "l_value: " << l_value << std::endl;

    func0(pn);
    print("func0", *pn, l_value);
    l_value = 5;
    pn = &l_value;

    func1(pn);
    print("func1", *pn, l_value);
    l_value = 5;
    pn = &l_value;

    func2(&pn);
    print("func2", *pn, l_value);
    std::cout << "func2: " << l_value << std::endl;
    l_value = 5;
    pn = &l_value;

    func3(pn);
    print("func3", *pn, l_value);
    std::cout << "func3: " << l_value << std::endl;
    l_value = 5;
    pn = &l_value;

    func4(l_value);
    print("func4", *pn, l_value);
    l_value = 5;

    func5(l_value);
    print("func5", *pn, l_value);

    return 0;
}


