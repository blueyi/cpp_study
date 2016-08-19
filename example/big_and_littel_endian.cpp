#include <iostream>

//单独一个元素在内存中的存储是从低地址到高地址   
//下面验证   
void int_address()
{
    int a = 12345;  //0x00003039
    char *p = (char*)(&a);
    for (int i = 0; i < sizeof(a); ++i) {
        printf("%p\t0x%.2x\n", p + i, *(p + i));
    }
}

bool is_big_end_pointer()
{
    int p = 1;
    if (*((char*)&p) == 1)
        return false;
    else
        return true;
}

bool is_big_end_union()
{
    union {
        int i;
        char ch;
    } endn;
    endn.i = 1;
    if (endn.ch == 1)
        return false;
    else
        return true;
}

int main(void)
{
    std::cout << "address increase direction" << std::endl;
    int_address();

    std::cout << std::endl;
    std::cout << "**pointer**" << std::endl;
    if (is_big_end_pointer())
        std::cout << "big endian" << std::endl;
    else
        std::cout << "little endian" << std::endl;

    std::cout << std::endl;
    std::cout << "**union**" << std::endl;
    if (is_big_end_union())
        std::cout << "big endian" << std::endl;
    else
        std::cout << "little endian" << std::endl;

    return 0;
}
