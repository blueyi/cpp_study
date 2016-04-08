/*
 * QueryResult.h
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include <ostream>
#include "TextQuery.h"

class QueryResult {
public:
    friend std::ostream& print(std::ostream &, const QueryResult&);
    QueryResult(std::string w, std::shared_ptr<std::set<TextQuery::line_no>> l, std::shared_ptr<std::vector<std::string>> t) : word(w), lines(l), text(t) {};

private:
    std::string word;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
    std::shared_ptr<std::vector<std::string>> text;
};


#endif /* !QUERYRESULT_H */
