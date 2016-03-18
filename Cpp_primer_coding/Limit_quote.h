/*
 * Limit_quote.h
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include "Bulk_quote.h"
class Limit_quote : public Bulk_quote {
public:
    Limit_quote() = default;
    Limit_quote(const std::string &book, double p, std::size_t cnt, double dis, std::size_t mcnt) : Bulk_quote(book, p, cnt, dis), maxcnt(mcnt) {}
    double net_price(std::size_t n) const override;
private:
    std::size_t maxcnt = 0;
};


#endif /* !LIMIT_QUOTE_H */
