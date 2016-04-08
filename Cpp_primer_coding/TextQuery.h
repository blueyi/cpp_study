/*
 * TextQuery.h
 * Copyright (C) 2016  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <vector>
#include <string>
#include <memory>
#include <map>
#include <set>
#include <fstream>

class QueryResult;

class TextQuery {
public:
    friend class QueryResult;
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &word) const;

private:
    std::shared_ptr<std::vector<std::string>> text;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> result;
};


#endif /* !TEXTQUERY_H */
