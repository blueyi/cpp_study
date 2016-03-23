/*
 * Disc_quote.h
 * Copyright (C) 2016 blueyi <blueyi@debian>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H
#include "Quote.h"
class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double salse_price, std::size_t qty, double dis) : Quote(book, salse_price), quantity(qty), discount(dis) {}
    virtual double net_price(std::size_t cnt) const { return price * cnt;} 
    virtual ~Disc_quote() = default;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};


#endif /* !DISC_QUOTE_H */
