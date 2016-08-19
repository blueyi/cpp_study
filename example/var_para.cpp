#include <iostream>

template <typename T, typename... Args>
void foo(const T &t, const Args& ... args)
{
    std::cout << "sizeof...(Args): " << sizeof...(Args) << std::endl;  //输出模板参数Args的个数
    std::cout << "sizeof...(args): " << sizeof...(args) << std::endl; //输出函数参数args的个数
}

template <typename T>
std::ostream& print(std::ostream &os, const T &t)    //用于结束递归，当参数个数为2个时调用
{
    return os << t << std::endl;;
}

template <typename T, typename ... Args>
std::ostream& print(std::ostream &os, const T &t, Args ... rest)  //当参数个数大于2个时调用
{
    os << t << ", ";
    return print(os, rest...);
}

template <typename T>
T sum_template(const T &t)   //声明一个重载的固定参数数目的函数，用于结束递归
{
    return t;
}

template <typename Tr, typename T, typename... Args>
Tr sum_template(const T &t, const Args&... args)   //该函数通过调用仅含一个参数的重载函数来结束递归
{
    return  sum_template(args...) + t;  //展开函数参数包args中的实参
}


int main(void)
{
    foo('a', 2, 3, "ssl");
    print(std::cout, 'a', 2, 3, "ssl");
    std::cout << sum_template<double>(1, 2, 3, 4, 5) << std::endl;
    std::cout << sum_template<double>(1.1, 2.5, 3, 4.4, 5) << std::endl;
    return 0;
}
