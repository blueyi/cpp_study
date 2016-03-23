/*
 * Quote.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include "Limit_quote.h"
#include <iostream>

double Bulk_quote::net_price(std::size_t n) const
{
    if (n > quantity)
        return  discount * price * n;
    else
        return price * n;
}

double Limit_quote::net_price(std::size_t n) const
{
    if (n > maxcnt) {
        return  discount * price * maxcnt + (n - maxcnt) * price;
    }
    else if (n > quantity)
        return price * n * discount;
    else
        return price * n;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << item.isbn() << ": " << "\t#: " << n << "\tTotal: " <<  ret << std::endl;
    return ret;
}


int main()
{
   // Quote book("C++ primer", 66.9);
    Bulk_quote bulk("Cpp", 66.9, 10, 0.8);
    Limit_quote limt("C", 66.9, 10, 0.8, 15);
    //print_total(std::cout, book, 20);
    print_total(std::cout, bulk, 20);
    print_total(std::cout, limt, 20);
    return 0;
}


