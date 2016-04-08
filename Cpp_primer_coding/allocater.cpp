/*
 * allocater.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>
#include <memory>

int main()
{
    std::allocator<std::string> alloc;
    auto const p = alloc.allocate(5);
    auto q = p;
    std::string s;
    while (std::cin >> s && q != p + 5)
        alloc.construct(q++, s);
    while (q != p) {
        std::cout << *(--q) << " ";
        alloc.destroy(q);
    }
    alloc.deallocate(p, 5);
    return 0;
}


