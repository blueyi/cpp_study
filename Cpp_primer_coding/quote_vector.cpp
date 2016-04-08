/*
 * quote_vector.cpp
 * Copyright (C) 2016 blueyi <blueyi@debian>
 *
 * Distributed under terms of the MIT license.
 */

#include "Bulk_quote.h"
#include <iostream>
#include <vector>
#include <memory>


double Bulk_quote::net_price(std::size_t n) const
{
    if (n > quantity)
        return  discount * price * n;
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
    std::vector<Disc_quote> qv;
    double total = 0.0;
    for (int i = 0; i < 10; ++i)
        qv.push_back(Bulk_quote("CPP", 66.0, 5, 0.8));
    for (const auto &q : qv)
        total += q.net_price(10);
    std::cout << total << std::endl;

    double total_s = 0.0;
    std::vector<std::shared_ptr<Disc_quote>> qs;

    for (int i = 0; i < 10; ++i)
        qs.push_back(std::make_shared<Bulk_quote>("CPP", 66.0, 5, 0.8));
    for (const auto &q : qs)
        total_s += q->net_price(10);
    std::cout << total_s << std::endl;

    return 0;
}





