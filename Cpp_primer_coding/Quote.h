/*
 * Quote.h
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef QUOTE_H
#define QUOTE_H

#include <string>
class Quote {
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    std::string isbn() const { return bookNo; }
    virtual ~Quote() = default;
    virtual double net_price(std::size_t n) const { return price * n; }

private:
    std::string bookNo;

protected:
    double price = 0.0;
};

double print_total(std::ostream &os, const Quote &item, size_t n);

#endif /* !QUOTE_H */
