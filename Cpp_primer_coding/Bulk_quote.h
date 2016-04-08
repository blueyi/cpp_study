/*
 * Bulk_quote.h
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double p, std::size_t n, double dis) : Disc_quote(book, p, n, dis) {}
    double net_price(std::size_t) const override;
    Bulk_quote* clone() const & { return new Bulk_quote(*this); }
    Bulk_quote* clone()  && { return new Bulk_quote(std::move(*this)); }
    virtual ~Bulk_quote() = default;
};


#endif /* !BULK_QUOTE_H */
