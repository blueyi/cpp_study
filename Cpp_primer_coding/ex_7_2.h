/*
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef 7_2CPP_H
#define 7_2CPP_H

#include <string>

using namespace std;
struct Sales_data {
    std::string isbn(); 
    Sales_data& combine(const Sales_data &rhs);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
int main()
{
    Sales_data total;

}

#endif






