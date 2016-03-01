#include <iostream>
#include <vector>

class X {
    public:
        X() {std::cout << " X() " << std::endl;}
        X(const X&) {std::cout << " X(const X&) " << std::endl;}
        X& operator=(const X& x) {std::cout << " operator=(const X& x) " << std::endl; return *this;}
        ~X() {std::cout << " ~X() " << std::endl;}
};

int main()
{
    std::cout << __LINE__ << std::endl;
    X x;
    std::cout << __LINE__ << std::endl;
    X xh(x);
    std::cout << __LINE__ << std::endl;
    X xy(const &x);
    std::cout << __LINE__ << std::endl;
    X *xn = new X();
    std::cout << __LINE__ << std::endl;
    delete xn;
    std::cout << __LINE__ << std::endl;
    std::vector<X> vx(2);
    return 0;
}
