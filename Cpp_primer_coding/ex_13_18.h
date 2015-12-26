/*
 * 13_18.h
 * Copyright (C) 2015  <@BLUEYI-PC>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef EX_13_18_H
#define EX_13_18_H

#include <string>
class Employee {
    public:
        Employee();
        Employee(const std::string &str);
        const int id() const { return id_;}
        
    private:
        std::string name_;
        int id_;
        static int s_increment;
};

#endif /* !13_18_H */
