#include <iostream>

//func2调用func1的参数，first必将比second先入栈
void func2(int *first)
{
    int second = 0;
    std::cout << "&fir: " << first << std::endl
              << "&sec: " << &second << std::endl;
}

//当func1调用func2时，func1的返回地址及局部变量都将压入一个栈帧中
void func1(void)
{
    int first = 0;
    std::cout << "******stack direction******" << std::endl;
    func2(&first);
}

//在一个栈帧内，局部变量的地址可以由编译器决定，输出一个栈帧内堆和栈的地址
void func(void)
{
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    int t4 = 0;
    std::cout << std::endl << "*******stack*****" << std::endl;
    std::cout << &t1 << std::endl;
    std::cout << &t2 << std::endl;
    std::cout << &t3 << std::endl;
    std::cout << &t4 << std::endl;
    std::cout << "*******heap*****" << std::endl;
    int *t5 = new int;
    int *t6 = new int;
    int *t7 = new int;
    int *t8 = new int;
    std::cout << t5 << std::endl;
    std::cout << t6 << std::endl;
    std::cout << t7 << std::endl;
    std::cout << t8 << std::endl;
}
int main()
{
    func1();
    func();
    getchar();
    return 0;
}
