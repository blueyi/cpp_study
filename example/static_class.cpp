/*
 * static_class.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

class A {
public:
    static int a;   //声明静态数据成员a
    const static int c = 3;  //在类中声明并定义const static类型的变量（其实是常量）
    static void func(int i)
    {
        static int b = 100;
        std::cout << "a = " << i << std::endl;
        std::cout << "b = " << b++ << std::endl;
    }
};

int A::a;   //必须在类外部及main函数外部进行定义
int main(void)
{
    std::cout << "A::c = " << A::c << std::endl;
    A::func(A::a);
    A obj_a, obj_b;
    A::a = 7;
    obj_a.func(obj_a.a);
    obj_a.a = 9;
    obj_b.func(obj_b.a);
    std::cout << &A::a << " " << &obj_a.a << " " << &obj_b.a << std::endl;
//    void func(int) *p = A::func();
    std::cout << A::func << " " << obj_a.func << " " << obj_b.func << std::endl;
    return 0;
}
