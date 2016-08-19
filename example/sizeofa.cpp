/*
 * sizeofa.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include<stdio.h>
int main()
{
    char c='a';
    printf("%d %d\n",sizeof(c),sizeof('a'));
    int x = 1;
    int y = ~x;
    printf("%d\n", y);
    return 0;
}


