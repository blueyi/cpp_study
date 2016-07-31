/*
 * c_test_extern.c
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

#include "extern_c.h"  //该头文件实际是C++的头文件，里面只有兼容C语言的声明，定义都带有extern "C"， 所以可以引用
#include <stdio.h>

int main(void)
{
    int a = 3, b = 5;
    int a_b_add = add(a, b);
    int a_b_mult = mult(a, b);
    char ch = get(65);
    printf("a + b = %d\na * b = %d\nchar(65) = %c\n", a_b_add, a_b_mult, ch);
    return 0;
}



