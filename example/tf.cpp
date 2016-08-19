#include <iostream>
#include <unistd.h>

int main(void)
{
    int count = 0;
    fork() && fork() || fork();
    std::cout << ++count << std::endl;
    return 0;
}
