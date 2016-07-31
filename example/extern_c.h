/*
 * extern_c.h
 * Copyright (C) 2016 blueyi <blueyi@blueyi-lubuntu>
 *
 * Distributed under terms of the MIT license.
 */

//与C语言兼容的函数声明，函数定义放在C++的源代码中
#ifndef EXTERN_C_H
#define EXTERN_C_H
int add(int, int);
char get(char);
int mult(int, int);

#endif /* !EXTERN_C_H */
