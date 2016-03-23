/*
 * quote_basket.cpp
 * Copyright (C) 2016 blueyi <blueyi@debian>
 *
 * Distributed under terms of the MIT license.
 */

#include "Basket.h"
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

double Basket::total_receipt(std::ostream& os) const
{
   double sum = 0;
   //iter指向ISBN相同的一批元素中的第一个，upper_bound返回一个迭代器
   //该迭代器指向这批元素的尾后位置
   for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter)) {
      //multiset的成员函数count返回键值相同的元素的个数 
       sum += print_total(os, **iter, items.count(*iter));
   }
   os << "Total Sale: " << sum << std::endl;
   return sum;
}


int main()
{
   Basket bas;

   for (int i = 0; i < 10; ++i)
    bas.add_item(Quote("CPP", 66.0));
   bas.total_receipt(std::cout);

   Basket bas_d;
   for (int i = 0; i < 10; ++i)
    bas_d.add_item(Bulk_quote("CPP", 66.0, 5, 0.8));
   bas_d.total_receipt(std::cout);

   return 0;
}





