/*
 * cpp_virtual_func.cpp
 * Copyright (C) 2016 blueyi <blueyi@ubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

class Base {
public:
    Base() = default;
    Base(const Base&) = default;
    Base(int i) : x(i) {};
    virtual int return_val() const { return x; }; //虚函数
    ~Base() = default;
protected:  //为了使派生类可以访问该成员
    int x;
};

class Derive : public Base {
public:
    Derive() = default;
    Derive(const Derive&) = default;
    Derive(int i) : Base(i), y(i) {};
    int return_val() const override { return x * y; }; 
    ~Derive() = default;
private:
    int y; 
};

//形参item将即可接受Base对象，又可以接受其派生类对象
void print_val(const Base &item, std::ostream &os = std::cout)
{
    os << item.return_val() << std::endl;  //return_val将根据item所指向的不同对象调用不同类的虚函数
}

int main(void)
{
    Base b1(5);
    Derive d1(6);
    //使用同一个函数print_val分别输出b1和d1的值
    print_val(b1);
    print_val(d1);
    return 0;
}
