#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec{"I", "love", "china"};
    std::size_t i = 0;
    for (auto v : vec) {
        std::cout << vec[i] << " ";
        ++i;
    }
    std::cout << std::endl;
    return 0;
}
