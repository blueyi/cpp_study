#include <iostream>
#include <string>
#include <sstream>

std::istringstream& print(std::istringstream& in)
{
    std::string str;
    while (in >> str) {
        std::cout << str << std::endl;
    }
    return in;
}

int main()
{
    std::istringstream is("Hello world");
    print(is);
    return 0;
}
