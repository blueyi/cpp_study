/*
 * tpragma.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#pragma pack(16)
#include <iostream>
#include <string>

struct Test {
    char x1;
    float x3;
    short x2;
    char x4;
};

class node {
    char c;
    int i;
    short s;
};

class node1 {
    int i;
    char c;
    short s;
};

class node12 : public node1 {
    char c1;
};

class node13 : public node12 {
    char c2;
};

class node2 {
    node n;
    double d;
    short s;
};

template <typename T> int size(std::string name, T type)
{
    std::cout << name << ": " << sizeof(type) << std::endl;
    return sizeof(T);
}

int main(void)
{
    node n;
    node1 n1;
    node2 n2;
    node13 n13;
    size("node", n);
    size("node1", n1);
    size("node2", n2);
    size("node13", n13);
    return 0;
}

