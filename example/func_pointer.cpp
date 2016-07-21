#include <iostream>

void tf(char c, int i)
{
    std::cout << "Normal: " << c << i << std::endl;
}

class A {
public:
    void func1(char c, int i)
    {
        std::cout << "Class func1: " << c << i << std::endl;
    }

    void func2(char c, int i)
    {
        std::cout << "Class func2: " << c << i << std::endl;
    }

    static void func3(char c, int i)
    {
        std::cout << "Class func2: " << c << i << std::endl;
    }

    void func4(char c, int i) const 
    {
        std::cout << "Class func2: " << c << i << std::endl;
    }
};

int main(void)
{
    void (*pf)(char, int) = NULL;   //普通函数指针定义并使其指向NULL
    pf = tf;
    pf('t', 1);

    void (A::*pf1)(char, int) = &A::func1;  //指向类的非静态成员函数的指针，初始时必须使用取地址符
    A obj_a;
    (obj_a.*pf1)('f', 1);  //这里必须要使用括号把前面对象和函数指针名括住，且必须使用.*，而不是->
//    pf = obj_a.func1;  //错误，不能让函数指针pf指向对象的指针，即使他们参数和返回值一样

    A obj_b;
    pf1 = &A::func2;
    (obj_b.*pf1)('f', 1);

    pf = A::func3;  //静态成员可以像普通函数一样不加取地址符
    pf('f', 3);   //因为是静态成员，所以不需要对象，可以直接通过函数指针调用

    void (A::*pfc)(char, int) const = &A::func4;  //const 函数的函数指针也必须带有const
    A obj_c;
    (obj_c.*pfc)('c', 4);
    return 0;
}


