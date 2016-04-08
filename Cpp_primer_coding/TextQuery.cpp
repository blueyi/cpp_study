/*
 * TextQuery.cpp
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#include "TextQuery.h"
#include "StrBlob.h"
#include "QueryResult.h"
#include <iostream>
#include <sstream>

TextQuery::TextQuery(std::ifstream &in) : text(new std::vector<std::string>)
{
    std::string line;
    line_no num = 0;
    while (getline(in, line)) {
        std::string word;
        num++;
        text->push_back(line);
        std::istringstream is(line);
        while (is >> word) {
            auto &no = result[word]; 
            if (!no)
              no = std::make_shared<std::set<line_no>>();
            no->insert(num);
        }
    }
}

QueryResult TextQuery::query(const std::string &word) const
{
    static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
    
    auto found = result.find(word); 
    if (found == result.end())
        return QueryResult(word, nodata, text);
    else
        return QueryResult(word, found->second, text);
}

std::ostream& print (std::ostream &os, const QueryResult &qr)
{
    os << qr.word << " occurs " << qr.lines->size() << (qr.lines->size() > 1 ? " times" : " time") << std::endl;
    for (auto i : *(qr.lines)) {
        os << "(" << i << " line): " << *(qr.text->begin() + i - 1) << std::endl;
    }
    return os;
}

int main()
{
    std::ifstream in("text.txt");
    if (!in)
        return -1;
    TextQuery tq(in);
    QueryResult qs = tq.query("one");
    print(std::cout, qs);
    return 0;
}
