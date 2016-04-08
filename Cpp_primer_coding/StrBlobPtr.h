/*
 * StrBlobPtr.h
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include "StrBlob.h"

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, std::size_t sz = 0) : wptr(a.data), curr(sz) {}
    bool operator!=(const StrBlobPtr &p)  { return p.curr != (*this).curr; }

    std::string& deref() const;
    StrBlobPtr& incrr();

private:
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
    std::shared_ptr<std::vector<std::string>> check(std::size_t i, const std::string &msg) const;
};

#endif /* !STRBLOBPTR_H */
