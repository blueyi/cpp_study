#include <iostream>

int display(char c, int i)
{
    for (int n = 0; n < i; ++n)
        std::cout << c;
    std::cout << std::endl;
    return i;
}

//接受一个指向形如display的函数指针，一个char和一个int作为参数的函数
//没有返回值
void dfun(int (*pp)(char, int), char c, int i)
{
    pp(c, i);
}

//该函数与dfun函数类似，只是其返回值为指向形如display函数的函数指针
int (*pdfun(int (*pd)(char, int), char c, int i))(char, int)
{
    pd(c, i);
    return pd;
}

int main(void)
{
    dfun(display, 'd', 6);  //调用带有函数指针作为参数的函数

    int (*pd)(char, int) = pdfun(display, 'p', 7);  //调用返回值为函数指针的函数
    pd('p', 8);  //调用函数指针的返回值的函数

    //使用typedef简化函数指针类型的定义
    //定义一个指向形如display的函数指针的类型pd_type
    typedef int (*pd_type)(char, int);
    pd_type pdd = display;
    pdd('s', 10);

    //定义一个指向形如pdfun的函数指针的类型pdfun_tye类型
    typedef int (*(*pdfun_type)(pd_type, char, int))(char, int);
    pdfun_type ppdfun = pdfun;
    pd_type ppd = ppdfun(pdd, 'u', 12);  //调用并获取其返回的函数指针
    ppd('x', 15);

    return 0;
}

