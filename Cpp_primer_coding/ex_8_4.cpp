#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream in("test.cpp", std::ifstream::in);
    if (!in) {
        std::cout << "open file ERROR" << std::endl;
        return -1;
    }
    std::vector<std::string> vecs;
    std::string line;
    while (in >> line) {
        vecs.push_back(line);
    }
    for (const std::string str : vecs) {
        std::cout << str << std::endl;
    }
    return 0;
}
