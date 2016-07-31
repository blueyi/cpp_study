/*
 * cpp_test_extern.cpp
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include "extern_c.h"
#include "divi.h"

int main(void)
{
    int a = 3, b = 5;
    int a_b_add = add(a, b);
    int a_b_mult = mult(a, b);
    float a_b_div = divi(a, b);
    char ch = get(65);
    std::cout << "a + b = " << a_b_add << std::endl;
    std::cout << "a * b = " << a_b_mult << std::endl;
    std::cout << "a / b = " << a_b_div << std::endl;
    std::cout << "char(65) = " << ch << std::endl;
    return 0;
}




