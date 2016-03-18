/*
 * Bulk_quote.h
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Quote.h"

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double p, std::size_t n, double dis) : Quote(book, p), min_qty(n), discount(dis) {}
    double net_price(std::size_t) const override;

protected:
    std::size_t min_qty = 0;
    double discount = 0.0;
};


#endif /* !BULK_QUOTE_H */
