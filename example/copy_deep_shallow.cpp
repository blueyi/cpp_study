/*
 * copy_deep_shallow.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <cstring>
#

//注释语句注释的是紧接着下面的语句
class A {
public:
    //指定为delete，阻止编译器合成默认的构造函数，当调用该构造函数时，将出现编译错误
    //如果不指定为delete，或指定为default，则系统将合成默认的构造函数
    A() = delete;  

    //将定义该构造函数为深拷贝构造函数，即需要将str的内容复制到一个新的内存地址中，
    //而不仅仅是将成员变量指针name指向str所在的地址
    A(const char *str);

    //如果不定义该拷贝构造函数，则编译器会合成一个默认的拷贝构造函数
    //如果不定义赋值运算符，则合成的赋值运算符将会调用该拷贝构造函数
    A(const A &other);

    //深拷贝的拷贝构造函数，为了与上面的构造函数区分，多加一个无用的形参
    A(const A &other, bool unuse);

    //定义为一个深拷贝的赋值运算符，也就是将other的成员变量name所指定的内存中的内容
    //复制到一个新地址，并将赋值运算符左侧变量的name指向该新地址
    A& operator=(const A& other);

    ~A();
private:
    char *name;
    bool unused;
};

//浅拷贝，因为当other析构时，other的成员变量name所指向的空间将被销毁
//被赋值的实例变量name将成为悬挂指针
A::A(const A &other)  
{
    std::cout << "浅拷贝的拷贝构造函数" << std::endl;
    name = other.name;
}

//深拷贝的构造函数，使用新的内存来存放对象other的成员变量name所指向内存的内容
A::A(const A &other, bool unuse)
{
    std::cout << "深拷贝的拷贝构造函数" << std::endl;
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    unused = unuse;
}


A::A(const char *str)
{
    std::cout << "深拷贝的构造函数" << std::endl;
    if (str != nullptr) {
        name = new char[strlen(str) + 1];
        std::strcpy(name, str);
    }
    else {
        name = new char[1];
        name[0] = '\0';
    }
}


//深拷贝的赋值运算符
A& A::operator=(const A& other)
{
    std::cout << "深拷贝的赋值运算符" << std::endl;
    if (this != &other) {
        A to(other, true);  //调用深拷贝构造函数，以免浅拷贝导致内存泄漏
        char *tn = name;
        name = to.name;
        to.name = tn;
    }
    return *this;
}

A::~A()
{
    std::cout << "析构函数" << std::endl;
    delete[] name;
}

int main(void)
{
    char ts[] = "I love China";
    A a(ts);   //深拷贝，析构时没有问题
//    A b(a);  //浅拷贝的构造函数，a和b的name将指向同一块内存，所以时析构时将出错
    A c = a;  //等价于A c(a)都是调用拷贝构造函数
    A d(ts);  //先定义d，再使用a赋值给d，将调用赋值运算符
    d = a;  //如果没有自定义赋值运行符，将调用合成的赋值运算符，析构d时将出错
    return 0;
}
