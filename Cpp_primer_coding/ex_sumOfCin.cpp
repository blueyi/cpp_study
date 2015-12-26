#include <iostream>

int main()
{
    int sum = 0;
    int smallNum = 0;
    int largeNum = 0;
    std::cout << "Enter tow num: ";
    std::cin >> smallNum >> largeNum;
    while (smallNum++ <= largeNum)
    {
        sum += smallNum;
    }
    std::cout << sum << std::endl;
    return 0;
}
